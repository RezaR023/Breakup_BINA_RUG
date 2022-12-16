{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 17 01:19:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,71,960,578);
   Canvas_1->Range(112.5,-23.22865,247.5,228.6108);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,19.27713);
   gre->SetPointError(0,0,0.5325371);
   gre->SetPoint(1,145,29.34401);
   gre->SetPointError(1,0,0.6046598);
   gre->SetPoint(2,155,29.98337);
   gre->SetPointError(2,0,0.6020834);
   gre->SetPoint(3,165,31.96661);
   gre->SetPointError(3,0,0.6198733);
   gre->SetPoint(4,175,35.95568);
   gre->SetPointError(4,0,0.6526554);
   gre->SetPoint(5,185,47.36444);
   gre->SetPointError(5,0,0.7452386);
   gre->SetPoint(6,195,71.73187);
   gre->SetPointError(6,0,0.9164976);
   gre->SetPoint(7,205,113.2024);
   gre->SetPointError(7,0,1.145077);
   gre->SetPoint(8,215,159.5062);
   gre->SetPointError(8,0,1.354326);
   gre->SetPoint(9,225,185.1813);
   gre->SetPointError(9,0,1.456267);
   
   TH1F *Graph_gr_crsection_28_28_16033 = new TH1F("Graph_gr_crsection_28_28_16033","",100,126,234);
   Graph_gr_crsection_28_28_16033->SetMinimum(1.955293);
   Graph_gr_crsection_28_28_16033->SetMaximum(203.4268);
   Graph_gr_crsection_28_28_16033->SetDirectory(0);
   Graph_gr_crsection_28_28_16033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_crsection_28_28_16033->SetLineColor(ci);
   Graph_gr_crsection_28_28_16033->GetXaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_16033->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_16033->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_16033->GetXaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_28_16033->GetYaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_16033->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_16033->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_16033->GetYaxis()->SetTitleFont(42);
   Graph_gr_crsection_28_28_16033->GetZaxis()->SetLabelFont(42);
   Graph_gr_crsection_28_28_16033->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_crsection_28_28_16033->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_crsection_28_28_16033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_crsection_28_28_16033);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
