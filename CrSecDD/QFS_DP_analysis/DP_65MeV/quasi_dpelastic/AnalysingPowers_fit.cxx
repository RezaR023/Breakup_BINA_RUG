/*These subroutines fit  Analysing powers*/
#include "TMinuit.h"
#define be (1.431)
double chis,pol2,pol4,col2,col4;  
double pi2=3.1415*2.,pi=3.1415,R2D=pi/180;

/*The definition of the Left,right,Up, and down is according to the MAdison canvention.
For a dp->dp reaction, The deuteron particle defines the side of the defintion.
Left(phi=0)
Right(phi=180)
Up(phi=270)
Down(phi=90)
In the following subroutines, we have the position of protons
 instead of the deuteron, so the angle definitions are upside down.
*/

Float_t Left(double *par,int id){
  double  phi=pi+par[35];
  switch(id){
  case 0:
    return (par[0]*(1+par[4]*(sqrt(3.)*par[6]*sin(be)*cos(be)*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(be),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(be),2)-1)))-par[11])/par[23];
  case 2: 
    return (par[0]*(1+sqrt(3.)*par[5]*par[42]*fabs(par[9])*sin(par[36])*cos(phi)+par[9]*(sqrt(3.)*par[6]*sin(par[36])*cos(par[36])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[36]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[36]),2)-1)))-par[12])/par[24];
  case 4: 
    return (par[0]*(1+sqrt(3.)*par[5]*par[43]*fabs(par[10])*sin(par[37])*cos(phi)+par[10]*(sqrt(3.)*par[6]*sin(par[37])*cos(par[37])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[37]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[37]),2)-1)))-par[13])/par[25];
  default:
    fprintf(stdout,"Left id is not correct \n");
    return 0;
  }
}
Float_t Right(double *par,int id){
  double  phi=0+par[35];
  switch(id){
  case 0:
    return (par[1]*(1+par[4]*(sqrt(3.)*par[6]*sin(be)*cos(be)*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(be),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(be),2)-1)))-par[14])/par[26];
  case 2: 
    return (par[1]*(1+sqrt(3.)*par[5]*par[42]*fabs(par[9])*sin(par[36])*cos(phi)+par[9]*(sqrt(3.)*par[6]*sin(par[36])*cos(par[36])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[36]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[36]),2)-1)))-par[15])/par[27];
  case 4: 
    return (par[1]*(1+sqrt(3.)*par[5]*par[43]*fabs(par[10])*sin(par[37])*cos(phi)+par[10]*(sqrt(3.)*par[6]*sin(par[37])*cos(par[37])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[37]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[37]),2)-1)))-par[16])/par[28];
  default:
    fprintf(stdout,"Right id is not correct \n");
    return 0;
  }
}
Float_t Up(double *par,int id){
  double  phi=.5*pi+par[35];
  switch(id){
  case 0:
    return (par[2]*(1+par[4]*(sqrt(3.)*par[6]*sin(be)*cos(be)*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(be),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(be),2)-1)))-par[17])/par[29];
  case 2: 
    return (par[2]*(1+sqrt(3.)*par[5]*par[42]*fabs(par[9])*sin(par[36])*cos(phi)+par[9]*(sqrt(3.)*par[6]*sin(par[36])*cos(par[36])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[36]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[36]),2)-1)))-par[18])/par[30];
  case 4: 
    return (par[2]*(1+sqrt(3.)*par[5]*par[43]*fabs(par[10])*sin(par[37])*cos(phi)+par[10]*(sqrt(3.)*par[6]*sin(par[37])*cos(par[37])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[37]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[37]),2)-1)))-par[19])/par[31];
  default:
    fprintf(stdout,"Up  id is not correct \n");
    return 0;
  }
}
Float_t Down(double *par,int id){
  double  phi=1.5*pi+par[35];
  switch(id){
  case 0:
    return (par[3]*(1+par[4]*(sqrt(3.)*par[6]*sin(be)*cos(be)*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(be),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(be),2)-1)))-par[20])/par[32];
  case 2: 
    return (par[3]*(1+sqrt(3.)*par[5]*par[42]*fabs(par[9])*sin(par[36])*cos(phi)+par[9]*(sqrt(3.)*par[6]*sin(par[36])*cos(par[36])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[36]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[36]),2)-1)))-par[21])/par[33];
  case 4: 
    return (par[3]*(1+sqrt(3.)*par[5]*par[43]*fabs(par[10])*sin(par[37])*cos(phi)+par[10]*(sqrt(3.)*par[6]*sin(par[37])*cos(par[37])*sin(phi)-.5*sqrt(3.)*par[7]*pow(sin(par[37]),2.)*cos(2*phi)+.25*sqrt(2)*par[8]*(3*pow(cos(par[37]),2)-1)))-par[22])/par[34];
  default:
    fprintf(stdout," Down id is not correct \n");
    return 0;
  }
}
double polaz(double *par,int id){
  switch(id){
  case 2:
    return ((par[40]*col2)-(par[9]-par[4]+(.25*par[9]*par[4]/(-1*col2))))/par[38];
  case 4: 
    return ((par[41]*col4)-(par[10]-par[4]+(.25*par[10]*par[4]/(-1*col4))))/par[39];
  default:
    fprintf(stdout," polaz id is not correct \n");
    return 0;
  }
}

void fcn(int &npar, double *gin, double &f, double *par, int iflag){
  double chisq = 0;
  col2=-1/(3*cos(par[36])*cos(par[36])-1); 
  col4=-1/(3*cos(par[37])*cos(par[37])-1);
  pol2=col2*par[9];   /*par[9]=polarization in SMART, pol2=polarization in D-room */
  pol4=col4*par[10];  /*par[10]=polarization in SMART, pol4=polarization in D-room */
  //  fprintf(stdout,"pol2 %f pol4 %f \n",pol2,pol4);
  chisq = pow(Left(par,0),2.);   chisq += pow(Left(par,2),2.);  chisq += pow( Left(par,4),2.);
  chisq += pow(Right(par,0),2.); chisq += pow(Right(par,2),2.); chisq += pow(Right(par,4),2.);
  chisq += pow(Up(par,0),2.);    chisq += pow(Up(par,2),2.);    chisq += pow(   Up(par,4),2.);
  chisq += pow(Down(par,0),2.);  chisq += pow(Down(par,2),2.);  chisq += pow( Down(par,4),2.);
  chisq += pow(polaz(par,2),2.);  chisq += pow( polaz(par,4),2.);
  f = chisq;
  chis=f;
  //  fprintf(stdout,"value %f\n",f);
}

void Ifit(double *vstart,TMinuit *gMinuit,double count[12],double Pzz[3],double dPzz[3],double *errors){
 TString ch;
 int i,ierflg = 0;
  double step = .01,arglist[10],end1,end2,anglestep=0.001;
  gMinuit->SetFCN(fcn);
  arglist[0]=1.;                       /*set UP in the Error definition, big UP big error UP~1 */
  gMinuit->mnexcm("SET ERR", arglist ,1,ierflg);
  gMinuit->SetPrintLevel(0);    /*-1=no print except warnings 0=min print 1=default values and normal output*/
  gMinuit->DefineParameter(0, "L0",    vstart[0],step,0.,100.); //   gMinuit->FixParameter(0); 
  gMinuit->DefineParameter(1, "R0",    vstart[1],step,0.,100.); //   gMinuit->FixParameter(1);
  gMinuit->DefineParameter(2, "U0",    vstart[2],step,0.,100.); //   gMinuit->FixParameter(2);
  gMinuit->DefineParameter(3, "D0",    vstart[3],step,0.,100.); //   gMinuit->FixParameter(3);
  gMinuit->DefineParameter(4, "offPzz",vstart[4],step,-1.,1.);  //   gMinuit->FixParameter(4);
  gMinuit->DefineParameter(5, "iT11",  vstart[5],step,-1.,.5);
  gMinuit->DefineParameter(6, "T21",   vstart[6],step,-1.,.5);
  gMinuit->DefineParameter(7, "T22",   vstart[7],step,-1.,.5);
  gMinuit->DefineParameter(8, "T20",   vstart[8],step,-1.,.5);
  gMinuit->DefineParameter(9,  "2Pzz", Pzz[1],dPzz[1],-1.,1.);   
  gMinuit->DefineParameter(10, "4Pzz", Pzz[2],dPzz[2],-1.,1.);   
  gMinuit->DefineParameter(11, "Loff", count[0],errors[0],-1,100.);     gMinuit->FixParameter(11);
  gMinuit->DefineParameter(12, "L2",   count[1],errors[1],-1,100.);     gMinuit->FixParameter(12);
  gMinuit->DefineParameter(13, "L4",   count[2],errors[2],-1,100.);     gMinuit->FixParameter(13);
  gMinuit->DefineParameter(14, "Roff", count[3],errors[3],-1,100.);     gMinuit->FixParameter(14);
  gMinuit->DefineParameter(15, "R2",   count[4],errors[4],-1,100.);     gMinuit->FixParameter(15);
  gMinuit->DefineParameter(16, "R4",   count[5],errors[5],-1,100.);     gMinuit->FixParameter(16);
  gMinuit->DefineParameter(17, "Uoff", count[6],errors[6],-1,100.);     gMinuit->FixParameter(17);
  gMinuit->DefineParameter(18, "U2",   count[7],errors[7],-1,100.);     gMinuit->FixParameter(18);
  gMinuit->DefineParameter(19, "U4",   count[8],errors[8],-1,100.);     gMinuit->FixParameter(19);
  gMinuit->DefineParameter(20, "Doff", count[9],errors[9],-1,100.);     gMinuit->FixParameter(20);
  gMinuit->DefineParameter(21, "D2",   count[10],errors[10],-1,100.);   gMinuit->FixParameter(21);
  gMinuit->DefineParameter(22, "D4",   count[11],errors[11],-1,100.);   gMinuit->FixParameter(22);
  gMinuit->DefineParameter(23, "dLoff", errors[0],step ,-1.,1.);     gMinuit->FixParameter(23);
  gMinuit->DefineParameter(24, "dL2",   errors[1],step ,-1.,1.);     gMinuit->FixParameter(24);
  gMinuit->DefineParameter(25, "dL4",   errors[2],step ,-1.,1.);     gMinuit->FixParameter(25);
  gMinuit->DefineParameter(26, "dRoff", errors[3],step ,-1.,1.);     gMinuit->FixParameter(26);
  gMinuit->DefineParameter(27, "dR2",   errors[4],step ,-1.,1.);     gMinuit->FixParameter(27);
  gMinuit->DefineParameter(28, "dR4",   errors[5],step ,-1.,1.);     gMinuit->FixParameter(28);
  gMinuit->DefineParameter(29, "dUoff", errors[6],step ,-1.,1.);     gMinuit->FixParameter(29);
  gMinuit->DefineParameter(30, "dU2",   errors[7],step ,-1.,1.);     gMinuit->FixParameter(30);
  gMinuit->DefineParameter(31, "dU4",   errors[8],step ,-1.,1.);     gMinuit->FixParameter(31);
  gMinuit->DefineParameter(32, "dDoff", errors[9],step ,-1.,1.);     gMinuit->FixParameter(32);
  gMinuit->DefineParameter(33, "dD2",   errors[10],step,-1.,1.);     gMinuit->FixParameter(33);
  gMinuit->DefineParameter(34, "dD4",   errors[11],step,-1.,1.);     gMinuit->FixParameter(34);
  gMinuit->DefineParameter(35, "alpha", vstart[9],anglestep,-1*pi2,pi2);  gMinuit->FixParameter(35);  
  gMinuit->DefineParameter(36, "beta2", vstart[10],anglestep,0.,pi);    gMinuit->FixParameter(36);
  gMinuit->DefineParameter(37, "beta4", vstart[11],anglestep,0.,pi);    gMinuit->FixParameter(37);
  gMinuit->DefineParameter(38, "d2PzzAsy", dPzz[1],step,0.,1);          gMinuit->FixParameter(38);
  gMinuit->DefineParameter(39, "d4PzzAsy", dPzz[2],step,0.,1);          gMinuit->FixParameter(39);
  gMinuit->DefineParameter(40, "2PzzAsy",  Pzz[1],dPzz[1],-1.,1.);      gMinuit->FixParameter(40);  
  gMinuit->DefineParameter(41, "4PzzAsy",  Pzz[2],dPzz[2],-1.,1.);      gMinuit->FixParameter(41); 
  gMinuit->DefineParameter(42, "2Pzratio",.33333,step,0.,.5);          gMinuit->FixParameter(42);  
  gMinuit->DefineParameter(43, "4Pzratio",.33333,step,0.,.5);          gMinuit->FixParameter(43); 

  // Now ready for minimization step
  arglist[0] = 50000;  /*number of iterations*/
  arglist[1] = .1;   /*tolerance*/
/*minimization will stop when the estimated vertical distance to the minimum is less than  0.001*[tolerance]*UP (see [SET ERRordef])*/
   gMinuit->mnexcm("MIGRAD", arglist ,2,ierflg); 

  /*ask the new values*/
  gMinuit->mnpout(0,ch,vstart[0],errors[0],end1,end2,i);
  gMinuit->mnpout(1,ch,vstart[1],errors[1],end1,end2,i);
  gMinuit->mnpout(2,ch,vstart[2],errors[2],end1,end2,i);
  gMinuit->mnpout(3,ch,vstart[3],errors[3],end1,end2,i);
  gMinuit->mnpout(4,ch,vstart[4],errors[4],end1,end2,i);
  gMinuit->mnpout(5,ch,vstart[5],errors[5],end1,end2,i);
  gMinuit->mnpout(6,ch,vstart[6],errors[6],end1,end2,i);
  gMinuit->mnpout(7,ch,vstart[7],errors[7],end1,end2,i);
  gMinuit->mnpout(8,ch,vstart[8],errors[8],end1,end2,i);
                       vstart[9]=chis;
  gMinuit->mnpout(9,ch,vstart[10],errors[10],end1,end2,i);  /*pzz/pz ratio*/
  gMinuit->mnpout(10,ch,vstart[11],errors[11],end1,end2,i);
  gMinuit->mncler();
}
