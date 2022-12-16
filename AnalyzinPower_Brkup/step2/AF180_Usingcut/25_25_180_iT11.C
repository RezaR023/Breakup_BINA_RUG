{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:10:04 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.3648585,267.5,0.1533627);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.0184761);
   gre->SetPointError(0,0,0.04851638);
   gre->SetPoint(1,165,-0.1155449);
   gre->SetPointError(1,0,0.05149029);
   gre->SetPoint(2,175,-0.1142688);
   gre->SetPointError(2,0,0.04701355);
   gre->SetPoint(3,185,-0.1690472);
   gre->SetPointError(3,0,0.0392631);
   gre->SetPoint(4,195,-0.1926133);
   gre->SetPointError(4,0,0.03437156);
   gre->SetPoint(5,205,-0.1935099);
   gre->SetPointError(5,0,0.02534125);
   gre->SetPoint(6,215,-0.2605171);
   gre->SetPointError(6,0,0.01797118);
   gre->SetPoint(7,225,-0.2153394);
   gre->SetPointError(7,0,0.01282138);
   gre->SetPoint(8,235,-0.2125034);
   gre->SetPointError(8,0,0.009310892);
   gre->SetPoint(9,245,-0.1898948);
   gre->SetPointError(9,0,0.00940833);
   
   TH1F *Graph_gr_iT11_25_25_18053 = new TH1F("Graph_gr_iT11_25_25_18053","",100,146,254);
   Graph_gr_iT11_25_25_18053->SetMinimum(-0.3130364);
   Graph_gr_iT11_25_25_18053->SetMaximum(0.1015406);
   Graph_gr_iT11_25_25_18053->SetDirectory(0);
   Graph_gr_iT11_25_25_18053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_25_18053->SetLineColor(ci);
   Graph_gr_iT11_25_25_18053->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_18053->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_18053->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_18053->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_25_18053->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_18053->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_18053->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_18053->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_25_18053->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_18053->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_18053->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_18053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_25_18053);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
