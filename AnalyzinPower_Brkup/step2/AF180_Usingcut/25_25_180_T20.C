{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:10:47 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.6344969,267.5,0.3436216);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.05576187);
   gre->SetPointError(0,0,0.07503735);
   gre->SetPoint(1,165,0.1006374);
   gre->SetPointError(1,0,0.07996443);
   gre->SetPoint(2,175,-0.1874409);
   gre->SetPointError(2,0,0.06750921);
   gre->SetPoint(3,185,-0.2812196);
   gre->SetPointError(3,0,0.05752175);
   gre->SetPoint(4,195,-0.3205992);
   gre->SetPointError(4,0,0.04621198);
   gre->SetPoint(5,205,-0.4062655);
   gre->SetPointError(5,0,0.03295268);
   gre->SetPoint(6,215,-0.448596);
   gre->SetPointError(6,0,0.02288116);
   gre->SetPoint(7,225,-0.4045065);
   gre->SetPointError(7,0,0.01631561);
   gre->SetPoint(8,235,-0.4043639);
   gre->SetPointError(8,0,0.01177748);
   gre->SetPoint(9,245,-0.3657089);
   gre->SetPointError(9,0,0.01215031);
   
   TH1F *Graph_gr_T20_25_25_18055 = new TH1F("Graph_gr_T20_25_25_18055","",100,146,254);
   Graph_gr_T20_25_25_18055->SetMinimum(-0.536685);
   Graph_gr_T20_25_25_18055->SetMaximum(0.2458097);
   Graph_gr_T20_25_25_18055->SetDirectory(0);
   Graph_gr_T20_25_25_18055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_25_18055->SetLineColor(ci);
   Graph_gr_T20_25_25_18055->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_18055->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_18055->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_18055->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_25_18055->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_18055->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_18055->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_18055->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_25_18055->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_25_18055->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_25_18055->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_25_18055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_25_18055);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
