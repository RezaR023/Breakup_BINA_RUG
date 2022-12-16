{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:04:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(135,-0.281587,255,0.08344598);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_25_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.0918369);
   gre->SetPointError(0,0,0.04747196);
   gre->SetPoint(1,165,-0.1286055);
   gre->SetPointError(1,0,0.04610385);
   gre->SetPoint(2,175,-0.09565748);
   gre->SetPointError(2,0,0.04839106);
   gre->SetPoint(3,185,-0.03864513);
   gre->SetPointError(3,0,0.04748918);
   gre->SetPoint(4,195,-0.1540421);
   gre->SetPointError(4,0,0.05208344);
   gre->SetPoint(5,205,-0.1651984);
   gre->SetPointError(5,0,0.05554973);
   gre->SetPoint(6,215,-0.09535591);
   gre->SetPointError(6,0,0.04812281);
   gre->SetPoint(7,225,-0.02690715);
   gre->SetPointError(7,0,0.0495143);
   gre->SetPoint(8,235,-0.03948205);
   gre->SetPointError(8,0,0.04539653);
   
   TH1F *Graph_gr_iT11_25_20_14026 = new TH1F("Graph_gr_iT11_25_20_14026","",100,147,243);
   Graph_gr_iT11_25_20_14026->SetMinimum(-0.2450837);
   Graph_gr_iT11_25_20_14026->SetMaximum(0.04694268);
   Graph_gr_iT11_25_20_14026->SetDirectory(0);
   Graph_gr_iT11_25_20_14026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_20_14026->SetLineColor(ci);
   Graph_gr_iT11_25_20_14026->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_14026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_14026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_14026->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_20_14026->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_14026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_14026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_14026->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_20_14026->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_20_14026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_20_14026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_20_14026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_20_14026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
