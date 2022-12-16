{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:44:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.6195712,257.5,0.5206756);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.2494432);
   gre->SetPointError(0,0,0.08119126);
   gre->SetPoint(1,155,-0.0510327);
   gre->SetPointError(1,0,0.06876084);
   gre->SetPoint(2,165,-0.0529248);
   gre->SetPointError(2,0,0.06325724);
   gre->SetPoint(3,175,-0.1901834);
   gre->SetPointError(3,0,0.05142272);
   gre->SetPoint(4,185,-0.3047772);
   gre->SetPointError(4,0,0.0363849);
   gre->SetPoint(5,195,-0.3734289);
   gre->SetPointError(5,0,0.02396551);
   gre->SetPoint(6,205,-0.3929332);
   gre->SetPointError(6,0,0.01523923);
   gre->SetPoint(7,215,-0.3735452);
   gre->SetPointError(7,0,0.01006439);
   gre->SetPoint(8,225,-0.3945682);
   gre->SetPointError(8,0,0.007959308);
   gre->SetPoint(9,235,-0.416117);
   gre->SetPointError(9,0,0.01341304);
   
   TH1F *Graph_gr_T20_28_28_18080 = new TH1F("Graph_gr_T20_28_28_18080","",100,136,244);
   Graph_gr_T20_28_28_18080->SetMinimum(-0.5055465);
   Graph_gr_T20_28_28_18080->SetMaximum(0.4066509);
   Graph_gr_T20_28_28_18080->SetDirectory(0);
   Graph_gr_T20_28_28_18080->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_18080->SetLineColor(ci);
   Graph_gr_T20_28_28_18080->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18080->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18080->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18080->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18080->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18080->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18080->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18080->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18080->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18080->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18080->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18080->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_18080);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
