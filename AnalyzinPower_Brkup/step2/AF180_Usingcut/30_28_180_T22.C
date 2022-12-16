{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Apr 18 07:32:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",548,71,1048,578);
   Canvas_1->Range(112.5,-0.293751,247.5,0.03537318);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_30_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.07275502);
   gre->SetPointError(0,0,0.05327416);
   gre->SetPoint(1,145,-0.1923908);
   gre->SetPointError(1,0,0.04650622);
   gre->SetPoint(2,155,-0.1330136);
   gre->SetPointError(2,0,0.0433423);
   gre->SetPoint(3,165,-0.1486753);
   gre->SetPointError(3,0,0.03965981);
   gre->SetPoint(4,175,-0.1596415);
   gre->SetPointError(4,0,0.02909552);
   gre->SetPoint(5,185,-0.1442447);
   gre->SetPointError(5,0,0.01926328);
   gre->SetPoint(6,195,-0.1041915);
   gre->SetPointError(6,0,0.01235239);
   gre->SetPoint(7,205,-0.1054434);
   gre->SetPointError(7,0,0.007501403);
   gre->SetPoint(8,215,-0.1200857);
   gre->SetPointError(8,0,0.004714484);
   gre->SetPoint(9,225,-0.1333654);
   gre->SetPointError(9,0,0.006725333);
   
   TH1F *Graph_gr_T22_30_28_1803 = new TH1F("Graph_gr_T22_30_28_1803","",100,126,234);
   Graph_gr_T22_30_28_1803->SetMinimum(-0.2608386);
   Graph_gr_T22_30_28_1803->SetMaximum(0.002460756);
   Graph_gr_T22_30_28_1803->SetDirectory(0);
   Graph_gr_T22_30_28_1803->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_30_28_1803->SetLineColor(ci);
   Graph_gr_T22_30_28_1803->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_30_28_1803->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_30_28_1803->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_30_28_1803->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_30_28_1803->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_30_28_1803->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_30_28_1803->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_30_28_1803->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_30_28_1803->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_30_28_1803->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_30_28_1803->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_30_28_1803->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_30_28_1803);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
