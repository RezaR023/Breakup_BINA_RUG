{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:09:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(115.1607,-0.5115678,247.0693,0.140179);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,137.1455,-0.02728628);
   gre->SetPointError(0,0,0.05884079);
   gre->SetPoint(1,146.9165,-0.05854159);
   gre->SetPointError(1,0,0.05915107);
   gre->SetPoint(2,156.6875,-0.1995843);
   gre->SetPointError(2,0,0.05849517);
   gre->SetPoint(3,166.4585,-0.2528824);
   gre->SetPointError(3,0,0.05907009);
   gre->SetPoint(4,176.2295,-0.3422055);
   gre->SetPointError(4,0,0.05395699);
   gre->SetPoint(5,186.0005,-0.2898317);
   gre->SetPointError(5,0,0.04630089);
   gre->SetPoint(6,195.7715,-0.3659933);
   gre->SetPointError(6,0,0.03695009);
   gre->SetPoint(7,205.5425,-0.290966);
   gre->SetPointError(7,0,0.03581016);
   gre->SetPoint(8,215.3135,-0.2413768);
   gre->SetPointError(8,0,0.03439446);
   gre->SetPoint(9,225.0845,-0.2285553);
   gre->SetPointError(9,0,0.03376248);
   
   TH1F *Graph_gr_iT11_28_28_1604 = new TH1F("Graph_gr_iT11_28_28_1604","",100,128.3516,233.8784);
   Graph_gr_iT11_28_28_1604->SetMinimum(-0.4463931);
   Graph_gr_iT11_28_28_1604->SetMaximum(0.0750043);
   Graph_gr_iT11_28_28_1604->SetDirectory(0);
   Graph_gr_iT11_28_28_1604->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1604->SetLineColor(ci);
   Graph_gr_iT11_28_28_1604->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1604->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1604->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1604->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1604->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1604->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1604->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1604->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1604->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1604->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1604->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1604->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1604);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
