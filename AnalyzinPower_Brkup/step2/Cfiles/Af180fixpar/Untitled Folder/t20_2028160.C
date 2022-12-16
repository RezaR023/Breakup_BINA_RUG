{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:56:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(138.5407,-0.5935029,276.3893,0.1601909);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,161.5155,-0.05998225);
   gre->SetPointError(0,0,0.07681201);
   gre->SetPoint(1,171.7265,-0.03717332);
   gre->SetPointError(1,0,0.0717486);
   gre->SetPoint(2,181.9375,-0.2092845);
   gre->SetPointError(2,0,0.05687027);
   gre->SetPoint(3,192.1485,-0.07365583);
   gre->SetPointError(3,0,0.05217382);
   gre->SetPoint(4,202.3595,-0.2424112);
   gre->SetPointError(4,0,0.04401339);
   gre->SetPoint(5,212.5705,-0.2385044);
   gre->SetPointError(5,0,0.04303111);
   gre->SetPoint(6,222.7815,-0.33964);
   gre->SetPointError(6,0,0.04188152);
   gre->SetPoint(7,232.9925,-0.4236199);
   gre->SetPointError(7,0,0.04426741);
   gre->SetPoint(8,243.2035,-0.3783698);
   gre->SetPointError(8,0,0.05387234);
   gre->SetPoint(9,253.4145,-0.3425485);
   gre->SetPointError(9,0,0.06091401);
   
   TH1F *Graph_gr_T20_20_28_16014 = new TH1F("Graph_gr_T20_20_28_16014","",100,152.3256,262.6044);
   Graph_gr_T20_20_28_16014->SetMinimum(-0.5181335);
   Graph_gr_T20_20_28_16014->SetMaximum(0.08482154);
   Graph_gr_T20_20_28_16014->SetDirectory(0);
   Graph_gr_T20_20_28_16014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_28_16014->SetLineColor(ci);
   Graph_gr_T20_20_28_16014->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_16014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_16014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_16014->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_16014->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_16014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_16014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_16014->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_16014->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_16014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_16014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_16014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_28_16014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
