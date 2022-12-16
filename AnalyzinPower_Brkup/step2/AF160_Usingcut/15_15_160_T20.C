{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:48:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(162.5,-0.5880763,297.5,0.6087869);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.31808);
   gre->SetPointError(0,0,0.07051916);
   gre->SetPoint(1,195,-0.121378);
   gre->SetPointError(1,0,0.07005276);
   gre->SetPoint(2,205,-0.2533417);
   gre->SetPointError(2,0,0.06268882);
   gre->SetPoint(3,215,-0.12129);
   gre->SetPointError(3,0,0.059611);
   gre->SetPoint(4,225,-0.06996508);
   gre->SetPointError(4,0,0.05540397);
   gre->SetPoint(5,235,0.06593476);
   gre->SetPointError(5,0,0.05268771);
   gre->SetPoint(6,245,0.2024918);
   gre->SetPointError(6,0,0.04854733);
   gre->SetPoint(7,255,0.3288394);
   gre->SetPointError(7,0,0.0449276);
   gre->SetPoint(8,265,0.3004958);
   gre->SetPointError(8,0,0.03730029);
   gre->SetPoint(9,275,0.3779747);
   gre->SetPointError(9,0,0.03133498);
   
   TH1F *Graph_gr_T20_15_15_16085 = new TH1F("Graph_gr_T20_15_15_16085","",100,176,284);
   Graph_gr_T20_15_15_16085->SetMinimum(-0.46839);
   Graph_gr_T20_15_15_16085->SetMaximum(0.4891006);
   Graph_gr_T20_15_15_16085->SetDirectory(0);
   Graph_gr_T20_15_15_16085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_15_16085->SetLineColor(ci);
   Graph_gr_T20_15_15_16085->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16085->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16085->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16085->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_16085->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16085->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16085->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16085->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_15_16085->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_15_16085->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_15_16085->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_15_16085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_15_16085);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
