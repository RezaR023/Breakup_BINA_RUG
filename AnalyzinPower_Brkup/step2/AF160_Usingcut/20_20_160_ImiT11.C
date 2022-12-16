{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:13:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.2331197,287.5,0.1660771);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,0.01172195);
   gre->SetPointError(0,0,0.04458488);
   gre->SetPoint(1,185,-0.04443688);
   gre->SetPointError(1,0,0.05051159);
   gre->SetPoint(2,195,-0.1128798);
   gre->SetPointError(2,0,0.05370709);
   gre->SetPoint(3,205,0.05472123);
   gre->SetPointError(3,0,0.04482303);
   gre->SetPoint(4,215,0.003681595);
   gre->SetPointError(4,0,0.04128237);
   gre->SetPoint(5,225,0.04477608);
   gre->SetPointError(5,0,0.03798305);
   gre->SetPoint(6,235,-0.03199897);
   gre->SetPointError(6,0,0.03271279);
   gre->SetPoint(7,245,-0.02526895);
   gre->SetPointError(7,0,0.0285688);
   gre->SetPoint(8,255,0.0168765);
   gre->SetPointError(8,0,0.02411109);
   gre->SetPoint(9,265,0.01417437);
   gre->SetPointError(9,0,0.01966731);
   
   TH1F *Graph_gr_ImiT11_20_20_160110 = new TH1F("Graph_gr_ImiT11_20_20_160110","",100,166,274);
   Graph_gr_ImiT11_20_20_160110->SetMinimum(-0.1932001);
   Graph_gr_ImiT11_20_20_160110->SetMaximum(0.1261574);
   Graph_gr_ImiT11_20_20_160110->SetDirectory(0);
   Graph_gr_ImiT11_20_20_160110->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_160110->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_160110->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_160110->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_160110->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_160110->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_160110->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_160110->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_160110->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_160110->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_160110->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_160110->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_160110->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_160110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_160110);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
