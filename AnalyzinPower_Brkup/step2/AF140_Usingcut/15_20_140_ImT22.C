{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:45:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.2929873,287.5,0.1696905);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1490328);
   gre->SetPointError(0,0,0.06684147);
   gre->SetPoint(1,185,-0.03034307);
   gre->SetPointError(1,0,0.03958553);
   gre->SetPoint(2,195,-0.00672496);
   gre->SetPointError(2,0,0.03702951);
   gre->SetPoint(3,205,-0.06404365);
   gre->SetPointError(3,0,0.03494668);
   gre->SetPoint(4,215,-0.04724752);
   gre->SetPointError(4,0,0.03451479);
   gre->SetPoint(5,225,0.03587614);
   gre->SetPointError(5,0,0.03308657);
   gre->SetPoint(6,235,-0.002013211);
   gre->SetPointError(6,0,0.03260903);
   gre->SetPoint(7,245,0.05710918);
   gre->SetPointError(7,0,0.03546836);
   gre->SetPoint(8,255,-0.02668993);
   gre->SetPointError(8,0,0.03190391);
   gre->SetPoint(9,265,-0.05742177);
   gre->SetPointError(9,0,0.03241222);
   
   TH1F *Graph_gr_ImT22_15_20_140175 = new TH1F("Graph_gr_ImT22_15_20_140175","",100,166,274);
   Graph_gr_ImT22_15_20_140175->SetMinimum(-0.2467195);
   Graph_gr_ImT22_15_20_140175->SetMaximum(0.1234227);
   Graph_gr_ImT22_15_20_140175->SetDirectory(0);
   Graph_gr_ImT22_15_20_140175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_20_140175->SetLineColor(ci);
   Graph_gr_ImT22_15_20_140175->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_140175->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_140175->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_140175->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_140175->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_140175->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_140175->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_140175->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_20_140175->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_20_140175->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_20_140175->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_20_140175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_20_140175);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
