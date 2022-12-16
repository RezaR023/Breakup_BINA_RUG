#include <iostream>
#include <fstream>
using namespace std;
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define Infile "/home/mardanpur/exp/may04f2/symmetry_minuit/sym_130_minuit_T21/AnalysingPowers_130.dat"
#define Outfile "/home/mardanpur/exp/may04f2/symmetry_minuit/sym_130_minuit_T21/ReviewError/SystematicError_130.dat"
#define be   (82.5)
#define dbe  (0.5)
#define al   (2.0)
#define dal  (0.5)
#define Pzz  (1.0)
#define Pz   (Pzz*0.3333)
#define dPzz (0.04)
#define dPz  (0.013)
#define T11  (.439)
#define T22  (.158)
#define T20  (.49)
#define T21  (.267)
#define D2R (3.14/180.)
int write_errors(double T11Sys,double T22Sys,double T20Sys,double T21Sys);

int  main (){
  double dT11dal  = (sin(al*D2R)/cos(al*D2R))*dal*D2R;
  double dT11dbe  = (cos(be*D2R)/sin(be*D2R))*dbe*D2R;
  double dT11dPzz = dPz/Pz;
  double T11Sys   = sqrt(pow(dT11dal,2.)+pow(dT11dbe,2.)+pow(dT11dPzz,2.));
  fprintf(stdout,"iT11\t%2.4f\t%2.4f\t%2.4f\t%2.4f\t%2.4f\n",dT11dal,dT11dbe,dT11dPzz,T11Sys,T11Sys*T11);

  double dT22dal  = ((2*sin(2*al*D2R))/cos(2*al*D2R))*dal*D2R;
  double dT22dbe  = ((2*cos(be*D2R))/sin(be*D2R))*dbe*D2R;
  double dT22dPzz = dPzz/Pzz;
  double T22Sys   = sqrt(pow(dT22dal,2.)+pow(dT22dbe,2.)+pow(dT22dPzz,2.));
  fprintf(stdout,"T22\t%2.4f\t%2.4f\t%2.4f\t%2.4f\t%2.4f\n",dT22dal,dT22dbe,dT22dPzz,T22Sys,T22Sys*T22);
  
  double dT20dal  = 0;
  double dT20dbe  = ((6*cos(be*D2R)*sin(be*D2R))/(3*cos(be*D2R)*cos(be*D2R)-1))*dbe*D2R;
  double dT20dPzz = dPzz/Pzz;
  double T20Sys   = sqrt(pow(dT20dal,2.)+pow(dT20dbe,2.)+pow(dT20dPzz,2.));
  fprintf(stdout,"T20\t%2.4f\t%2.4f\t%2.4f\t%2.4f\t%2.4f\n",dT20dal,dT20dbe,dT20dPzz,T20Sys,T20Sys*T20);
  
  double dT21dal  = (sin(al*D2R)/cos(al*D2R))*dal*D2R;
  double dT21dbe  = ((2*cos(2*be*D2R))/(sin(2*be*D2R)))*dbe*D2R;
  double dT21dPzz = dPzz/Pzz;
  double T21Sys   = sqrt(pow(dT21dal,2.)+pow(dT21dbe,2.)+pow(dT21dPzz,2.));
  fprintf(stdout,"T21\t%2.4f\t%2.4f\t%2.4f\t%2.4f\t%2.4f\n",dT21dal,dT21dbe,dT21dPzz,T21Sys,T21Sys*T21);
  if(!  write_errors(T11Sys,T22Sys,T20Sys,T21Sys)){
    fprintf(stdout,"there is a problem in the Systematical Error calculation\n");
    return 0;
  }
  return 1;
}


int write_errors(double T11Sys,double T22Sys,double T20Sys,double T21Sys){
  int Nangles=8;
  char ch[50];
  double AP[Nangles][9];
  double Sys[9]={0,T11Sys,0,T22Sys,0,T20Sys,0,T21Sys,0};
  /*read the AP value with statistical errors*/
  ifstream inf(Infile);
  if (!inf){
    fprintf(stdout,"file %s cannot be open.\n",Infile);
    return 0;
  }else { 
    inf >> ch >> ch >> ch >> ch >> ch ;
    inf >> ch >> ch >> ch >> ch >> ch  >> ch >> ch >> ch >> ch ;
    for (int k=0;k<Nangles;k++){
      for (int l=0;l<9;l++)
	inf >> AP[k][l];
    }
  }
  /*Write  the AP value with statistical errors and systematical*/
  FILE *outf;
  outf = fopen(Outfile,"w");  /*Ref HEX-off*/
  if (!outf){ 
    fprintf(stdout,"Error in opening the file %s.\n",Outfile);
    return 0;
  }
  fprintf(outf,"!Analysing powers of 130 MeV");
  fprintf(outf,"\n!th_cm\tT11\tdT11st\tdT11sy\tT22\tdT22st\tdT22sy\tT20\tdT20st\tdT20sy\tT21\tdT21st\tdT21sy");
  for (int k=0;k<Nangles;k++){
    fprintf(outf,"\n%3.1f  ",AP[k][0]);
    for (int l=1;l<9;l=l+2)
      fprintf(outf,"%2.2e  %1.1e  %1.1e  ",AP[k][l],AP[k][l+1],fabs(AP[k][l]*Sys[l]));
  }
  fclose(outf);
  inf.close();
  fprintf(stdout,"File %s is saved.\n",Outfile);
  return 1;
}
