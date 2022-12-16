{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 00:40:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(115,11.01988,235,47.09236);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_crsection_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,17.4853);
   gre->SetPointError(0,0,0.453334);
   gre->SetPoint(1,144.9204,25.28548);
   gre->SetPointError(1,0,0.5724911);
   gre->SetPoint(2,155,26.33737);
   gre->SetPointError(2,0,0.5838474);
   gre->SetPoint(3,165,24.59456);
   gre->SetPointError(3,0,0.5672165);
   gre->SetPoint(4,175,22.70814);
   gre->SetPointError(4,0,0.5487439);
   gre->SetPoint(5,185,22.4133);
   gre->SetPointError(5,0,0.5414155);
   gre->SetPoint(6,195,25.05185);
   gre->SetPointError(6,0,0.5569843);
   gre->SetPoint(7,205,29.5671);
   gre->SetPointError(7,0,0.6107124);
   gre->SetPoint(8,215,40.38082);
   gre->SetPointError(8,0,0.6994644);
   
   TH1F *Graph_gr_crsection_28_28_14017 = new TH1F("Graph_gr_crsection_28_28_14017","",100,127,223);
   Graph_gr_crsection_28_28_14017->SetMinimum(14.62713);
   Graph_gr_crsection_28_28_14017->SetMaximum(43.48511);
   Graph_gr_crsection_28_28_14017->SetDirectory(0);
   Graph_gr_crsection_28_28_14017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_28_14017->SetLineColor(ci);
   Graph_gr_crsection_28_28_14017->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_14017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_14017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_14017->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_28_14017->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_14017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_14017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_14017->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_28_14017->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_14017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_14017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_14017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_28_14017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
