{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:24:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(112.5,-0.5571868,247.5,0.3273291);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.05157258);
   gre->SetPointError(0,0,0.09263965);
   gre->SetPoint(1,145,0.1150884);
   gre->SetPointError(1,0,0.06482138);
   gre->SetPoint(2,155,0.04597651);
   gre->SetPointError(2,0,0.0617587);
   gre->SetPoint(3,165,0.04365543);
   gre->SetPointError(3,0,0.06244435);
   gre->SetPoint(4,175,-0.1275951);
   gre->SetPointError(4,0,0.06059687);
   gre->SetPoint(5,185,-0.07768407);
   gre->SetPointError(5,0,0.06563617);
   gre->SetPoint(6,195,-0.1595877);
   gre->SetPointError(6,0,0.06358449);
   gre->SetPoint(7,205,-0.2969929);
   gre->SetPointError(7,0,0.05629811);
   gre->SetPoint(8,215,-0.3617094);
   gre->SetPointError(8,0,0.04805808);
   gre->SetPoint(9,225,-0.3623417);
   gre->SetPointError(9,0,0.04366452);
   
   TH1F *Graph_gr_T20_28_25_14053 = new TH1F("Graph_gr_T20_28_25_14053","",100,126,234);
   Graph_gr_T20_28_25_14053->SetMinimum(-0.4687352);
   Graph_gr_T20_28_25_14053->SetMaximum(0.2388775);
   Graph_gr_T20_28_25_14053->SetDirectory(0);
   Graph_gr_T20_28_25_14053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_25_14053->SetLineColor(ci);
   Graph_gr_T20_28_25_14053->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_14053->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_14053->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_14053->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_14053->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_14053->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_14053->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_14053->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_14053->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_14053->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_14053->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_14053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_25_14053);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
