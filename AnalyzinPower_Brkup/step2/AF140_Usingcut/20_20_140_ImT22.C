{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:42:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.2159336,277.5,0.1653685);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1058076);
   gre->SetPointError(0,0,0.04657564);
   gre->SetPoint(1,175,-0.07627499);
   gre->SetPointError(1,0,0.04465674);
   gre->SetPoint(2,185,-0.08602763);
   gre->SetPointError(2,0,0.04987484);
   gre->SetPoint(3,195,0.05789977);
   gre->SetPointError(3,0,0.04391833);
   gre->SetPoint(4,205,0.05038917);
   gre->SetPointError(4,0,0.04559234);
   gre->SetPoint(5,215,-0.01932837);
   gre->SetPointError(5,0,0.03891857);
   gre->SetPoint(6,225,-0.03351845);
   gre->SetPointError(6,0,0.04474694);
   gre->SetPoint(7,235,-0.05078486);
   gre->SetPointError(7,0,0.03911761);
   gre->SetPoint(8,245,-0.07090531);
   gre->SetPointError(8,0,0.03324365);
   gre->SetPoint(9,255,-0.05665415);
   gre->SetPointError(9,0,0.0309958);
   
   TH1F *Graph_gr_ImT22_20_20_14010 = new TH1F("Graph_gr_ImT22_20_20_14010","",100,156,264);
   Graph_gr_ImT22_20_20_14010->SetMinimum(-0.1778034);
   Graph_gr_ImT22_20_20_14010->SetMaximum(0.1272382);
   Graph_gr_ImT22_20_20_14010->SetDirectory(0);
   Graph_gr_ImT22_20_20_14010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_20_14010->SetLineColor(ci);
   Graph_gr_ImT22_20_20_14010->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_14010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_14010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_14010->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_14010->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_14010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_14010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_14010->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_14010->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_14010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_14010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_14010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_20_14010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
