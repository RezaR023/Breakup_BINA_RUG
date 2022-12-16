{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:28:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,1016,578);
   Canvas_1->Range(100,-0.6982674,310,0.2210524);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,145,-0);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,155,-0);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,165,-0.2449932);
   gre->SetPointError(3,0,0.3000542);
   gre->SetPoint(4,175,-0.01348866);
   gre->SetPointError(4,0,0.08132112);
   gre->SetPoint(5,185,-0.02595717);
   gre->SetPointError(5,0,0.04783204);
   gre->SetPoint(6,195,0.004029593);
   gre->SetPointError(6,0,0.04792563);
   gre->SetPoint(7,205,0.02554844);
   gre->SetPointError(7,0,0.03881533);
   gre->SetPoint(8,215,-0.03002116);
   gre->SetPointError(8,0,0.03921113);
   gre->SetPoint(9,225,0.02114789);
   gre->SetPointError(9,0,0.03390714);
   gre->SetPoint(10,235,0.004118339);
   gre->SetPointError(10,0,0.03346207);
   gre->SetPoint(11,245,-0.002685541);
   gre->SetPointError(11,0,0.0300621);
   gre->SetPoint(12,255,0.01343988);
   gre->SetPointError(12,0,0.02905614);
   gre->SetPoint(13,265,-0.03018584);
   gre->SetPointError(13,0,0.02370793);
   gre->SetPoint(14,275,-0.03933143);
   gre->SetPointError(14,0,0.0180299);
   
   TH1F *Graph_gr_ImT22_15_15_1802 = new TH1F("Graph_gr_ImT22_15_15_1802","",100,121,289);
   Graph_gr_ImT22_15_15_1802->SetMinimum(-0.6063354);
   Graph_gr_ImT22_15_15_1802->SetMaximum(0.1291204);
   Graph_gr_ImT22_15_15_1802->SetDirectory(0);
   Graph_gr_ImT22_15_15_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_1802->SetLineColor(ci);
   Graph_gr_ImT22_15_15_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
