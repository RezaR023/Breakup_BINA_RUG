#include <vector>
#include <TPostScript.h>
#include "TVector3.h"
#include "Riostream.h"
#include "TPostScript.h"
#include "TLorentzVector.h"
#include "TGraphErrors.h"
#include "TF1.h"
#include "TRandom.h"
#include "TCutG.h"
#include <TLatex.h>
#include <TRandom3.h>

	
#define anglelist        "total.dat"
#define psfile           "chix.ps"
#define Nkinema (10)


FILE     *output[Nkinema],*outputy[Nkinema];
char     out1[Nkinema][500],out[Nkinema][500],cha[10][500],name[3][500],Scurve[Nkinema][250],WallScaling[Nkinema][250],cha2n[Nkinema][500],cha3n[Nkinema][500],cha1n[Nkinema][500],cha4n[Nkinema][500],cha5n[Nkinema][500],cha6n[Nkinema][500],cha7n[Nkinema][500],cha8n[Nkinema][500],cha9n[Nkinema][500],ch[Nkinema][500];
double St[Nkinema][500],chix[Nkinema][500],ndfx[Nkinema][500],chixr[Nkinema][500],Thli[Nkinema][10];
int l;
char outy[Nkinema][500],outy1[Nkinema][500],outy2[Nkinema][500],outy3[Nkinema][500],outy4[Nkinema][500],outye[Nkinema][500],outx[Nkinema][500],outx1[Nkinema][500],outx2[Nkinema][500],outx3[Nkinema][500],outx4[Nkinema][500];

TGraphErrors *g[Nkinema],*g1[Nkinema],*g2[Nkinema],*g3[Nkinema],*g4[Nkinema],*ge[Nkinema],*gx[Nkinema],*gx1[Nkinema],*gx2[Nkinema],*gx3[Nkinema],*gx4[Nkinema],*g5[Nkinema],*g6[Nkinema],*g5x[Nkinema],*gx5[Nkinema];

TGraphErrors *g2nf[Nkinema],*g3nf[Nkinema],*gxt[Nkinema],*gyt[Nkinema],*gytsym[Nkinema];
TH2D  *hAPy[Nkinema],*hAPx[Nkinema];
TH1D  *hx[Nkinema];
TF1 *fchisqrAx[Nkinema];

double ChiSquareDistribution(double *x, double *par)
{
  // ChiSquareDistribution: Function representing a chi-square distribution
  // par[0]=amplitude; par[1]=number of degrees of freedom; par[2]=0/1 flag to set to reduced chi-square
  if (par[2]) x[0]=x[0]*par[1]; 
  return (par[0]*ROOT::Math::chisquared_pdf(x[0],par[1]));
}
void chix(){
ifstream Sinputy,Sinputy1,Sinputy2,Sinputy3,Sinputy4,Sinputye,Sinputx,Sinputx1,Sinputx2,Sinputx3,Sinputx4;

 TPostScript *ps = new TPostScript(psfile,111);  ps->Range(19,27); 

TCanvas *c1 = new TCanvas("c1","BINA1 Canv");
c1->Size(21,29);
c1->Divide(2,5,0);

ifstream angle;
angle.open(anglelist);
  if(angle) fprintf(stdout,"file  %s is open.\n",anglelist);
  else {
    fprintf(stdout,"1 can't open file %s \n",anglelist);
   // return 0;
  }


for(int k=0;k<Nkinema;k++)
  {
angle>>Thli[k][0]>>Thli[k][1];

sprintf(cha1n[k],"chix_%d_%d.dat",Thli[k][0],Thli[k][1]);  

hx[k]=new TH1D("h","hh",23,0,2.3);
hx[k]->Sumw2();
//systematic error Ay
Sinputy1.open(cha1n[k]);
  if(Sinputy1) fprintf(stdout,"file  %s is open.\n ",cha1n[k]);
  else {
    fprintf(stdout,"can't open file %s \n",cha1n[k]);
  } 
l=0;
  do {  l++;
 Sinputy1>>St[k][l]>>chix[k][l]>>ndfx[k][l]>>chixr[k][l];
//cout<<chixr[k][l]<<endl;
hx[k]->Fill(chixr[k][l]);  

}while(!Sinputy1.eof());
Sinputy1.close();


        sprintf(ch[1],"fchisqrAx_%d_%d",Thli[k][0],Thli[k][1]);
        fchisqrAx[k]=new TF1(ch[1],ChiSquareDistribution,0,3,3);
        if(k==0 || k==5) { fchisqrAx[k]->SetParameter(0, 160); } // amplitude
        if(k==2)  {fchisqrAx[k]->SetParameter(0, 180);} 
        if(k==1 || k==3 || k==4 || k==6 || k==7 || k==8 || k==9  ) { fchisqrAx[k]->SetParameter(0, 170); }
  	fchisqrAx[k]->SetParameter(1, 17);  // NDF
  	fchisqrAx[k]->SetParameter(2, 1);  // flag (0 or 1) to set for reduced chi-square


TLegend *legend = new TLegend(0.7, 0.75, 1 , 1);
    legend->SetFillColor(0);
   legend->SetTextSize(0.05);
   legend->AddEntry(hx[k],"#chi_{r}^{2}","ep");
   legend->AddEntry(fchisqrAx[k],"expected #chi_{r}^{2}","l");

}


ps->NewPage();
sprintf(cha[2],"Deviation Analyzing Power; #chi_{r}^{2};Frequency");
gStyle->SetOptStat(0);
gStyle->SetOptFit(0);


for(int k=0;k<Nkinema;k++)
{

  hAPy[k]= new TH2D("hAPy",cha[2],23,0,2.3,11,0.001,21.1);
  hAPy[k]->GetXaxis()->CenterTitle(kTRUE);
  hAPy[k]->GetYaxis()->CenterTitle(kTRUE);
  hAPy[k]->GetXaxis()->SetTitleSize(0.07);
  hAPy[k]->GetYaxis()->SetTitleSize(0.07);
sprintf(cha[1]," #theta_{1}=%d^{#circ}   #theta_{2}=%d^{#circ} ",Thli[k][0],Thli[k][1]);   
hAPy[k]->SetTitle(cha[1]);
i=k+1;
c1->cd(i);

gPad->SetRightMargin(0.0);
gPad->SetTopMargin(0.001);
gPad->SetBottomMargin(0.001);
if(i==1 || i==3 || i==5 || i==7 || i==9 ) gPad->SetLeftMargin(0.1); 
if(i >= 9) gPad->SetBottomMargin(0.2);

hx[k]->SetMarkerStyle(24);
hx[k]->SetMarkerSize(0.5);
hAPy[k]->Draw();
hx[k]->Draw("samee");
fchisqrAx[k]->Draw("same");
if (i==1) legend->Draw();
}
c1->Print("chisqx.pdf");
ps->Close();     
}
