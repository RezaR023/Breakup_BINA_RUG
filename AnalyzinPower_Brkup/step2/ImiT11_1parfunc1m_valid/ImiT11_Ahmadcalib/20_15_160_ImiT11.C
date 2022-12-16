{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:37:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(140,-0.1208122,290,0.1585035);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImiT11_20_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.01487009);
   gre->SetPointError(0,0,0.04969503);
   gre->SetPoint(1,175,-0.0009492384);
   gre->SetPointError(1,0,0.03909119);
   gre->SetPoint(2,185,-0.005256022);
   gre->SetPointError(2,0,0.03823784);
   gre->SetPoint(3,195,-0.036014);
   gre->SetPointError(3,0,0.03824561);
   gre->SetPoint(4,205,0.05139629);
   gre->SetPointError(4,0,0.03208427);
   gre->SetPoint(5,215,0.04630402);
   gre->SetPointError(5,0,0.02757996);
   gre->SetPoint(6,225,0.02240674);
   gre->SetPointError(6,0,0.02371322);
   gre->SetPoint(7,235,0.07804421);
   gre->SetPointError(7,0,0.02067225);
   gre->SetPoint(8,245,0.03385801);
   gre->SetPointError(8,0,0.01708483);
   gre->SetPoint(9,255,0.08952153);
   gre->SetPointError(9,0,0.01430418);
   gre->SetPoint(10,265,0.09719116);
   gre->SetPointError(10,0,0.01475971);
   
   TH1F *Graph_gr_ImiT11_20_15_16021 = new TH1F("Graph_gr_ImiT11_20_15_16021","",100,155,275);
   Graph_gr_ImiT11_20_15_16021->SetMinimum(-0.09288065);
   Graph_gr_ImiT11_20_15_16021->SetMaximum(0.1305719);
   Graph_gr_ImiT11_20_15_16021->SetDirectory(0);
   Graph_gr_ImiT11_20_15_16021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_15_16021->SetLineColor(ci);
   Graph_gr_ImiT11_20_15_16021->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_16021->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_16021->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_16021->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_16021->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_16021->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_16021->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_16021->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_16021->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_16021->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_16021->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_16021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_15_16021);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
