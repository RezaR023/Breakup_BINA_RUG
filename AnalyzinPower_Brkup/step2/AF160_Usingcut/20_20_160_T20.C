{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:13:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.4833318,287.5,0.1590914);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1803192);
   gre->SetPointError(0,0,0.0575694);
   gre->SetPoint(1,185,-0.1098656);
   gre->SetPointError(1,0,0.06318024);
   gre->SetPoint(2,195,-0.01460536);
   gre->SetPointError(2,0,0.0666262);
   gre->SetPoint(3,205,-0.3231988);
   gre->SetPointError(3,0,0.05306249);
   gre->SetPoint(4,215,-0.2911262);
   gre->SetPointError(4,0,0.04853612);
   gre->SetPoint(5,225,-0.3133765);
   gre->SetPointError(5,0,0.04275151);
   gre->SetPoint(6,235,-0.2364044);
   gre->SetPointError(6,0,0.03872417);
   gre->SetPoint(7,245,-0.1778651);
   gre->SetPointError(7,0,0.034398);
   gre->SetPoint(8,255,-0.126154);
   gre->SetPointError(8,0,0.02958369);
   gre->SetPoint(9,265,-0.1084135);
   gre->SetPointError(9,0,0.02439263);
   
   TH1F *Graph_gr_T20_20_20_160111 = new TH1F("Graph_gr_T20_20_20_160111","",100,166,274);
   Graph_gr_T20_20_20_160111->SetMinimum(-0.4190895);
   Graph_gr_T20_20_20_160111->SetMaximum(0.09484905);
   Graph_gr_T20_20_20_160111->SetDirectory(0);
   Graph_gr_T20_20_20_160111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_160111->SetLineColor(ci);
   Graph_gr_T20_20_20_160111->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_160111->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_160111->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_160111->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_160111->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_160111->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_160111->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_160111->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_160111->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_160111->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_160111->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_160111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_160111);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
