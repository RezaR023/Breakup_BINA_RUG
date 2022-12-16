#define test1_cxx
//#include "test1.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


 #include "newAnalysis.h"       /*include all the variables*/
// #include "TLorentzVector.h"    
//#include "TVector3.h"        
#define NEvents 1e9
#define E0_p 938.272
#define E0_d 1875.612
#define TE 0.752 /* distance between target and E , meter*/ 

TH2D *htest1;
TH2D *htest3;
TH2D *htest4;
TH2D *htest5;
TH2D *hp1p2;
TH2D *hscale21;
TH2D *hscale22;
 int num1[11][11];

Bool_t flag= false;
Double_t   MIN0(Double_t a,Double_t b){
  if (a<b) {flag= true; return a;}
  if (b<a) return b;
  if( a==b) return a; 
  else return -1;
}/*End of MIN*/
double calTOF(double dis, double Ekin, int id)
{

  /* id==1 for deuteron, id==2 fpr proton */
  double  Eratio=0.0;
  double  TOF=0.0;
  if(id==1)
    Eratio = (E0_d/(E0_d + Ekin))* (E0_d/(E0_d + Ekin));
  if(id==2)
    Eratio = (E0_p/(E0_p + Ekin))* (E0_p/(E0_p + Ekin));
  TOF =  dis/(0.3* (sqrt(1.0 - Eratio)));
  return TOF;
}
  



Double_t calcDistance(Double_t theta, Double_t phi, Double_t R0=0.752)
{

  //
  // Translate degrees to radians
  //

  Double_t theta_rad=theta*TMath::Pi()/180.;
  Double_t phi_rad=phi*TMath::Pi()/180.;

  //
  // Calculate unit vector
  //

  Double_t ux=TMath::Sin(theta_rad)*TMath::Cos(phi_rad);
  Double_t uy=TMath::Sin(theta_rad)*TMath::Sin(phi_rad);
  Double_t uz=TMath::Cos(theta_rad);

  Double_t uyz=TMath::Sqrt(uy*uy+uz*uz);

  //
  // based on the elements of unit vector and
  // the projection on the yz and xz plane, obtain
  // the coordinates of our vector (x,y,z)
  //

  Double_t y=uy*R0/uyz;
  Double_t z=uz*R0/uyz;
  Double_t x=ux*z/uz;

  //TVector3 r(x,y,z);


  //
  // Return the length of the vector (x,y,z)
  //

  return sqrt(x*x + y*y + z*z);
}





  double Length(double theta, double phi)
  {
  double theta1,theta2;
  double xx, zz, yy;
  double distance;
  
  theta1 = TMath::ASin(TMath::Sin(D2R*theta)*TMath::Cos(D2R*phi));
  theta2 =  TMath::ATan( TMath::Sin(D2R*theta)*TMath::Sin(D2R*phi)/TMath::Cos(D2R*theta));
  
  xx = TE* TMath::Tan(theta1);
  yy = TE* TMath::Sin(theta2);
  zz = TE* TMath::Cos(theta2);
  
  distance = sqrt(xx*xx + yy*yy + zz*zz);
  return distance;
}


void test1::Loop()
{
  //fprintf(stdout," ********** Analysis for Pol==%i is started *********** \n",pol);  
   oldTime=0; 

for(int i=1 ; i<11 ; i++)
    {
      for(int j=1 ; j<11 ; j++)
	{
	  if(i<10 && j<10)
	    {
	      num1[i][j] = i*10 + j;
	     
	    }
	  if(i==10 || j==10)
	    {
	      num1[i][j] = i*100 + j;
	      
	    }
	}
    }

   hscale21 = new TH2D ("hscale21","",120,0,120,100,-10,10);
   hscale22 = new TH2D ("hscale22","",120,0,120,100,-10,10);

   Book_Reset_histos(pol);
   openfiles();
   Define_GCuts();
   gStyle->SetPalette(1);
   htest1 = new TH2D ("htest1","",200,0,200,200,0,200);
   htest3 = new TH2D ("htest3","",360,0,360,100,-4,6);
   htest4 = new TH2D ("htest4","",360,0,360,100,-4,6);
   hEtest = new TH2D ("hEtest","",120,0,120,120,0,120);
   hp1p2 = new TH2D ("hp1p2","",120,0,120,120,0,120);

   // htest5 = new TH2D ("htest5","",1005,10,1015,400,-20,20);
   /* Energy loss as a function of deposited  denergy for proton(func1) and for proton (func2) */
   func1= new TF1("fun1","pol5",.01,110);
   func2= new TF1("fun2","pol4",.1,110);
   func1->SetParameters(18.72,-0.8077,0.0194,-0.000254,1.723e-6,-4.736e-9);
   func2->SetParameters(25.69,-0.7636,0.01181,-8.67e-5,2.307e-7);
   char ch2[255]; 
   sprintf(ch2,"AllrootFile-%d_AFCal.root",pol); 
   froot=new TFile(ch2,"RECREATE");

  double eltaEp=0.0;
  double deltaEd=0.0;
  double TotBeamC=0.0;
  double TotTime=0.0;
  double RelativTime=0.0;
  double tempd1=0.0;
  double tempp1=0.0;
  double tempd2=0.0;
  double tempp2=0.0;
  double value1=0.0;
  double value2=0.0;
  double End = 0.0;
  double Enp = 0.0;
  double  Len_1 = 0.0;
  double  Len_2 = 0.0;
  double  TOF_d1 = 0.0;
  double  TOF_p1 = 0.0;
  double  TOF_d2 = 0.0;
  double  TOF_p2 = 0.0;
  TH2D *htest=new TH2D ("htest","",90,0,360,400,-10,10);
  TH2D *htest2=new TH2D ("htest2","",360,0,360,200,0,1);
  /* the fcorec function crrect the TOF for the cilenrical shape of forward wall */
  //  TF1 *fcorec1=new TF1("fcorec1","-.95 + (0.4*sin((3.14/180.)*x))**2",0,360);
  //  TF1 *fcorec2=new TF1("fcorec2","-1.35 + (0.45*sin((3.14/180.)*x))**2",0,360);

  //TF1 *fcorec1=new TF1("fcorec1","0.5 + (0.8*sin((3.14/180.)*x))**2",0,360);

  //   double ScalerCount=0.0;
  //double kHz=0.0;
  double kHzPol=0.0;
  double corec[10];
   TF1 *Dcorec=new TF1("Dcorec","1+2*cos(2*(3.14/180.)*x)",0,360);

//   In a ROOT session, you can do:
//      Root > .L test1.C
//      Root > test1 t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
  double Delphi;
  int Polar;

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      double LT=(b3_10KhzD * b3_AcFera)/(b3_10Khz * b3_TFera);
      //double DowScalT1=(b3_T1s/b3_T1sDTS); 
      b3_MWPCtheta1+=gRandom->Uniform(-0.2,0.2); /* to make theta distrbution more uniform */
      b3_MWPCtheta2+=gRandom->Uniform(-0.2,0.2); /* to make theta distrbution more uniform */
                 
      Delphi=0.0;
      if(b3_MWPCphi1>0. && b3_MWPCphi2>0. && b3_MWPCphi1<360. && b3_MWPCphi2<360.) 
	Delphi= fabs(b3_MWPCphi1-b3_MWPCphi2);
      if(Delphi>180.) Delphi=360. - Delphi;
      if(/*b3_Pol==Polar  &&*/ LT>0.1 && b3_DowScalT1<100)
	{ //<---!
	  if(b3_T1>0 && fabs(b3_WLtdc1-b3_WLtdc2)<80  && (b3_WLdet1!=b3_WLdet2) && 
	     (b3_WRdet1!=b3_WRdet2) &&  b3_EFW2>0 && b3_EFW1>0 )
	    {//<<--<<--!
	      for(int i=0 ; i<Nkinema; i++)
		{
		  if( b3_MWPCtheta2>theta_p[i]-2. && b3_MWPCtheta2<theta_p[i] + 2. && 
		      b3_MWPCtheta1>theta_d[i]-2. && b3_MWPCtheta1<theta_d[i] + 2. &&  fabs(Delphi -deltaphi[i])<5.)
		    {
		      Len_1 = Length(b3_MWPCtheta1,b3_MWPCphi1);
		      Len_2 = Length(b3_MWPCtheta2,b3_MWPCphi2);
		      
		      // Len_1 = calcDistance(b3_MWPCtheta1,b3_MWPCphi1);
		      //  Len_2 = calcDistance(b3_MWPCtheta2,b3_MWPCphi2);
		      //Len_1 = TE/cos(D2R*b3_MWPCtheta1);
		      // Len_2 = TE/cos(D2R*b3_MWPCtheta2);
		      htest2->Fill(b3_MWPCphi1, Len_1);
		      
		      /* assuming the first particle is a deuteronn */
		      tempd1 = b3_EFW1;
		      tempd1 = d_scalning(tempd1,(int)b3_WLdet1);
		      double temdB = tempd1;
		      tempd1 = tempd1+func2->Eval(tempd1);
		      TOF_d1 = calTOF(Len_1,tempd1,1);
		      /* and the second particle is a proton  */      
		      tempp1 = b3_EFW2;
		      tempp1 = p_scalning(tempp1,(int)b3_WLdet2);
		      double tempB = tempp1;
		      tempp1 = tempp1+func1->Eval(tempp1);
		      TOF_p1 = calTOF(Len_2,tempp1,2);
		      /* assuming the second particle is a deuteronn  */
		      tempd2 = b3_EFW2;
		      tempd2 = d_scalning(tempd2,(int)b3_WLdet2);
		      tempd2 = tempd2+func2->Eval(tempd2);
		      TOF_d2 = calTOF(Len_2,tempd2,1);
		      /* and the first particle is a proton  */    
		      tempp2=b3_EFW1;
		      tempp2= p_scalning(tempp2,(int)b3_WLdet1);
		      tempp2=tempp2+func1->Eval(tempp2);
		      TOF_p2 = calTOF(Len_1,tempp2,2);
		      double Time=0.0;		      
		      double Timeratio1 =0.0;

		      if(b3_WLdet1== b3_WRdet1-10 &&  b3_WLdet2== b3_WRdet2-10)
			{
		       Time = 0.25*((b3_WLtdc1+b3_WRtdc1)-(b3_WLtdc2+b3_WRtdc2));
		      Timeratio1 = Time + (TOF_d1 - TOF_p1);
		      
		      Timeratio1 -= TDC_shift((int)b3_WLdet1,(int)b3_WLdet2,deltaphi[i]);
		      htest1->Fill(b3_MWPCY1,b3_MWPCX1);
		      int det1 = (int)b3_WLdet1;
		      int det2 = (int)b3_WLdet2;
		     
		      timedet[i]->Fill(num1[det1][det2],Timeratio1);
 		   
			}
		      double Timeratio2 = -1*Time +(TOF_d2 - TOF_p2);
		      Timeratio2 -= TDC_shift((int)b3_WLdet2,(int)b3_WLdet1,deltaphi[i]);
		     
		       TDC_ratio_phi[i]->Fill(b3_MWPCphi1, Timeratio1);
		        TDC_ratio[i]->Fill(Timeratio1); 
		      
		      for(int m=0 ; m<10 ;m++)
			{
			  
			  if(b3_WLdet1 == m+1)
			    TDC_difbar1[i][m+1]->Fill(Timeratio1);
			  //if(b3_WLdet2 == m+1)
			    //TDC_difbar2[i][m+1]->Fill(Timep1); 
			}
			
		      scurve[i]->Fill(tempp1,tempd1);
		       if (i==0) hEtest->Fill(tempB,temdB);
		       
		       htest->Fill(b3_MWPCphi1,Timeratio1);
		       
		       if( Timeratio1<1.1)
			 {
			   scurve_1[i]->Fill(tempp1,tempd1);
			   for(int j=0 ; j<Snr ; j++)
			     {
			       if (cut[i][j]->IsInside(tempp1,tempd1))
				 {
				   value1=projectScut(tempp1,tempd1,j,i,corec);
				   //value1-=Dcorec->Eval(b3_MWPCphi1);
				   sbin1[i][j]->Fill(b3_MWPCphi1,value1,b3_DowScalT1/LT);
				   sbinraw1[i][j]->Fill(b3_MWPCphi1,value1);
				 }
			     }
			 }
		       
		       else  if( Timeratio1>2 && Timeratio1<4 )
			 {scurve_2[i]->Fill(tempp1,tempd1);}
		       else if( Timeratio2<1.1 )
			{
			 scurve_3[i]->Fill(tempp2,tempd2);
			  
			  for(int j=0 ; j<Snr ; j++)
			    {
			      if (cut[i][j]->IsInside(tempp2,tempd2))
				{
				  value2=projectScut(tempp2,tempd2,j,i,corec);
				  // value2-=Dcorec->Eval(b3_MWPCphi2);
				  if(theta_d[i]==theta_p[i])
				    {
				  sbin1[i][j]->Fill(b3_MWPCphi1,value2,b3_DowScalT1/LT);
				   sbinraw1[i][j]->Fill(b3_MWPCphi2,value2);
				    }
				  sbin2[i][j]->Fill(b3_MWPCphi1,value2,b3_DowScalT1/LT);
				  sbinraw2[i][j]->Fill(b3_MWPCphi2,value2);
				}
			    }
			}
		      else{
			scurve_4[i]->Fill(tempp1,tempd1); }
		       

		}
	    }
	    }//<<--<<--!
	  
	  //+++if(b3_ID==2)
	  //+++{
	      //ScalerCount+=1.;
	      // tempcharg+=b3_FC;
	      //+++TotBeamC+=(double)b3_FC;
	      //printf( "%f  %f \n ",b3_FC , TotBeamC); 
	      // TotTime=b3_Time;   /* acomulating charge for given polarzation */ 
	      //+++kHzPol+=b3_10Khz;                           /* acomulating 10kHz for given polarzation */
	      //fprintf(stdout,"Pol=%f TotFer=%f %f \n",b2_Pol,b2_TotFera ,b2_EventType);
	      //printf("%f %f %f %f %f  \n", tempcharg, TotTime,b3_FC,tempcharg/(8.35*TotTime),10000*tempcharg/(8.35*kHzPol));
	  //+++ }
	  
	}//<----!
    }
  
  
  //+++RelativTime=TotTime-oldTime;
  //+++oldTime=TotTime;    
  //printf("%f \n", RelativTime);
  //+++fprintf(stdout,"Pol=%f TotBeam=%f Tot10kHz=%f TotTime=%f  \n ",b3_Pol,TotBeamC, kHzPol,RelativTime);    
    
  writehsitogarms();

  froot->Close();
   //fprintf(stdout," ********** Analysis for Pol==%i is finished *********** \n",pol);
  

} 


double p_scalning(double x ,int i)
{

  double E1;
 
   double p1p[11]={0.0,1.03114e+00,1.02186e+00,1.01379e+00,1.00901e+00,1.14116e+00,1.18719e+00,1.01289e+00,1.17155e+00,1.02336e+00,1.03931e+00};
  double p2p[11]={0.0,8.37156e-04,7.79199e-04,7.05292e-04,6.99657e-04,-4.76056e-04,-7.48614e-04,6.66924e-04,-7.53701e-04,7.94843e-04,9.63563e-04};
  
  E1=0.0;
  
    E1=(sqrt(1+4*x*p2p[i]/p1p[i])-1.0)/(2.0*p2p[i]);
  
return E1;
}

double d_scalning(double y ,int i)
{
 
   double p1d[11]={0.0,7.91892e-01,7.36947e-01,7.35129e-01,7.19197e-01,5.91244e-01,5.67824e-01,7.28194e-01,6.05242e-01,7.45787e-01,8.03423e-01};
  double p2d[11]={0.0,2.99735e-03,3.96421e-03,3.59499e-03,3.65988e-03,6.59518e-03,7.47618e-03,3.80554e-03,6.70629e-03,4.17246e-03,2.56402e-03};

  double E2;
  E2==0.0;
  E2=(sqrt(1+4*y*p2d[i]/p1d[i])-1.0)/(2.0*p2d[i]);
  return E2;
}


/*Projects the energy on the axis perpendicular to the Scurve*/
double projectScut(float Ex,float Ey,int bin,int kin,double *corec){
  float E11,E12,E22,E21;
  // mid_diff[Nkinema][Snr];
   E11=Sbon1[kin][bin];     E12=Sbon2[kin][bin];
  E21=Sbon3[kin][bin];     E22=Sbon4[kin][bin];
  float m=(E22-E12)/(E21-E11);       /*line slop*/
  float b=E12-m*E11;
  float h=(m*Ex+b-Ey)/(sqrt(1+m*m));

  corec[0] = h/(sqrt(1+m*m)); /* Ex offset from kinematic line */
  corec[1] = h/(sqrt(1+1./(m*m)));/* Ey offset from kinematic line */
  // mid_diff[kin][bin] =  TOF_p->Eval(abs(E21-E11)/2.) -  TOF_d->Eval(abs(E22-E12)/2.);
  // TDC_corec[kin][bin] = 1.*((TOF_p->Eval(Ex+ corec[0]) -  TOF_d->Eval(Ey + corec[1])) -  mid_diff[kin][bin]);
  ///corec[2] = mid_diff[kin][bin];
  /* the 2 is for changing the ns to channel */


  //   fprintf(stdout,"kin %d bin %d  m %f b %f h %f E11 %f E12 %f  E21 %f  E22 %f \n",
  //   kin,bin,m,b,h,E11,E12,E21,E22);
  return -1.0*h;
}

/*Opens the input data files*/
int openfiles(){
  ifstream wEcal,WbreakCalib,shift,angle,chartab;
  //char ch[150];
  int l=0,kk=0;
  double minf=100000000.;
  double PPP[2][10000],DDD[2][10000],A21=0,A22=0,scale21,scale22;

   /*list of the kinematics */
  angle.open(anglelist);
  if(angle) fprintf(stdout,"file  %s is open.\n",anglelist);
  else{
    fprintf(stdout,"1 can't open file %s \n",anglelist);
    return 0;
  }
  for(int k=0 ; k<Nkinema ; k++){int gg=0;
    angle >> Scurve[k];
    p1p2[k] = new TGraphErrors(2500);
    p1s[k] = new TGraphErrors(2500);
    if (k==0)p1p2[k]->SetName("ch0");
    if (k==1)p1p2[k]->SetName("ch1");
    if (k==2)p1p2[k]->SetName("ch2");
    if (k==3)p1p2[k]->SetName("ch3");
    /*scurve file*/
    ifstream Sinput;
    Sinput.open(Scurve[k]);
    if(Sinput) fprintf(stdout,"file  %s is open.\n",Scurve[k]);
    else {
      fprintf(stdout,"2 can't open file %s \n",Scurve[k]);
      return 0;
    }
    l=0;
    do { l++;
      Sinput >> S[k][l] >> E2[k][l] >> E1[k][l] >>  E3[k][l];/* E1 is proton and E2 is deuteron energy */
	if (k==1 && E1[k][l]>15 && E2[k][l]>20){	p1p2[k]->SetPoint(l,E1[k][l]-.4,E2[k][l]-.4);  p1p2[k]->SetPointError(l,0,0);/*if (k==1)kk++;*/ }
	else if (E1[k][l]>15 && E2[k][l]>20){ 
	p1p2[k]->SetPoint(l,E1[k][l],E2[k][l]);  p1p2[k]->SetPointError(l,0,0);/*if (k==1)kk++;*/ 
	if (k==0){PPP[k][l]=E1[k][l]; DDD[k][l]=E2[k][l];}
	  if (k==1){PPP[k][l]=E1[k][l]-.7; DDD[k][l]=E2[k][l]-.8;}}
      p1s[k]->SetPoint(l,E1[k][l], S[k][l]);   p1s[k]->SetPointError(l,0,0);
    }while(!Sinput.eof());
    Sinput.close();
    gg=kk;
    //cout << "gg=" << gg << endl;
    for (int h=1; h<1114;h++){
      for (int hh=0; hh<1117;hh++){
    double dist= TMath::Sqrt(TMath::Power((PPP[0][hh]-PPP[1][h]),2)+TMath::Power((DDD[0][hh]-DDD[1][h]),2));
	      minf=MIN0(dist,minf);
	      //if (flag) {A21=s1[j]; A22=s2[j]; flag=false;}
	      if (flag) {A21=PPP[0][hh]; A22=DDD[0][hh]; flag=false;}
      }
      //if (A21!=0) scale21=PPP[1][h]/A21;
	    //if (A22!=0) scale22=DDD[1][h]/A22;
	    //minf=100000000;
	    //hscale21->Fill(PPP[1][h],scale21);
	    // hscale22->Fill(DDD[1][h],scale22);
    }
  }/*finished loading the data of all kinemas*/
}

/*This defines the scuts */
int Define_GCuts(){
  float m,y1,y2,y3,y4,x1,x2,x3,x4;
  float s1,s2,ds,tmps1,tmps2,E11,E12,E21,E22;
  E11=E12=E21=E22=0.0;
  char cha[Snr][250];
  ds=(Smax-Smin)/Snr;
  /*define Gcuts*/
  for (int k=0 ; k<Nkinema ; k++){
    
    /*defining the GCuts*/
    for(int count=0;count<Snr;count++){
      tmps1=tmps2=0;
      s1=Smin+count*ds; s2=s1+ds;
      for(int i=1;i<2500;i++){
	if ( S[k][i]>0 && S[k][i]>tmps1 && S[k][i]<s1){
	  tmps1=S[k][i]; E11=E1[k][i]; E12=E2[k][i];
	}

	if (S[k][i]>tmps2 && S[k][i]<s2){
	  tmps2=S[k][i]; E21=E1[k][i]; E22=E2[k][i];
	}

      }

      Sbon1[k][count]=E11;     Sbon2[k][count]=E12;
      Sbon3[k][count]=E21;     Sbon4[k][count]=E22;
      Emid1[k][count] = (E11+E21)/2.0;
      Emid2[k][count] = (E12+E22)/2.0;
      m=(E22-E12)/(E21-E11);       /*line slop*/
      y1=0;         x1=E21+m*E22;
      y2=0;         x2=E11+m*E12;
      y3=E12-E11/m; x3=2*E11;
      y4=2*E22;     x4=E21-m*E22;
      float x[5] = {x1,x2,x3,x4,x1};    
      float y[5] = {y1,y2,y3,y4,y1};
      sprintf(cha[0],"cut%dthe%d",k,count);
      cut[k][count] = new TCutG(cha[0],5,x,y);
      if (!cut[k][count]) return 0;
    }/*finished defining the GCuts*/
  }
  fprintf(stdout,"Booking the Gcuts finished\n");
  return 1;
}

/*This defines the scuts and books/resets the histograms*/
int Book_Reset_histos(int pola){

  for(int i=0 ; i<Nkinema ; i++)
    {
     	  sprintf(name1[i],"scurvetmp_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name2[i],"scurvetmpraw_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name3[i],"scurveraw_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name4[i],"scurve_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name15[i],"scurve_1_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name23[i],"theta_pd_1_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name24[i],"theta_pd_2_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name16[i],"scurve_2_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name17[i],"scurve_3_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name18[i],"scurve_4_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name19[i],"scurve_5_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name20[i],"TDC_ratio_phi_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(name22[i],"timedet_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  // sprintf(name22[i],"scurve_8_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],deltaphi[i],pola);
	  sprintf(name21[i],"TDCratioS_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  //printf("%s %d %d %d \n",name21[i],(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
     	  //sprintf(name99[i],"P1P2_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],i);

	  scurvetmp[i]= new TH2D (name1[i],";E_{p} [MeV];E_{d} [MeV]",1200,0,120,120,0,120);
	  scurvetmpraw[i]= new TH2D (name2[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);	 
	  scurveraw[i]= new TH2D (name3[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  scurve[i]= new TH2D (name4[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  theta_pd_1[i]=new TH2D (name23[i],";theta_{p} ;theta_{d} ",40,0,40,40,0,40);
	  theta_pd_2[i]=new TH2D (name24[i],";theta_{p} ;theta_{d} ",40,0,40,40,0,40);
	  scurve_1[i]= new TH2D (name15[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  scurve_2[i]= new TH2D (name16[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  scurve_3[i]= new TH2D (name17[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  scurve_4[i]= new TH2D (name18[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  scurve_5[i]= new TH2D (name19[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  TDC_ratio_phi[i] = new TH2D (name20[i],"",360,0,360,160,-20,20);
	  timedet[i] = new TH2D (name22[i],"",1005,10,1015,160,-20,20);
	  //scurve_6[i]= new TH2D (name20[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  //scurve_7[i]= new TH2D (name21[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  //scurve_8[i]= new TH2D (name22[i],";E_{p} [MeV];E_{d} [MeV]",120,0,120,120,0,120);
	  
	  sprintf(bar[i],"TDC%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(bar1[i],"TDC_theo_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  sprintf(bar2[i],"TDC_ratio_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],pola);
	  TDC[i]=new TH2D(bar[i],";TOF_p - TOF_d [channel];Counts",20,0,20,200,-25,25);
	  // TDC_theo[i]=new TH2D(bar1[i],";TOF_p - TOF_d [channel];Counts",20,0,20,200,-25,25);
	  TDC_ratio[i]=new TH1D(bar2[i],";TOF_p - TOF_d [channel];Counts",250,-10,10);
	   TDCratioS[i]= new TH2D(name21[i],"",20,0,20,500,-100,100);

	  sprintf(ch1[i],"graph_%d_%d",(int)theta_d[i],(int)theta_p[i]);
	  scurvetmp[i]->Sumw2();
	  scurvetmpraw[i]->Sumw2();
	  scurveraw[i]->Sumw2();
	  scurve[i]->Sumw2();
    }
  for(int i=0 ; i<Nkinema ; i++)
    {



      for(int j=0 ; j<Snr ; j++)
	{
	  sprintf(name5[i][j],"sbin1_%d_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],j,pola);
	  sprintf(name6[i][j],"sbinraw1_%d_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],j,pola);
	  sprintf(name7[i][j],"sbinraw2_%d_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],j,pola);
	  sprintf(name8[i][j],"sbin2_%d_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],j,pola);
	  sprintf(name9[i][j],"TDC_diffbar1_%d_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],j,pola);	 
	  sprintf(name10[i][j],"TDC_diffbar2_%d_%d_%d_%d_%d",(int)theta_d[i],(int)theta_p[i],(int)deltaphi[i],j,pola);		  
	  sbin1[i][j]= new TH2D(name5[i][j],";#phi_{d} [deg];D [MeV]",45,0,360,60,-30,30);  
	  sbinraw1[i][j]= new TH2D(name6[i][j],";#phi_{d} [deg];D [MeV]",45,0,360,60,-30,30);  
	  sbinraw2[i][j]= new TH2D(name7[i][j],";#phi_{d} [deg];D [MeV]",45,0,360,60,-30,30);  
	  sbin2[i][j]= new TH2D(name8[i][j],";#phi_{d} [deg];D [MeV]",45,0,360,60,-30,30); 

 
	  // TDC_difbar[i][j]=new TH1D(name9[i][j],";TOF_p - TOF_d [channel];Counts",500,-10,10);
	  TDC_difbar1[i][j]=new TH1D(name9[i][j],";TOF_p - TOF_d [channel];Counts",100,-10,10);
	  TDC_difbar2[i][j]=new TH1D(name10[i][j],";TOF_p - TOF_d [channel];Counts",100,-10,10);	
	  //	  TDC2[i][j]=new TH1D(name10[i][j],"counts;channel",200,-100,100);
	  // TDC3[i][j]=new TH1D(name11[i][j],"counts;channel",200,-100,100);
	  // TDC4[i][j]=new TH1D(name12[i][j],"counts;channel",200,-100,100);
	  //TDC5[i][j]=new TH1D(name13[i][j],"counts;channel",120,-30,30);
	  //TDC6[i][j]=new TH1D(name14[i][j],";TDC1-TDC2;counts",120,-30,30);
	  sbin1[i][j]->Sumw2();
	  sbinraw1[i][j]->Sumw2();
	  sbinraw2[i][j]->Sumw2();
	  sbin2[i][j]->Sumw2();
	}
    }
  
  return 1;
}


double  TDC_shift(int det1, int det2,double phi)
{
  // double shift[11]={0.0, -0.1, 6.94, 3.0, 9.2, 2.25, 8.4, 1.3, 7.83, 0.94, 7.95}; /* benchmark */
  double shift[11][11];
  for(int i=1 ; i<11 ; i++)
    {
      for(int j=1 ; j<11 ; j++)
	{
	  shift[i][j] = 0.0;
	}
    }
  shift[1][8] = 0.40;
  shift[1][9] = 0.40;
  shift[1][10] = 0.51;
  shift[2][7] = -2.5;
  shift[2][8] = -1.1;
  shift[2][9] = -1.35;
  shift[2][10] = -1.1;
  shift[3][7] = -1.36;
  shift[3][8] = 0.00;
  shift[3][9] = 0.12;
  shift[3][10] = 0.38;
  shift[4][7] = -1.70;
  shift[4][7] = -1.50;
  shift[4][8] = -0.11;
  shift[4][9] = -0.11;
  shift[5][6] = 0.00;
  shift[5][7] = -1.8;
  shift[6][4] = -2.11;
  shift[6][5] = -2.30;
  shift[7][2] = 1.6;
  shift[7][3] = 0.2;
  shift[7][4] = 0.26;
  shift[7][5] = 0.72;
  shift[8][1] = -1.36;
  shift[8][2] = 0.1;
  shift[8][3] = -1.74;
  shift[8][4] = -1.4;
  shift[9][1] = -1.1;
  shift[9][2] = 0.17;
  shift[9][3] = -0.83;
  shift[9][4] = -0.62;
  shift[10][1] = -1.45;
  shift[10][2] = -0.1;
  shift[10][3] = -1.11;
  
  /* for deltaphi 160 */
  shift[1][7] = -0.54;
  shift[3][6] = 1.14;
  shift[4][5] = -0.70;
  shift[5][4] = -1.36;
  shift[5][8] = -1.06;
  shift[6][3] = -2.85;
  shift[6][7] = -3.11;
  shift[7][6] = 1.96;
  shift[8][5] = -1.0;
  shift[10][4] = -0.85;
  shift[4][6] = 0.62;
  /*************/
  if(phi==160)
    {

 shift[1][8] = 0.40;
  shift[1][9] = 0.40;
  shift[1][10] = 0.51;
  shift[2][7] = -2.5;
  shift[2][8] = -1.1;
  shift[2][9] = -1.35;
  shift[2][10] = -1.1;
  shift[3][7] = -1.36;
  shift[3][8] = 0.00;
  shift[3][9] = 0.12;
  shift[3][10] = 0.38;
  shift[4][7] = -1.70;
  shift[4][7] = -1.50;
  shift[4][8] = -0.11;
  shift[4][9] = -0.11;
  shift[5][6] = 0.00;
  shift[5][7] = -1.8;
  shift[6][4] = -2.11;
  shift[6][5] = -2.30;
  shift[7][2] = 1.6;
  shift[7][3] = 0.2;
  shift[7][4] = 0.26;
  shift[7][5] = 0.72;
  shift[8][1] = -1.36;
  shift[8][2] = 0.1;
  shift[8][3] = -1.74;
  shift[8][4] = -1.4;
  shift[9][1] = -1.1;
  shift[9][2] = 0.17;
  shift[9][3] = -0.83;
  shift[9][4] = -0.62;
  shift[10][1] = -1.45;
  shift[10][2] = -0.1;
  shift[10][3] = -1.11;
  
  /* for deltaphi 160 */
  shift[1][7] = -0.54;
  shift[3][6] = 1.14;
  shift[4][5] = -0.70;
  shift[5][4] = -1.36;
  shift[5][8] = -1.06;
  shift[6][3] = -2.85;
  shift[6][7] = -3.11;
  shift[7][6] = 1.96;
  shift[8][5] = -1.0;
  shift[10][4] = -0.85;
  shift[4][6] = 0.62;

      shift[5][7] = -2.2;
      shift[6][4] = -2.6;
    }
 else if(phi==140)
    {
 shift[1][8] = 0.40;
  shift[1][9] = 0.40;
  shift[1][10] = 0.51;
  shift[2][7] = -2.9;
  shift[2][8] = -1.1;
  shift[2][9] = -1.1;
  shift[2][10] = -1.1;
  shift[3][7] = -1.36;
  shift[3][8] = 0.00;
  shift[3][9] = 0.12;
  shift[3][10] = 0.38;
  shift[4][7] = -1.70;
  shift[4][7] = -1.50;
  shift[4][8] = -0.11;
  shift[4][9] = -0.11;
  shift[5][6] = 0.00;
  shift[5][7] = -1.8;
  shift[6][4] = -2.11;
  shift[6][5] = -2.30;
  shift[7][2] = 1.25;
  shift[7][3] = 0.2;
  shift[7][4] = 0.26;
  shift[7][5] = 0.72;
  shift[8][1] = -1.36;
  shift[8][2] = 0.1;
  shift[8][3] = -1.74;
  shift[8][4] = -1.4;
  shift[9][1] = -1.1;
  shift[9][2] = 0.17;
  shift[9][3] = -0.83;
  shift[9][4] = -0.62;
  shift[10][1] = -1.45;
  shift[10][2] = -0.1;
  shift[10][3] = -1.11;
  
  /* for deltaphi 160 */
  shift[1][7] = -0.54;
  shift[3][6] = 1.14;
  shift[4][5] = -0.70;
  shift[5][4] = -1.36;
  shift[5][8] = -1.06;
  shift[6][3] = -2.85;
  shift[6][7] = -3.11;
  shift[7][6] = 1.96;
  shift[8][5] = -1.0;
  shift[8][6] = 0.90;
  shift[10][4] = -0.85;
  shift[4][6] = 0.62;





      shift[2][7] = -2.1;
      shift[4][3] = -1.0;
      shift[4][9] = -0.22;
      shift[5][3] = -1.4;
      shift[5][7] = -2.6;
      shift[6][2] = -1.6;
      shift[6][8] = -2.4;
      shift[8][1] = -1.48;
      shift[4][5] = -0.20;
      shift[4][6] = 0.62;
      shift[4][8] = -0.46;
    }
  

  return shift[det1][det2];
} 


  
  void writehsitogarms()
  {
  
  for(int i=0 ; i<Nkinema ; i++)
    {

      //htest1->Write();
      //hEtest->Write();
      TDC_ratio_phi[i]->Write();
      //scurve[i]->Write();
      //scurveraw[i]->Write();
      //scurve_1[i]->Write();
      //scurve_2[i]->Write();
      //scurve_3[i]->Write();
      //scurve_4[i]->Write();
      //scurve_5[i]->Write();
      //timedet[i]->Write();
      p1p2[i]->Write();
      //hscale21->Write();
      //hscale22->Write();
      // TDC[i]->Write();
      // TDC_theo[i]->Write();
      TDC_ratio[i]->Write(); 
      //  TDCratioS[i]->Write();
      /*for(int j=0 ; j<Snr ; j++)
 	{
	  sbinraw1[i][j]->Write();
	  sbin1[i][j]->Write();
	  sbinraw2[i][j]->Write();
	  sbin2[i][j]->Write();
	  cut[i][j]->Write();
	}*/
    }
  
  }


