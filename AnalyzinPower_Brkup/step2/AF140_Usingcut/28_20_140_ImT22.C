{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:23:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.2519868,245,0.09607521);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.05045694);
   gre->SetPointError(0,0,0.05031006);
   gre->SetPoint(1,155,-0.003643167);
   gre->SetPointError(1,0,0.04138135);
   gre->SetPoint(2,165,-0.006996503);
   gre->SetPointError(2,0,0.04506138);
   gre->SetPoint(3,175,-0.04853097);
   gre->SetPointError(3,0,0.04748515);
   gre->SetPoint(4,185,-0.03041692);
   gre->SetPointError(4,0,0.04312316);
   gre->SetPoint(5,195,-0.05434009);
   gre->SetPointError(5,0,0.04254887);
   gre->SetPoint(6,205,-0.0979418);
   gre->SetPointError(6,0,0.04411993);
   gre->SetPoint(7,215,-0.04228772);
   gre->SetPointError(7,0,0.04119465);
   gre->SetPoint(8,225,-0.1520021);
   gre->SetPointError(8,0,0.04197439);
   
   TH1F *Graph_gr_ImT22_28_20_14050 = new TH1F("Graph_gr_ImT22_28_20_14050","",100,137,233);
   Graph_gr_ImT22_28_20_14050->SetMinimum(-0.2171806);
   Graph_gr_ImT22_28_20_14050->SetMaximum(0.06126901);
   Graph_gr_ImT22_28_20_14050->SetDirectory(0);
   Graph_gr_ImT22_28_20_14050->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_20_14050->SetLineColor(ci);
   Graph_gr_ImT22_28_20_14050->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_14050->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_14050->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_14050->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_14050->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_14050->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_14050->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_14050->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_14050->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_14050->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_14050->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_14050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_20_14050);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
