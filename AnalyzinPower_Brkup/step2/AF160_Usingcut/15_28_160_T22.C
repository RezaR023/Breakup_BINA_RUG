{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:08:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.2183411,287.5,0.07646512);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_15_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.146913);
   gre->SetPointError(0,0,0.02229375);
   gre->SetPoint(1,185,-0.1234192);
   gre->SetPointError(1,0,0.01761896);
   gre->SetPoint(2,195,-0.07219563);
   gre->SetPointError(2,0,0.01598839);
   gre->SetPoint(3,205,-0.09739246);
   gre->SetPointError(3,0,0.01436706);
   gre->SetPoint(4,215,-0.07471025);
   gre->SetPointError(4,0,0.01392454);
   gre->SetPoint(5,225,-0.04367712);
   gre->SetPointError(5,0,0.01466633);
   gre->SetPoint(6,235,-0.01218983);
   gre->SetPointError(6,0,0.01642494);
   gre->SetPoint(7,245,-0.01124913);
   gre->SetPointError(7,0,0.0181133);
   gre->SetPoint(8,255,-0.02451434);
   gre->SetPointError(8,0,0.02047255);
   gre->SetPoint(9,265,0.005218611);
   gre->SetPointError(9,0,0.02211214);
   
   TH1F *Graph_gr_T22_15_28_160102 = new TH1F("Graph_gr_T22_15_28_160102","",100,166,274);
   Graph_gr_T22_15_28_160102->SetMinimum(-0.1888605);
   Graph_gr_T22_15_28_160102->SetMaximum(0.04698449);
   Graph_gr_T22_15_28_160102->SetDirectory(0);
   Graph_gr_T22_15_28_160102->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_160102->SetLineColor(ci);
   Graph_gr_T22_15_28_160102->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_160102->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_160102->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_160102->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_160102->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_160102->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_160102->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_160102->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_160102->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_160102->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_160102->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_160102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_160102);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
