{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:12:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.2266276,287.5,0.1025918);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.07575703);
   gre->SetPointError(0,0,0.04091878);
   gre->SetPoint(1,185,-0.07269624);
   gre->SetPointError(1,0,0.04520224);
   gre->SetPoint(2,195,-0.00176373);
   gre->SetPointError(2,0,0.04948562);
   gre->SetPoint(3,205,-0.1300974);
   gre->SetPointError(3,0,0.04166025);
   gre->SetPoint(4,215,-0.1026095);
   gre->SetPointError(4,0,0.03759374);
   gre->SetPoint(5,225,-0.01347149);
   gre->SetPointError(5,0,0.0339853);
   gre->SetPoint(6,235,0.001152939);
   gre->SetPointError(6,0,0.03043832);
   gre->SetPoint(7,245,-0.05123615);
   gre->SetPointError(7,0,0.02582716);
   gre->SetPoint(8,255,-0.03044454);
   gre->SetPointError(8,0,0.02229584);
   gre->SetPoint(9,265,-0.01207052);
   gre->SetPointError(9,0,0.01817576);
   
   TH1F *Graph_gr_iT11_20_20_160109 = new TH1F("Graph_gr_iT11_20_20_160109","",100,166,274);
   Graph_gr_iT11_20_20_160109->SetMinimum(-0.1937057);
   Graph_gr_iT11_20_20_160109->SetMaximum(0.06966985);
   Graph_gr_iT11_20_20_160109->SetDirectory(0);
   Graph_gr_iT11_20_20_160109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_20_160109->SetLineColor(ci);
   Graph_gr_iT11_20_20_160109->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_160109->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_160109->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_160109->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_160109->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_160109->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_160109->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_160109->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_20_160109->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_20_160109->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_20_160109->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_20_160109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_20_160109);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
