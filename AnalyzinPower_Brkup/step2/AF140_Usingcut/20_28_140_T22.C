{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:50:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(145,-0.1207671,265,0.1199591);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_20_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.04698838);
   gre->SetPointError(0,0,0.02970866);
   gre->SetPoint(1,175,-0.01171588);
   gre->SetPointError(1,0,0.03000382);
   gre->SetPoint(2,185,-0.02765425);
   gre->SetPointError(2,0,0.03226006);
   gre->SetPoint(3,195,0.03342251);
   gre->SetPointError(3,0,0.03088181);
   gre->SetPoint(4,205,0.006386347);
   gre->SetPointError(4,0,0.02924282);
   gre->SetPoint(5,215,-0.05289921);
   gre->SetPointError(5,0,0.02774684);
   gre->SetPoint(6,225,-0.03114945);
   gre->SetPointError(6,0,0.02834078);
   gre->SetPoint(7,235,0.05311707);
   gre->SetPointError(7,0,0.02672104);
   gre->SetPoint(8,245,-0.03538229);
   gre->SetPointError(8,0,0.02544063);
   
   TH1F *Graph_gr_T22_20_28_14019 = new TH1F("Graph_gr_T22_20_28_14019","",100,157,253);
   Graph_gr_T22_20_28_14019->SetMinimum(-0.09669447);
   Graph_gr_T22_20_28_14019->SetMaximum(0.09588652);
   Graph_gr_T22_20_28_14019->SetDirectory(0);
   Graph_gr_T22_20_28_14019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_28_14019->SetLineColor(ci);
   Graph_gr_T22_20_28_14019->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_14019->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_14019->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_14019->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_14019->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_14019->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_14019->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_14019->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_14019->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_14019->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_14019->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_14019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_28_14019);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
