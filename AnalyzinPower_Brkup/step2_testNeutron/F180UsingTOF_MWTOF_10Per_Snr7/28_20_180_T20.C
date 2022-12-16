{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:00:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.5905825,250,0.4443818);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.2088053);
   gre->SetPointError(0,0,0.2092831);
   gre->SetPoint(1,170,-0.04760165);
   gre->SetPointError(1,0,0.2005923);
   gre->SetPoint(2,190,-0.2304513);
   gre->SetPointError(2,0,0.1331218);
   gre->SetPoint(3,210,0.1687863);
   gre->SetPointError(3,0,0.09634185);
   gre->SetPoint(4,230,0.2171852);
   gre->SetPointError(4,0,0.05470247);
   
   TH1F *Graph_gr_T20_28_20_18018 = new TH1F("Graph_gr_T20_28_20_18018","",100,142,238);
   Graph_gr_T20_28_20_18018->SetMinimum(-0.4870861);
   Graph_gr_T20_28_20_18018->SetMaximum(0.3408853);
   Graph_gr_T20_28_20_18018->SetDirectory(0);
   Graph_gr_T20_28_20_18018->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_20_18018->SetLineColor(ci);
   Graph_gr_T20_28_20_18018->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_18018->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_18018->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_18018->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_20_18018->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_18018->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_18018->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_18018->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_20_18018->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_18018->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_18018->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_18018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_20_18018);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
