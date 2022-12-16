#include <iostream>
#include <fstream>
#define   datafile "AnalysingPowers_130.dat"
void StrechError(){
  double results[10][9];
  char ch[50];
  ifstream infile(datafile);
  if (!infile){
    fprintf(stdout,"file %s cannot be open.\n",datafile);
    return ;
  }

  infile >> ch >>   ch >>  ch >> ch >> ch ;
  infile >> ch >>   ch >>  ch >> ch >> ch >>   ch >>  ch >> ch >> ch ;
  for (int i=0;i<9;i++) {
    for (int j=0;j<9;j++) 
      infile >> results[i][j];
  }
  infile.close();
  TF1 *f = new TF1("f","pol4",68,121);
  TGraphErrors *gr= new TGraphErrors(10);
  double chi;
  
  for (int j=1;j<9;j=j+2){
    for (int ang=0;ang<8;ang++){
      gr->SetPoint(ang,results[ang][0],results[ang][j]);
      gr->SetPointError(ang,0,results[ang][j+1]);
    }
    gr->Fit("f","Q","",68,121);
    chi=f->GetChisquare()/5;
    for (int ang=0;ang<8;ang++){
      indchi=fabs((f->Eval(results[ang][0])-results[ang][j])/results[ang][j+1]);
      fprintf(stdout,"ang %d j %d  err %f ind chi %f \n",ang,j,results[ang][j+1],indchi);
      if (indchi>1.05) results[ang][j+1]=results[ang][j+1]*indchi;
    }
    fprintf(stdout," analyser %d chi %f \n",j,chi);
  }
  
  for (int j=1;j<9;j=j+2){
    for (int ang=0;ang<8;ang++){
      gr->SetPoint(ang,results[ang][0],results[ang][j]);
      gr->SetPointError(ang,0,results[ang][j+1]);
    }
    gr->Fit("f","Q","",68,121);
    chi=f->GetChisquare()/5;
    for (int ang=0;ang<8;ang++){
      indchi=fabs((f->Eval(results[ang][0])-results[ang][j])/results[ang][j+1]);
      fprintf(stdout,"ang %d j %d  err %f ind chi %f \n",ang,j,results[ang][j+1],indchi);
    }
    fprintf(stdout," analyser %d chi %f \n",j,chi);
  }
  fstream outfile(datafile,ios::out);
  if (!outfile){
    fprintf(stdout,"file %s cannot be open.\n",datafile);
    return ;
  }
  outfile << "!Analysing powers of 130 MeV\n";
  outfile << "!th_cm      T11      dT11       T22        dT22        T20       dT20       T21       dT21\n";
  for (int i=0;i<8;i++) {
    for (int j=0;j<9;j++) 
      outfile <<  results[i][j] << "   " ;
    outfile <<  "\n"; 
  }
  outfile.close();
    fprintf(stdout,"file %s is replaced.\n",datafile);

}
