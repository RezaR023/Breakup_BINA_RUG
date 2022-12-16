#include <iostream.h>
#include <fstream.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <TH2D.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TGraphErrors.h>
#include <TLatex.h>
#include <TPostScript.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TMinuit.h>
#include "AnalysingPowers_fit.h"
#define R2D (0.01745)
#define offPzzvalue (0.00)
#define ndf (2)
#define energy (130)
#define runnum1 (1)
#define changrun (17)
#define runnum2 (22)
#define runnum3 (1)
#define runnum4 (2)
#define polarization "/home/mardanpur/exp/may04f2/daq/polaz_results/polaz_130/Polarization_130.dat"
#define headrun  "run41"
#define headrun2 "run430"
#define be10 (82.5)
#define be20 (82.)
#define beta1 (82.5)                       /*82.5                   */
#define beta2 (82.)
#define beta3 (82.59)

#define alpha0 (-2.)
#define alpha1 (-2.)
#define alpha2 (-2.)
int AnalysingPowers_create1();
int AnalysingPowers_create2();
Double_t ChiSquareDistribution(Double_t *x, Double_t *par);
void CenterTitle(TH1D *h);
void CenterTitle(TH2D *h);

int main(){
  AnalysingPowers_create1();
  AnalysingPowers_create2();
  char t11[5][40]={"T11","T22","T20","T21","fitPzz"},mode[2][40]={"mode2","mode4"},mode2[2][40]={"mode2_2","mode4_2"},name[250],name2[250],name3[250],name4[250],name5[250],name6[250];
  TGraphErrors *fun[6],*fun2[6];
  TLatex *text[6],*text1[6],*text2[6];
  for (int i=0;i<6;i++){
    fun[i]= new TGraphErrors(1+runnum2-runnum1); fun[i]->SetMarkerStyle(23); fun[i]->SetMarkerColor(kRed);
    text[i]= new TLatex();  text1[i]= new TLatex(); text2[i]= new TLatex();
    fun2[i]= new TGraphErrors(1+runnum4-runnum3); fun2[i]->SetMarkerStyle(23); fun2[i]->SetMarkerColor(kRed);
  }
  TCanvas *c1=new TCanvas(); c1->SetFillColor(10); c1->Size(19,25); gStyle->SetOptStat(00);
  TCanvas *c=new TCanvas(); c->SetFillColor(10); c->Size(19,25); c->Divide(2,3);
  TF1 *f3 = new TF1("f3","[0]",runnum1,runnum2);
  TF1 *func=new TF1("chisquare",ChiSquareDistribution,0,ndf*5,1);

  sprintf(name3,"AnalysingPowers_%d.dat",energy);
  sprintf(name2,"AnalysingPowers_%d.ps",energy);
  sprintf(name,"AnalysingPowers_%dcolumn.dat",energy);
  ofstream columnfile(name);

  ofstream outfile(name3);
  TPostScript *ps= new TPostScript(name2,111);
  ps->Range(19,25);   //set x,y of printed page
  TH2D *his=new TH2D("his",";Run No.;  ",2+runnum2-runnum1,runnum1-1,runnum2+1,100,-.55,-.1);
  CenterTitle(his);
  TH2D *hist22=new TH2D("hist22",";Run No.;  ",2+runnum2-runnum1,runnum1-.5,runnum2+1,100,-.4,0);
  TH2D *hisPzz2=new TH2D("hisPzz2",";Run No.;  ",2+runnum2-runnum1,runnum1-.5,runnum2+1,140,0,.5);
  TH2D *hisPzz4=new TH2D("hisPzz4",";Run No.;  ",2+runnum2-runnum1,runnum1-.5,runnum2+1,140,.5,1.2);
  TH2D *his2=new TH2D("his2",";Run No.;  ",2+runnum4-runnum3,runnum3-1,runnum4+1,100,-.6,-.1);
  TH2D *offpz=new TH2D("offpz",";Run No.;  ",2+runnum2-runnum1,runnum1-1,runnum2+1,100,-.2,.2);
  TH2D *ch=new TH2D("ch",";Run No.;  ",2+runnum2-runnum1,runnum1-1,runnum2+1,100,0,30);
  TH1D *ch1=new TH1D("ch",";#chi^{2};  ",100,0,10);
  double AP[2+runnum2-runnum1][13],results[6][21],angle[6]={83.17,89.16,95.17,101.2,111.21,119.21},landaresult[6][21],firsterr[6][21];
  double AP2[2+runnum4-runnum3][13],results2[6][21],angle2[6]={63.73,69.99,75.61,81.58,91.56,119.21},landaresult2[6][21],firsterr2[6][21];
  double offpzz[2+runnum2-runnum1][13],position,step;
  double landa,fixer,correctedchi; /*correct the chisquare value*/

  for (int i=0;i<6;i++) {for (int j=0;j<21;j++) results[i][j]=results2[i][j]=0.;}

  for  (int j=1;j<2;j++){                  /*mode2,mode4*/
    for (int i=0;i<5;i++){                                /*T11,T22,T20,T21,fitPzz*/
      ps ->NewPage();
      sprintf(name,"%s_%d_%s.dat",t11[i],energy,mode[j]);
      ifstream infile(name);
      if (!infile) 
	fprintf(stdout,"file %s cannot be open.\n",name);
      else {     	/*read analysing powers from file*/
	infile >>  name ; infile >> name ;
	for (int k=0;k<=(runnum2-runnum1);k++){
	  for (int l=0;l<13;l++)  infile >>  AP[k][l];
	}                                                /*reading finished*/
	for (int ang=0;ang<6;ang++){
	  landa=1.;fixer=1;
	  for(int run=0;run<=(runnum2-runnum1);run++){    /*fit a line to data set of each angle*/
	    //	    if (run>changrun) fixer=4;
	    fun[ang]->SetPoint(run,AP[run][0],AP[run][2*ang+1]);
	    fun[ang]->SetPointError(run,0,fixer*landa*AP[run][2*ang+2]);
	  }
	  /*find the best landa to have the chisquare ~1*/
	  fun[ang]->Fit("f3","Q","",runnum1+1,runnum2);
	  correctedchi=f3->GetChisquare()/f3->GetNDF();
	  firsterr[ang][j*10+(i*2)+2]=f3->GetParError(0);
 	  while (correctedchi>1.1 && i<4){
 	    landa=landa+.1; fixer=1;
	    for(int run=0;run<=(runnum2-runnum1);run++){    /*fit a line to data set of each angle*/
	      //	    if (run>changrun) fixer=4;
	      fun[ang]->SetPoint(run,AP[run][0],AP[run][2*ang+1]);
	      fun[ang]->SetPointError(run,0,landa*AP[run][2*ang+2]);
	    }
	    fun[ang]->Fit("f3","Q","",runnum1+1,runnum2);
	    if (correctedchi>(f3->GetChisquare()/f3->GetNDF()))
	      correctedchi=f3->GetChisquare()/f3->GetNDF();
	    else { landa=landa-.1;     break;  }
	  }
	  /*the landa found*/
	  results[ang][j*10+(i*2)+1]=f3->GetParameter(0);
	  results[ang][j*10+(i*2)+2]=f3->GetParError(0);
	  landaresult[ang][j*10+(i*2)+1]=landa;
	  c->cd(ang+1);
	  if (i==4 && j==0) {hisPzz2->Draw(); position=.5;step=.03;
	  }else if (i==4 && j==1) {hisPzz4->Draw(); position=1.2;step=.05;
	  }else if (i==1 || i==3) {hist22->Draw(); position=0.00;step=.02;
	  }else{ his->Draw(); position=-.1;step=.05;}
	  fun[ang]->Draw("Psame");
	  sprintf(name4,"%s %d MeV %s %3.2f",t11[i],energy,mode[j],angle[ang]);
	  sprintf(name5,"%s = %1.3f #pm %1.3f",
		  t11[i],f3->GetParameter(0),f3->GetParError(0));
	  sprintf(name6,"#theta_{c.m.} = %3.0f^{#circ}, #chi^{2} = %1.2f, #lambda = %1.1f ",
		  angle[ang],correctedchi,landa);
	  //	  text[ang]->SetText(runnum1+5,position,name4); text[ang]->Draw();
	  text1[ang]->SetText(runnum1+3,position-step,name5); text1[ang]->Draw();
	  text2[ang]->SetText(runnum1+3,position-(step*2.),name6); text2[ang]->Draw();
	}
	c->Update();
	infile.close();
      }
      ps ->NewPage();
      sprintf(name,"%s_%d_%s.dat",t11[i],energy,mode2[j]);
      ifstream infile2(name);
      if (!infile2)
	fprintf(stdout,"file %s cannot be open.\n",name);
      else {                              /*read analysing powers from file*/
	infile2 >>  name ; infile2 >> name ;
	for (int k=0;k<=(runnum4-runnum3);k++){
	  for (int l=0;l<13;l++)  infile2 >>  AP2[k][l];
	}                                /*reading finished*/
	for (int ang=0;ang<6;ang++){
	  landa=1.;
	  for(int run=0;run<=(runnum4-runnum3);run++){    /*fit a line to data set of each angle*/
	    fun2[ang]->SetPoint(run,AP2[run][0],AP2[run][2*ang+1]); fun2[ang]->SetPointError(run,0,landa*AP2[run][2*ang+2]);
	  }
	  fun2[ang]->Fit("f3","Q","",runnum3,runnum4);
	  /*find the best landa to have the chisquare ~1*/
	  correctedchi=f3->GetChisquare()/f3->GetNDF();
	  firsterr2[ang][j*10+(i*2)+2]=f3->GetParError(0);
 	  while (correctedchi>1.1){
 	    landa=landa+.1;
	    for(int run=0;run<(runnum2-runnum1);run++){    /*fit a line to data set of each angle*/
	    fun2[ang]->SetPoint(run,AP2[run][0],AP2[run][2*ang+1]); fun2[ang]->SetPointError(run,0,landa*AP2[run][2*ang+2]);
	    }
	    fun2[ang]->Fit("f3","Q","",runnum3,runnum4);
	    if (correctedchi>(f3->GetChisquare()/f3->GetNDF()))
	      correctedchi=f3->GetChisquare()/f3->GetNDF();
	    else { landa=landa-.1;     break;  }
	  }
	  /*the landa found*/
	  results2[ang][j*10+(i*2)+1]=f3->GetParameter(0);
	  results2[ang][j*10+(i*2)+2]=f3->GetParError(0);
	  landaresult2[ang][j*10+(i*2)+1]=landa;
	  c->cd(ang+1); his2 ->Draw(); fun2[ang]->Draw("Psame");
	  sprintf(name4,"%s %d MeV %s %3.2f",t11[i],energy,mode2[j],angle2[ang]);
	  sprintf(name5,"%1.3f err %1.4f",f3->GetParameter(0),f3->GetParError(0));
	  sprintf(name6,"#chi^{2} = %1.4f #lambda = %1.4f ",correctedchi,landa);
	  text[ang]->SetText(runnum3,.12,name4); text[ang]->Draw();
	  text1[ang]->SetText(runnum3,.09,name5); text1[ang]->Draw();
	  text2[ang]->SetText(runnum3,.06,name6); text2[ang]->Draw();
	}
	c->Update();
      infile2.close();
      }
    }
  }
  /*fiting part*/
  ps ->NewPage();
  sprintf(name,"offPzz_%d.dat",energy);
  ifstream offPzz(name);
  if (!offPzz)
    fprintf(stdout,"file %s cannot be open.\n",name);
  else {                              /*read analysing powers from file*/
    offPzz >>  name ; offPzz >> name ;
    for (int k=0;k<=(runnum2-runnum1);k++){
      for (int l=0;l<13;l++)  offPzz >>  offpzz[k][l];
    }
    for (int ang=0;ang<6;ang++){
      for(int run=0;run<(runnum2-runnum1);run++){    /*fit a line to data set of each angle*/
	fun[ang]->SetPoint(run,offpzz[run][0],offpzz[run][2*ang+1]); fun[ang]->SetPointError(run,0,offpzz[run][2*ang+2]);
      }
      fun[ang]->Fit("f3","Q","",runnum1,runnum2);
      c->cd(ang+1); offpz ->Draw(); fun[ang]->Draw("Psame");
      sprintf(name4,"offPzz %d MeV #theta=%3.2f",energy,angle[ang]);
      sprintf(name5,"%1.3f err %1.4f",f3->GetParameter(0),f3->GetParError(0));
      sprintf(name6,"%1.3f ",f3->GetChisquare()/f3->GetNDF());
      text[ang]->SetText(runnum1+5,.22,name4); text[ang]->Draw();
      text1[ang]->SetText(runnum1+5,.19,name5); text1[ang]->Draw();
      text2[ang]->SetText(runnum1+5,.15,name6); text2[ang]->Draw();

    }
    c->Update();
  }
  offPzz.close();
  ps ->NewPage();
  sprintf(name,"chis_%d.dat",energy);
  ifstream chi1(name);
  if (!chi1) fprintf(stdout,"file %s cannot be open.\n",name);
  else {                              /*read analysing powers from file*/
    chi1 >>  name ; chi1 >> name ;
    for (int k=0;k<=(runnum2-runnum1);k++){
      for (int l=0;l<13;l++)  chi1 >>  offpzz[k][l];
    }
    for (int ang=0;ang<6;ang++){
      for(int run=0;run<(runnum2-runnum1);run++){    /*fit a line to data set of each angle*/
	fun[ang]->SetPoint(run,offpzz[run][0],offpzz[run][2*ang+1]); fun[ang]->SetPointError(run,0,offpzz[run][2*ang+2]);
	ch1->Fill(offpzz[run][2*ang+1]);
      }
      c->cd(ang+1);   ch ->Draw(); fun[ang]->Draw("Psame");
      sprintf(name4,"#chi^{2} %d MeV #theta=%3.2f",energy,angle[ang]);
      text[ang]->SetText(runnum1+5,32,name4); text[ang]->Draw();
    }
    c->Update();
  }
  chi1.close();
  ps ->NewPage();
  func->SetParameter(0,ndf);
  c1->cd(); ch1->Draw(); 
  //  func->Draw("SAME");
  ps->Close();
  /*print the results*/
  outfile.setf(ios::hex | ios::scientific);
  outfile.width(6);
  outfile.precision(2);
  outfile.fill(' ');
  outfile << "!Analysing powers of 130 MeV\n";
  outfile << "!th_cm      T11      dT11       T22        dT22        T20       dT20       T21       dT21\n";
  for (int ang=1;ang<3;ang++){
    results2[ang][10]=angle2[ang];
    for (int j=10;j<19;j++){
        outfile << results2[ang][j] << "\t";
    }
    outfile << "\n";
  }
  for (int ang=0;ang<6;ang++){
    results[ang][10]=angle[ang];
    for (int j=10;j<19;j++){
      outfile << results[ang][j] << "\t";
    }
    outfile << "\n";
  }
  outfile.close();

 /*print the results to column outfile*/
  columnfile.setf(ios::hex | ios::scientific);
  columnfile.width(6);
  columnfile.precision(2);
  columnfile.fill(' ');
  columnfile << "!Errors of 130 MeV\n";
  columnfile << "!angle value Staterr(Landa=1) Staterr(Landa)    Landa\n";
  for (int j=11;j<19;j=j+2){
    for (int ang=1;ang<3;ang++) columnfile //<< t11[(j-10)/2] << "     " 
					   << angle2[ang] << "      " << results2[ang][j] << "    " << firsterr2[ang][j+1] << "    " << results2[ang][j+1] << "   " << landaresult2[ang][j] << "\n" ;
    for (int ang=0;ang<6;ang++)  columnfile  //<< t11[(j-10)/2] << "     "  
                                           << angle[ang] << "      " << results[ang][j] <<  "    " << firsterr[ang][j+1] << "    " << results[ang][j+1] <<  "   " << landaresult[ang][j] <<"\n" ;
  }
  columnfile.close();

  gROOT->Macro("StrechError.cxx");

  return 0;
}

int AnalysingPowers_create1(){
  int i,j;
  char name[80],name1[80],str[100];
  double life[4][3],l[4],pc0[4][9],pc1[4][9],pc2[4][9],pc3[4][9],fc0[4][9],fc1[4][9],fc2[4][9];
  double fc3[4][9],fBI[4],I0[4][9],I1[4][9],I3[4][9],Y2[4][9],Y4[4][9];
  double dfc0[4][9],dfc1[4][9],dfc3[4][9],dfBI[4],dI0[4][9],dI1[4][9];
  double dI3[4][9],dY2[4][9],dY4[4][9],A[3][9],B[3][9],C[3][9],z,o,t,r,z1,o1,t1,r1,t2;
  double dA[3][9],dB[3][9],dC[3][9],T11[3][9],T22[3][9],T21[3][9],T20[3][9];
  double dT11[3][9],dT22[3][9],dT21[3][9],dT20[3][9],Pz[3],dPz[3],Pzz[3],dPzz[3],BI[4];
  double angle[6]={63.73,69.99,75.61,81.58,91.56,119.21};
  double be1,be2,co1,co2,alpha;
  alpha=alpha0*3.14/180;
  be1=be10*3.14/180;
  be2=be20*3.14/180;
  co1=3*cos(be1)*cos(be1)-1;
  co2=3*cos(be2)*cos(be2)-1;
  
  ofstream T11_130_mode2("T11_130_mode2.dat");
  ofstream T22_130_mode2("T22_130_mode2.dat");
  ofstream T20_130_mode2("T20_130_mode2.dat");
  ofstream T21_130_mode2("T21_130_mode2.dat");
  ofstream T11_130_mode4("T11_130_mode4.dat");
  ofstream T22_130_mode4("T22_130_mode4.dat");
  ofstream T20_130_mode4("T20_130_mode4.dat");
  ofstream T21_130_mode4("T21_130_mode4.dat");
  ofstream fitPzz_130_mode2("fitPzz_130_mode2.dat");
  ofstream fitPzz_130_mode4("fitPzz_130_mode4.dat");
  ofstream offPzz_130("offPzz_130.dat");
  ofstream chis_130("chis_130.dat");
  T11_130_mode2 <<  "!-T11,dT11-mode-2 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T22_130_mode2 <<  "!-T22,dT22-mode-2 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T20_130_mode2 <<  "!-T20,dT20-mode-2 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T21_130_mode2 <<  "!-T21,dT21-mode-2 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T11_130_mode4 <<  "!-T11,dT11-mode-4 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T22_130_mode4 <<  "!-T22,dT22-mode-4 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T20_130_mode4 <<  "!-T20,dT20-mode-4 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  T21_130_mode4 <<  "!-T21,dT21-mode-4 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  offPzz_130    <<  "!offPzz \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  fitPzz_130_mode2    <<  "!fitPzz_mode2 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  fitPzz_130_mode4    <<  "!fitPzz_mode4 \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";
  chis_130      <<  "!Chisquare \n!-run-angle-(83.17,89.16,95.17,101.2,111.21,119.21)\n ";

  TGraphErrors *gr1=new  TGraphErrors(runnum2-runnum1); 
  TGraphErrors *gr2=new  TGraphErrors(runnum2-runnum1); 
  TF1 *f3 = new TF1("f3","[0]",runnum1,runnum2);
  double vstart[12],counts[12],errors[12],offpzz[9],doffpzz[9],fitPzz[3][9],fitdPzz[3][9],chisquare[9];
  TMinuit *gMinuit = new TMinuit(45);  //initialize TMinuit with a maximum of 23 params

  ifstream runpzz(polarization);
  if (!runpzz){
    fprintf(stdout,"file %s cannot be open. exit...\n",polarization);
    return 0 ;
  }
  runpzz >> str >> str >> str >> str >> str>>  str ;



//   /*to find the average polarization*/
//   for (int run=runnum1;run<runnum2+1;run++){
//     runpzz >> i >> Pzz[1] >> dPzz[1] >> Pzz[2] >> dPzz[2] ;
//     gr1->SetPoint(run-runnum1,run,Pzz[1]); gr1->SetPointError(run-runnum1,0,dPzz[1]);
//     gr2->SetPoint(run-runnum1,run,Pzz[2]); gr2->SetPointError(run-runnum1,0,dPzz[2]);
//   }
//   gr1->Fit("f3","Q","",runnum1,runnum2);
//   Pzz[1]=f3->GetParameter(0);
//   dPzz[1]=f3->GetParError(0);
//   gr2->Fit("f3","Q","",runnum1,runnum2);
//   Pzz[2]=f3->GetParameter(0);
//   dPzz[2]=f3->GetParError(0);
//   /*end of to find the eaverage polarization*/



  for (int run=runnum1;run<runnum2+1;run++){
    /*to have polarization per run*/
    runpzz >> i >> Pzz[1] >> dPzz[1] >> Pzz[2] >> dPzz[2] ;
    Pz[1]=fabs(Pzz[1])/3.;
    Pz[2]=fabs(Pzz[2])/3.;
    dPz[1]=dPzz[1]/3.;
    dPz[2]=dPzz[2]/3.;
/*end of polarization per run*/
   if (run<10){
    sprintf(name,"%s0%d.dat",headrun,run);
    sprintf(name1,"A%s0%d.dat",headrun,run);
    }else {
      sprintf(name,"%s%d.dat",headrun,run);
      sprintf(name1,"A%s%d.dat",headrun,run);
    }
  
    ifstream tot(name);         //input file
    if (!tot)
      fprintf(stdout,"file %s cannot be open.\n",name);
    else {
      cout << i <<"   " << Pzz[1] << "  "<< dPzz[1] << "  " << Pzz[2] << "  " <<dPzz[2] <<
	"   " << Pz[1] << "  "<< dPz[1] << "  " << Pz[2] << "  " <<dPz[2] << " main run\n";
 
     for (i=0;i<4;i++)	for (j=0;j<9;j++){ pc0[i][j]=pc1[i][j]=pc2[i][j]=pc3[i][j]=
	 fc0[i][j]=fc1[i][j]=fc2[i][j]=fc3[i][j]=fitPzz[i][j]=0;}
      
      //Read values from new file mode #1
      tot >> str;
      tot >> str  ;
      tot >> str >> BI[0];               // read beam Int
      tot >> str >> life[0][1];
      tot >> str >> life[0][2];
      l[0]= life[0][2]/life[0][1];             //life time
      fBI[0]= l[0]*BI[0];                            //
      dfBI[0]=sqrt(fBI[0]);                             //error of Beam Int
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> fc0[i][j];                                 //read former big file
	  dfc0[i][j]=sqrt(fc0[i][j]);                       // error of counts
	  I0[i][j]=fc0[i][j]/fBI[0];                        // Normalize to Beam Int
	  z=dfc0[i][j]/fBI[0];
	  o=fc0[i][j]*dfBI[0]/(fBI[0]*fBI[0]);
	  dI0[i][j]=sqrt(z*z+o*o);                          // error of Normalized value
	}
      }
      
      // Read Values of main former file mode #2
      tot >> str  ;
      tot >> str >> BI[1];
      tot >> str >> life[1][1];
      tot >> str >> life[1][2];
      l[1]= life[1][2]/life[1][1];
      fBI[1]=BI[1]*l[1];
      dfBI[1]=sqrt(fBI[1]);
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> fc1[i][j];
	  dfc1[i][j]=sqrt(fc1[i][j]);
	  I1[i][j]=fc1[i][j]/fBI[1];
	  z=dfc1[i][j]/fBI[1];
	  o=fc1[i][j]*dfBI[1]/(fBI[1]*fBI[1]);
	  dI1[i][j]=sqrt(z*z+o*o);
	}
      }
      // Read Values of main former file mode #3
      
      tot >> str  ;
      tot >> str >> BI[2];
      tot >> str >> life[2][1];
      tot >> str >> life[2][2];
      l[2]=1;    
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> pc2[i][j];
	}
      }
      
      
      // Read Values of main former file mode #4
      
      tot >> str  ;
      tot >> str >> BI[3];
      tot >> str >> life[3][1];
      tot >> str >> life[3][2];
      l[3]= life[3][2]/life[3][1];
      l[2]=life[3][2];
      fBI[3]=BI[3]*l[3];
      dfBI[3]=sqrt(fBI[3]);
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> fc3[i][j];
	  dfc3[i][j]=sqrt(fc3[i][j]);
	  I3[i][j]=fc3[i][j]/fBI[3];
	  z=dfc3[i][j]/fBI[3];
	  o=fc3[i][j]*dfBI[3]/(fBI[3]*fBI[3]);
	  dI3[i][j]=sqrt(z*z+o*o);
	}
      }
      z=0;
      o=0;
      
      //calculate Y2=I1/I0  and errors
      
      for (i=0;i<4;i++){
	for (j=1;j<9;j++){
	  Y4[i][j]=I3[i][j]/I0[i][j];
	  z=dI3[i][j]/I0[i][j];
	  o=I3[i][j]*dI0[i][j]/(I0[i][j]*I0[i][j]);
	  dY4[i][j]=sqrt(z*z+o*o);
	  Y2[i][j]=I1[i][j]/I0[i][j];
	  z=dI1[i][j]/I0[i][j];
	  o=I1[i][j]*dI0[i][j]/(I0[i][j]*I0[i][j]);
	  dY2[i][j]=sqrt(z*z+o*o);
	}
      }
    
      for (i=0;i<4;i++) Y2[i][0]=dY2[i][0]=Y4[i][0]=dY4[i][0]=fc0[i][0]=fc1[i][0]=fc3[i][0]=i+1;
      
      /* calc iT11, T22 ... */
      for (i=1;i<9;i++){
	A[1][i]=(Y2[1][i]-Y2[0][i])*cos(alpha)-(Y2[3][i]-Y2[2][i])*sin(alpha);
	z=dY2[0][i]*dY2[0][i];  o=dY2[1][i]*dY2[1][i];
	dA[1][i]=sqrt(z+o);
	B[1][i]=Y2[2][i]+Y2[3][i]-Y2[0][i]-Y2[1][i];
	r=dY2[2][i]*dY2[2][i];  t=dY2[3][i]*dY2[3][i];
	dB[1][i]=sqrt(z+r+o+t);
	C[1][i]=(Y2[0][i]+Y2[1][i]+Y2[2][i]+Y2[3][i])-4;
	dC[1][i]=sqrt(z+r+o+t)/4;
	
	o1=dA[1][i]/A[1][i];  z1=dB[1][i]/B[1][i];
	r1= dC[1][i]/C[1][i]; t1=dPz[1]/Pz[1];
	t2=dPzz[1]/Pzz[1];
	
	T11[1][i]=A[1][i]/(2*sqrt(3)*Pz[1]*sin(be1));
	T22[1][i]=B[1][i]/(2*sqrt(3)*Pzz[1]*sin(be1)*sin(be1)*cos(2*alpha));
	T20[1][i]=C[1][i]/(sqrt(2)*co1*Pzz[1]);
	
	dT11[1][i]=fabs(T11[1][i])*sqrt(o1*o1+t1*t1);
	dT22[1][i]=fabs(T22[1][i])*sqrt(z1*z1+t2*t2);
	dT20[1][i]=fabs(T20[1][i])*sqrt(r1*r1+t2*t2);
      }
      
      for (i=1;i<9;i++){
	A[2][i]=(Y4[1][i]-Y4[0][i])*cos(alpha)-(Y4[3][i]-Y4[2][i])*sin(alpha);
	z=dY4[0][i]*dY4[0][i];   o=dY4[1][i]*dY4[1][i];
	dA[2][i]=sqrt(z+o);
	B[2][i]=Y4[2][i]+Y4[3][i]-Y4[0][i]-Y4[1][i];
	r=dY4[2][i]*dY4[2][i];  t=dY4[3][i]*dY4[3][i];
	dB[2][i]=sqrt(z+r+o+t);
	C[2][i]=(Y4[0][i]+Y4[1][i]+Y4[2][i]+Y4[3][i])-4;
	dC[2][i]=sqrt(z+r+o+t)/4;
	
	o1=dA[2][i]/A[2][i];      z1=dB[2][i]/B[2][i];
	r1= dC[2][i]/C[2][i];     t1=dPz[2]/Pz[2];
	t2=dPzz[2]/Pzz[2];
	
	T11[2][i]=A[2][i]/(2*sqrt(3)*Pz[2]*sin(be2));
	T22[2][i]=B[2][i]/(2*sqrt(3)*Pzz[2]*sin(be2)*sin(be2)*cos(2*alpha));
	T20[2][i]=C[2][i]/(sqrt(2)*co2*Pzz[2]);
	
	dT11[2][i]=fabs(T11[2][i])*sqrt(o1*o1+t1*t1);
	dT22[2][i]=fabs(T22[2][i])*sqrt(z1*z1+t2*t2);
	dT20[2][i]=fabs(T20[2][i])*sqrt(r1*r1+t2*t2);
      }
      //      double adderr=0.0006; //130 MeV
      double adderr=0.000;

     /* fit iT11, T22 ... */
      for (i=1;i<9;i++){
	/* charge counters and Pzz*/
	for (int j=0;j<10;j++) vstart[j];
	for (int j=0;j<12;j++) counts[j]=errors[j]=0;
	for (int j=0;j<4;j++){
	  counts[j*3]  =I0[j][i]; errors[j*3]  =sqrt(pow(dI0[j][i],2.)+pow(adderr,2.));  vstart[j]=I0[j][i];
	  counts[j*3+1]=I1[j][i]; errors[j*3+1]=sqrt(pow(dI1[j][i],2.)+pow(adderr,2.)); 
	  counts[j*3+2]=I3[j][i]; errors[j*3+2]=sqrt(pow(dI3[j][i],2.)+pow(adderr,2.));
	}
	vstart[4]=offPzzvalue;  /*fix offpzz*/
	//	for(int j=0;j<4;j++) vstart[j+5]=-.5;
	vstart[5]=T11[1][i];
	vstart[6]=-.1;
	vstart[7]=T22[1][i];
	vstart[8]=T20[1][i];

	if (run<18){
	  vstart[9]=alpha1*R2D;  /*alpha*/ 
	  vstart[10]=vstart[11]=beta1*R2D;    /*input beta1, beta2*/
	}else{
	  vstart[9]=alpha2*R2D;  /*alpha*/ 
	  vstart[10]=vstart[11]=beta2*R2D; 
	}
	Ifit(vstart,gMinuit,counts,Pzz,dPzz,errors);
	offpzz[i]=vstart[4];
	T11[2][i]=vstart[5];
	T21[2][i]=T21[1][i]=vstart[6];
	T22[2][i]=vstart[7];
	T20[2][i]=vstart[8];
	chisquare[i]=vstart[9];
	fitPzz[1][i]=vstart[10];
	fitPzz[2][i]=vstart[11];
	doffpzz[i]=errors[4];
	dT11[2][i]=errors[5];
	dT21[2][i]=dT21[1][i]=errors[6];
	dT22[2][i]=errors[7];
	dT20[2][i]=errors[8];
	fitdPzz[1][i]=errors[10];
	fitdPzz[2][i]=errors[11];
				  //*sqrt(chisquare[i]/ndf;
      }


      tot.close();
      //*********** Write to out files**********;
      
      ofstream to(name1);         //out put file 
      //precision adjustment
      to.setf(ios::left);
      to.width(10);
      to.precision(5);
      
      to << "" << name << "\n";
      to << " spin-mode-1 \n";
      to << "BeamInt0= " << BI[0] << " life time " << l[0] << " corrected BI " << fBI[0] <<  "\n"; 
      to << "Event= "<< life[0][1] <<"\n";
      to << "Trigger= " << life[0][2] <<"\n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << fc0[i][j]<< "   "; 
	to << "\n";
      }
      to << "\n spin-mode-2 \n";
      to << "BeamInt1= " << BI[1] << " life time " << l[1] << " corrected BI " << fBI[1] << "\n"; 
      to << "Event= " << life[1][1] <<"\n";
      to << "Trigger= " << life[1][2] <<"\n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << fc1[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-3 \n";
      to << "BeamInt3= " << BI[2] <<"\n"; 
      to << "Event= " << life[2][1] <<"\n"; 
      to << "Trigger= " <<life[2][2] <<"\n";
      
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << pc2[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-4 \n";
      to << "BeamInt3= " << BI[3] << " life time " << l[3] << " corrected BI " << fBI[3] << "\n"; 
      to << "Event= " << life[3][1] <<"\n";
      to << "Trigger= " << life[3][2] <<"\n";
      
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << fc3[i][j]<< "   ";
	to << "\n";
      }
      
      to << "\n\n**************************** \n\n\n";
      to << " spin-mode-0--- I0  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << I0[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-0--- dI0  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << dI0[i][j]<< "   ";
	to << "\n";
      }

      to << "\n\n**************************** \n\n\n";
      to << " spin-mode-2--- I1  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << I1[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-2--- dI1  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << dI1[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-4--- I3  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << I3[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-4--- dI3  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << dI3[i][j]<< "   ";
	to << "\n";
      }
      
      //*********************print Analyzing powers iT11 ,T22,T20 ;
      
      to << " spin-mode-2   \n";
      to << "angle----T11----dT11----T22----dT22----T20--dT20\n";
      for (j=1;j<6;j++){
	to << angle[j-1] <<" "<< T11[1][j]<<" "<< dT11[1][j]<<" "<<T22[1][j]<<" "<< dT22[1][j]<<" "<<T20[1][j]<<" "<< dT20[1][j]<< "\n";
      }
      to << angle[5] <<" "<< T11[1][7]<<" "<< dT11[1][7]<<" "<<T22[1][7]<<" "<< dT22[1][7]<<" "<<T20[1][7]<<" "<< dT20[1][7]<<"\n";
      
      to << " spin-mode-4   \n";
      to << "angle----T11----dT11----T22----dT22----T20--dT20\n";
      for (j=1;j<6;j++){
	to << angle[j-1] <<" "<< T11[2][j]<<" "<< dT11[2][j]<<" "<<T22[2][j]<<" "<< dT22[2][j]<<" "<<T20[2][j]<<" "<< dT20[2][j]<< "\n";
      }
      to << angle[5] <<" "<< T11[2][7]<<" "<< dT11[2][7]<<" "<<T22[2][7]<<" "<< dT22[2][7]<<" "<<T20[2][7]<<" "<< dT20[2][7]<<"\n";
      
      /*mode 2 files*/
      T11_130_mode2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T11_130_mode2 << " " << T11[1][ang]<< " "<< dT11[1][ang];
      }
      T11_130_mode2 << "\n";

      T21_130_mode2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T21_130_mode2 << " " << T21[1][ang]<< " "<< dT21[1][ang];
      }
      T21_130_mode2 << "\n";
            
      T22_130_mode2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T22_130_mode2 << " " << T22[1][ang]<< " "<< dT22[1][ang];
      }
      T22_130_mode2 << "\n";
      
      T20_130_mode2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T20_130_mode2 << " " << T20[1][ang]<< " "<< dT20[1][ang];
      }
      T20_130_mode2 << "\n";
      
      /*mode 4 files*/
      T11_130_mode4 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T11_130_mode4 << " " << T11[2][ang]<< " "<< dT11[2][ang];
      }
      T11_130_mode4 << "\n";

      T21_130_mode4 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T21_130_mode4 << " " << T21[2][ang]<< " "<< dT21[2][ang];
      }
      T21_130_mode4 << "\n";
      
      T22_130_mode4 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T22_130_mode4 << " " << T22[2][ang]<< " "<< dT22[2][ang];
      }
      T22_130_mode4 << "\n";
      
      T20_130_mode4 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T20_130_mode4 << " " << T20[2][ang]<< " "<< dT20[2][ang];
      }
      T20_130_mode4 << "\n";
      /*print fit results*/
      offPzz_130 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) offPzz_130 << " " << offpzz[ang]<< " "<< doffpzz[ang];
      }
      offPzz_130 << "\n";

      fitPzz_130_mode2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) fitPzz_130_mode2 << " " << fitPzz[1][ang]<< " "<< fitdPzz[1][ang];
      }
      fitPzz_130_mode2 << "\n";

      fitPzz_130_mode4 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) fitPzz_130_mode4 << " " << fitPzz[2][ang]<< " "<< fitdPzz[2][ang];
      }
      fitPzz_130_mode4 << "\n";

      chis_130 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) chis_130 << " " << chisquare[ang]/ndf << " "<< 0.0;
      }
      chis_130 << "\n";


      to.close();
    }   /*file run?? opened succesfully and data being read*/
  } //change the run number 
  T11_130_mode2.close();
  T22_130_mode2.close();
  T20_130_mode2.close();
  T21_130_mode2.close();
  T11_130_mode4.close();
  T22_130_mode4.close();
  T20_130_mode4.close();
  T21_130_mode4.close();
  return 1;  
}

int AnalysingPowers_create2(){
  int i,j;
  char name[80],name1[80],str[100];
  double life[4][2],l[4],pc0[4][9],pc1[4][9],pc2[4][9],pc3[4][9],fc0[4][9],fc1[4][9],fc2[4][9];
  double fc3[4][9],fBI[4],I0[4][9],I1[4][9],I3[4][9],Y2[4][9],Y4[4][9];
  double dfc0[4][9],dfc1[4][9],dfc3[4][9],dfBI[4],dI0[4][9],dI1[4][9];
  double dI3[4][9],dY2[4][9],dY4[4][9],A[3][9],B[3][9],C[3][9],z,o,t,r,z1,o1,t1,r1,t2;
  double dA[3][9],dB[3][9],dC[3][9],T11[3][9],T22[3][9],T21[3][9],T20[3][9];
  double dT11[3][9],dT22[3][9],dT20[3][9],dT21[3][9],Pz[3],dPz[3],Pzz[3],dPzz[3],BI[4];
  double angle[6]={63.73,69.99,75.61,81.58,91.56,119.21};
  double be1,be2,co1,co2,alpha;
  alpha=alpha0*3.14/180;
  be1=be10*3.14/180;
  be2=be20*3.14/180;
  co1=3*cos(be1)*cos(be1)-1;
  co2=3*cos(be2)*cos(be2)-1;
  
  ofstream T11_130_mode2_2("T11_130_mode2_2.dat");
  ofstream T22_130_mode2_2("T22_130_mode2_2.dat");
  ofstream T20_130_mode2_2("T20_130_mode2_2.dat");
  ofstream T21_130_mode2_2("T21_130_mode2_2.dat");
  ofstream T11_130_mode4_2("T11_130_mode4_2.dat");
  ofstream T22_130_mode4_2("T22_130_mode4_2.dat");
  ofstream T20_130_mode4_2("T20_130_mode4_2.dat");
  ofstream T21_130_mode4_2("T21_130_mode4_2.dat");
  T11_130_mode2_2 <<  "!-T11,dT11-mode-2 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T22_130_mode2_2 <<  "!-T22,dT22-mode-2 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T20_130_mode2_2 <<  "!-T20,dT20-mode-2 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T21_130_mode2_2 <<  "!-T21,dT21-mode-2 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T11_130_mode4_2 <<  "!-T11,dT11-mode-4 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T22_130_mode4_2 <<  "!-T22,dT22-mode-4 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T20_130_mode4_2 <<  "!-T20,dT20-mode-4 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  T21_130_mode4_2 <<  "!-T21,dT21-mode-4 \n!-run-angle-(63.73,69.99,75.61,81.58,91.56,119.21)\n ";
  TGraphErrors *gr1=new  TGraphErrors(runnum2-runnum1); 
  TGraphErrors *gr2=new  TGraphErrors(runnum2-runnum1); 
  TF1 *f3 = new TF1("f3","[0]",runnum1,runnum2);
  double vstart[12],counts[12],errors[12],offpzz[9],doffpzz[9],chisquare[9];
  TMinuit *gMinuit = new TMinuit(45);  //initialize TMinuit with a maximum of 23 params


  ifstream runpzz(polarization);
  if (!runpzz){
    fprintf(stdout,"file %s cannot be open. exit...\n",polarization);
    return 0 ;
  }
  /*to define the average polarization of previous run (these runs dont have polaz file.!!!)*/

  runpzz >> str >> str >> str >> str >> str>>  str ;
  for (int run=1;run<23;run++){
    runpzz >> i >> Pzz[1] >> dPzz[1] >> Pzz[2] >> dPzz[2] ;
    gr1->SetPoint(run,run,Pzz[1]); gr1->SetPointError(run,0,dPzz[1]);
    gr2->SetPoint(run,run,Pzz[2]); gr2->SetPointError(run,10,dPzz[2]);
  }
  gr1->Fit("f3","Q","",20,22);
  Pzz[1]=f3->GetParameter(0);
  dPzz[1]=f3->GetParError(0);
  gr2->Fit("f3","Q","",20,22);
  Pzz[2]=f3->GetParameter(0);
  dPzz[2]=f3->GetParError(0);
  float fric=1.05; Pzz[1]=fric*Pzz[1];  Pzz[2]=fric*Pzz[2]; 
  Pz[1]=fabs(Pzz[1])/3.;
  Pz[2]=fabs(Pzz[2])/3.;
  dPz[1]=dPzz[1]/3.;
  dPz[2]=dPzz[2]/3.;
  fprintf(stdout,"HOssein\n");
  for (int run=runnum3;run<runnum4+1;run++){
    sprintf(name,"%s%d.dat",headrun2,run);
    sprintf(name1,"A%s%d.dat",headrun2,run);
    ifstream tot(name);         //input file
    if (!tot)
      fprintf(stdout,"file %s cannot be open.\n",name);
    else {
      cout << run <<"   " << Pzz[1] << "  "<< dPzz[1] << "  " << Pzz[2] << "  " <<dPzz[2] <<
	"   " << Pz[1] << "  "<< dPz[1] << "  " << Pz[2] << "  " <<dPz[2] << " minor run\n";
 
     for (i=0;i<4;i++)	for (j=0;j<9;j++){ pc0[i][j]=pc1[i][j]=pc2[i][j]=pc3[i][j]=
	 fc0[i][j]=fc1[i][j]=fc2[i][j]=fc3[i][j]=0;}
      
      //Read values from new file mode #1
      tot >> str;
      tot >> str  ;
      tot >> str >> BI[0];               // read beam Int
      tot >> str >> life[0][1];
      tot >> str >> life[0][2];
      l[0]= life[0][2]/life[0][1];             //life time
      fBI[0]= l[0]*BI[0];                            // BeamInt
      dfBI[0]=sqrt(fBI[0]);                             //error of Beam Int
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> fc0[i][j];                                 //read former big file
	  dfc0[i][j]=sqrt(fc0[i][j]);                       // error of counts
	  I0[i][j]=fc0[i][j]/fBI[0];                        // Normalize to Beam Int
	  z=dfc0[i][j]/fBI[0];
	  o=fc0[i][j]*dfBI[0]/(fBI[0]*fBI[0]);
	  dI0[i][j]=sqrt(z*z+o*o);                          // error of Normalized value
	}
      }

      // Read Values of main former file mode #2
      tot >> str  ;
      tot >> str >> BI[1];
      tot >> str >> life[1][1];
      tot >> str >> life[1][2];
      l[1]= life[1][2]/life[1][1];
      fBI[1]=BI[1]*l[1];
      dfBI[1]=sqrt(fBI[1]);
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> fc1[i][j];
	  dfc1[i][j]=sqrt(fc1[i][j]);
	  I1[i][j]=fc1[i][j]/fBI[1];
	  z=dfc1[i][j]/fBI[1];
	  o=fc1[i][j]*dfBI[1]/(fBI[1]*fBI[1]);
	  dI1[i][j]=sqrt(z*z+o*o);
	}
      }
      // Read Values of main former file mode #3
      
      tot >> str  ;
      tot >> str >> BI[2];
      tot >> str >> life[2][1];
      tot >> str >> life[2][2];
      l[2]=1;    
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> pc2[i][j];
	}
      }
      
      
      // Read Values of main former file mode #4
      
      tot >> str  ;
      tot >> str >> BI[3];
      tot >> str >> life[3][1];
      tot >> str >> life[3][2];
      l[3]= life[3][2]/life[3][1];
      fBI[3]=BI[3]*l[3];
      dfBI[3]=sqrt(fBI[3]);
      tot >> str  ;
      for (i=0;i<4;i++){
	for (j=0;j<9;j++){
	  tot >> fc3[i][j];
	  dfc3[i][j]=sqrt(fc3[i][j]);
	  I3[i][j]=fc3[i][j]/fBI[3];
	  z=dfc3[i][j]/fBI[3];
	  o=fc3[i][j]*dfBI[3]/(fBI[3]*fBI[3]);
	  dI3[i][j]=sqrt(z*z+o*o);
	}
      }
      z=0;
      o=0;

      //calculate Y2=I1/I0  and errors
      
      for (i=0;i<4;i++){
	for (j=1;j<9;j++){
	  Y4[i][j]=I3[i][j]/I0[i][j];
	  z=dI3[i][j]/I0[i][j];
	  o=I3[i][j]*dI0[i][j]/(I0[i][j]*I0[i][j]);
	  dY4[i][j]=sqrt(z*z+o*o);
	  Y2[i][j]=I1[i][j]/I0[i][j];
	  z=dI1[i][j]/I0[i][j];
	  o=I1[i][j]*dI0[i][j]/(I0[i][j]*I0[i][j]);
	  dY2[i][j]=sqrt(z*z+o*o);
	}
      }
    
      for (i=0;i<4;i++) Y2[i][0]=dY2[i][0]=Y4[i][0]=dY4[i][0]=fc0[i][0]=fc1[i][0]=fc3[i][0]=i+1;
      
      /* calc iT11, T22 ... */
      for (i=1;i<9;i++){
	A[1][i]=(Y2[1][i]-Y2[0][i])*cos(alpha)-(Y2[3][i]-Y2[2][i])*sin(alpha);
	z=dY2[0][i]*dY2[0][i];  o=dY2[1][i]*dY2[1][i];
	dA[1][i]=sqrt(z+o);
	B[1][i]=Y2[2][i]+Y2[3][i]-Y2[0][i]-Y2[1][i];
	r=dY2[2][i]*dY2[2][i];  t=dY2[3][i]*dY2[3][i];
	dB[1][i]=sqrt(z+r+o+t);
	C[1][i]=(Y2[0][i]+Y2[1][i]+Y2[2][i]+Y2[3][i])-4;
	dC[1][i]=sqrt(z+r+o+t)/4;
	
	o1=dA[1][i]/A[1][i];  z1=dB[1][i]/B[1][i];
	r1= dC[1][i]/C[1][i]; t1=dPz[1]/Pz[1];
	t2=dPzz[1]/Pzz[1];
	
	T11[1][i]=A[1][i]/(2*sqrt(3)*Pz[1]*sin(be1));
	T22[1][i]=B[1][i]/(2*sqrt(3)*Pzz[1]*sin(be1)*sin(be1)*cos(2*alpha));
	T20[1][i]=C[1][i]/(sqrt(2)*co1*Pzz[1]);
	
	dT11[1][i]=fabs(T11[1][i])*sqrt(o1*o1+t1*t1);
	dT22[1][i]=fabs(T22[1][i])*sqrt(z1*z1+t2*t2);
	dT20[1][i]=fabs(T20[1][i])*sqrt(r1*r1+t2*t2);
      }
      
      for (i=1;i<9;i++){
	A[2][i]=(-Y4[0][i]+Y4[1][i])*cos(alpha)-(Y4[2][i]-Y4[3][i])*sin(alpha);
	z=dY4[0][i]*dY4[0][i];   o=dY4[1][i]*dY4[1][i];
	dA[2][i]=sqrt(z+o);
	B[2][i]=Y4[2][i]+Y4[3][i]-Y4[0][i]-Y4[1][i];
	r=dY4[2][i]*dY4[2][i];  t=dY4[3][i]*dY4[3][i];
	dB[2][i]=sqrt(z+r+o+t);
	C[2][i]=(Y4[0][i]+Y4[1][i]+Y4[2][i]+Y4[3][i])-4;
	dC[2][i]=sqrt(z+r+o+t)/4;
	
	o1=dA[2][i]/A[2][i];      z1=dB[2][i]/B[2][i];
	r1= dC[2][i]/C[2][i];     t1=dPz[2]/Pz[2];
	t2=dPzz[2]/Pzz[2];
	
	T11[2][i]=A[2][i]/(2*sqrt(3)*Pz[2]*sin(be2));
	T22[2][i]=B[2][i]/(2*sqrt(3)*Pzz[2]*sin(be2)*sin(be2)*cos(2*alpha));
	T20[2][i]=C[2][i]/(sqrt(2)*co2*Pzz[2]);
	
	dT11[2][i]=fabs(T11[2][i])*sqrt(o1*o1+t1*t1);
	dT22[2][i]=fabs(T22[2][i])*sqrt(z1*z1+t2*t2);
	dT20[2][i]=fabs(T20[2][i])*sqrt(r1*r1+t2*t2);
      }
     /* fit iT11, T22 ... */
      for (i=1;i<9;i++){
	/* charge counters and Pzz*/
	for (int j=0;j<10;j++) vstart[j];
	for (int j=0;j<12;j++) counts[j]=errors[j]=0;
	for (int j=0;j<4;j++){
	  counts[j*3]  =I0[j][i]; errors[j*3]  =dI0[j][i];  vstart[j]=I0[j][i];
	  counts[j*3+1]=I1[j][i]; errors[j*3+1]=dI1[j][i]; 
	  counts[j*3+2]=I3[j][i]; errors[j*3+2]=dI3[j][i];
	}
	vstart[4]=offPzzvalue;
	//	for(int j=0;j<4;j++) vstart[j+5]=-.5;
	vstart[5]=T11[1][i];
	vstart[6]=-.0;
	vstart[7]=T22[1][i];
	vstart[8]=T20[1][i];
	vstart[9]=alpha2*R2D;  /*alpha*/ 
	vstart[10]=vstart[11]=beta3*R2D;  /*beta1,beta2*/
	Ifit(vstart,gMinuit,counts,Pzz,dPzz,errors);
	offpzz[i]=vstart[4];
	T11[2][i]=vstart[5];
	T21[2][i]=T21[1][i]=vstart[6];
	T22[2][i]=vstart[7];
	T20[2][i]=vstart[8];
	chisquare[i]=vstart[9];
	doffpzz[i]=errors[4];
	dT11[2][i]=errors[5];
	dT21[2][i]=dT21[1][i]=errors[6];
	dT22[2][i]=errors[7];
	dT20[2][i]=errors[8];
      }


      tot.close();
      //*********** Write to out files**********;
      
      ofstream to(name1);         //out put file 
      //precision adjustment
      to.setf(ios::left);
      to.width(10);
      to.precision(5);
      
      to << "" << name << "\n";
      to << " spin-mode-1 \n";
      to << "BeamInt0= " << BI[0] << "\n"; 
      to << "Event= "<< life[0][1] <<"\n";
      to << "Trigger= " << life[0][2] <<"\n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << fc0[i][j]<< "   "; 
	to << "\n";
      }
      to << "\n spin-mode-2 \n";
      to << "BeamInt1= " << BI[1] <<"\n"; 
      to << "Event= " << life[1][1] <<"\n";
      to << "Trigger= " << life[1][2] <<"\n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << fc1[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-3 \n";
      to << "BeamInt3= " << BI[3] <<"\n"; 
      to << "Event= " << life[2][1] <<"\n"; 
      to << "Trigger= " <<life[2][2] <<"\n";
      
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << pc2[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-4 \n";
      to << "BeamInt3= " << BI[3] <<"\n"; 
      to << "Event= " << life[3][1] <<"\n";
      to << "Trigger= " << life[3][2] <<"\n";
      
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << fc3[i][j]<< "   ";
	to << "\n";
      }
      to << "\n\n**************************** \n\n\n";
      to << " spin-mode-0--- I0  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << I0[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-0--- dI0  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << dI0[i][j]<< "   ";
	to << "\n";
      }
      to << "\n\n**************************** \n\n\n";
      to << " spin-mode-2--- I1  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << I1[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-2--- dI1  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << dI1[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-4--- I3  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++) to << I3[i][j]<< "   ";
	to << "\n";
      }
      to << "\n spin-mode-4--- dI3  \n";
      to << "side---P1----P2----P3----P4----P5----Deu----P120----D120\n";
      for (i=0;i<4;i++){
	for (j=0;j<9;j++)	to << dI3[i][j]<< "   ";
	to << "\n";
      }
      
      //*********************print Analyzing powers iT11 ,T22,T20 ;
      
      to << " spin-mode-2   \n";
      to << "angle----T11----dT11----T22----dT22----T20--dT20\n";
      for (j=1;j<6;j++){
	to << angle[j-1] <<" "<< T11[1][j]<<" "<< dT11[1][j]<<" "<<T22[1][j]<<" "<< dT22[1][j]<<" "<<T20[1][j]<<" "<< dT20[1][j]<< "\n";
      }
      to << angle[5] <<" "<< T11[1][7]<<" "<< dT11[1][7]<<" "<<T22[1][7]<<" "<< dT22[1][7]<<" "<<T20[1][7]<<" "<< dT20[1][7]<<"\n";
      
      to << " spin-mode-4   \n";
      to << "angle----T11----dT11----T22----dT22----T20--dT20\n";
      for (j=1;j<6;j++){
	to << angle[j-1] <<" "<< T11[2][j]<<" "<< dT11[2][j]<<" "<<T22[2][j]<<" "<< dT22[2][j]<<" "<<T20[2][j]<<" "<< dT20[2][j]<< "\n";
      }
      to << angle[5] <<" "<< T11[2][7]<<" "<< dT11[2][7]<<" "<<T22[2][7]<<" "<< dT22[2][7]<<" "<<T20[2][7]<<" "<< dT20[2][7]<<"\n";
      
      /*mode 2 files*/
      T11_130_mode2_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T11_130_mode2_2 << " " << T11[1][ang]<< " "<< dT11[1][ang];
      }
      T11_130_mode2_2 << "\n";

      T21_130_mode2_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T21_130_mode2_2 << " " << T21[1][ang]<< " "<< dT21[1][ang];
      }
      T21_130_mode2_2 << "\n";
      
      T22_130_mode2_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T22_130_mode2_2 << " " << T22[1][ang]<< " "<< dT22[1][ang];
      }
      T22_130_mode2_2 << "\n";
      
      T20_130_mode2_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T20_130_mode2_2 << " " << T20[1][ang]<< " "<< dT20[1][ang];
      }
      T20_130_mode2_2 << "\n";
      
      /*mode 4 files*/
      T11_130_mode4_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T11_130_mode4_2 << " " << T11[2][ang]<< " "<< dT11[2][ang];
      }
      T11_130_mode4_2 << "\n";
      T21_130_mode4_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T21_130_mode4_2 << " " << T21[2][ang]<< " "<< dT21[2][ang];
      }
      T21_130_mode4_2 << "\n";
      
      T22_130_mode4_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T22_130_mode4_2 << " " << T22[2][ang]<< " "<< dT22[2][ang];
      }
      T22_130_mode4_2 << "\n";
      
      T20_130_mode4_2 << run;
      for (int ang=1;ang<8;ang++){
	if (ang!=6) T20_130_mode4_2 << " " << T20[2][ang]<< " "<< dT20[2][ang];
      }
      T20_130_mode4_2 << "\n";
      to.close();
    }   /*file run?? opened succesfully and data being read*/
  } //change the run number 
  T11_130_mode2_2.close();
  T22_130_mode2_2.close();
  T20_130_mode2_2.close();
  T21_130_mode2_2.close();
  T11_130_mode4_2.close();
  T22_130_mode4_2.close();
  T20_130_mode4_2.close();
  T21_130_mode4_2.close();

  cout <<  Pzz[1] << "  "<< dPzz[1] << "  " << Pzz[2] << "  " <<dPzz[2] <<"pzz after\n";

  return 1;  
}
// Un-normalized Chi-Square distribution
// par[0] = Number of Degrees of Freedom
// x[0] = chi-square
//
Double_t ChiSquareDistribution(Double_t *x, Double_t *par)
{
  return  40*(TMath::Power(x[0],(par[0]/2.) - 1.)*TMath::Exp(-x[0]/2.)*(TMath::Power(0.5,par[0]/2.)/TMath::Gamma(par[0]/2.)));
}

void CenterTitle(TH2D *h){
  h->GetXaxis()->CenterTitle(kTRUE);
  h->GetYaxis()->CenterTitle(kTRUE);
  h->GetXaxis()->SetTitleSize(0.05);
  h->GetYaxis()->SetTitleSize(0.05);
  h->GetXaxis()->SetTitleOffset(0.9);
  h->GetYaxis()->SetTitleOffset(0.9);
}

void CenterTitle(TH1D *h){
  h->GetXaxis()->CenterTitle(kTRUE);
  h->GetYaxis()->CenterTitle(kTRUE);
  h->GetXaxis()->SetTitleSize(0.05);
  h->GetYaxis()->SetTitleSize(0.05);
  h->GetXaxis()->SetTitleOffset(0.9);
  h->GetYaxis()->SetTitleOffset(0.9);
}
