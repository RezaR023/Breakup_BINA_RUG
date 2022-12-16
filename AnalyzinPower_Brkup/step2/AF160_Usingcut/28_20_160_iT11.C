{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:31:12 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2499342,257.5,0.2329051);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.01790767);
   gre->SetPointError(0,0,0.04965548);
   gre->SetPoint(1,155,-0.1238109);
   gre->SetPointError(1,0,0.04565008);
   gre->SetPoint(2,165,0.007234093);
   gre->SetPointError(2,0,0.04512215);
   gre->SetPoint(3,175,-0.09158481);
   gre->SetPointError(3,0,0.03979257);
   gre->SetPoint(4,185,-0.02481517);
   gre->SetPointError(4,0,0.04193067);
   gre->SetPoint(5,195,0.01839245);
   gre->SetPointError(5,0,0.04005573);
   gre->SetPoint(6,205,0.03321447);
   gre->SetPointError(6,0,0.0353083);
   gre->SetPoint(7,215,0.1079831);
   gre->SetPointError(7,0,0.02720104);
   gre->SetPoint(8,225,0.1324715);
   gre->SetPointError(8,0,0.01996037);
   gre->SetPoint(9,235,0.1055117);
   gre->SetPointError(9,0,0.01561701);
   
   TH1F *Graph_gr_iT11_28_20_160149 = new TH1F("Graph_gr_iT11_28_20_160149","",100,136,244);
   Graph_gr_iT11_28_20_160149->SetMinimum(-0.2016503);
   Graph_gr_iT11_28_20_160149->SetMaximum(0.1846212);
   Graph_gr_iT11_28_20_160149->SetDirectory(0);
   Graph_gr_iT11_28_20_160149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_20_160149->SetLineColor(ci);
   Graph_gr_iT11_28_20_160149->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_160149->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_160149->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_160149->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_160149->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_160149->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_160149->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_160149->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_20_160149->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_20_160149->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_20_160149->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_20_160149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_20_160149);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
