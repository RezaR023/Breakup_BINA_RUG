{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:18:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.2134626,277.5,0.06868729);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.1272701);
   gre->SetPointError(0,0,0.02785659);
   gre->SetPoint(1,175,-0.1400837);
   gre->SetPointError(1,0,0.02635395);
   gre->SetPoint(2,185,-0.1236381);
   gre->SetPointError(2,0,0.02150624);
   gre->SetPoint(3,195,-0.1339787);
   gre->SetPointError(3,0,0.01716258);
   gre->SetPoint(4,205,-0.07794431);
   gre->SetPointError(4,0,0.01441659);
   gre->SetPoint(5,215,-0.06656218);
   gre->SetPointError(5,0,0.01363908);
   gre->SetPoint(6,225,-0.03163902);
   gre->SetPointError(6,0,0.01323625);
   gre->SetPoint(7,235,-0.03316383);
   gre->SetPointError(7,0,0.01271028);
   gre->SetPoint(8,245,-0.03573478);
   gre->SetPointError(8,0,0.01428026);
   gre->SetPoint(9,255,0.006032349);
   gre->SetPointError(9,0,0.01562996);
   
   TH1F *Graph_gr_T22_20_28_160122 = new TH1F("Graph_gr_T22_20_28_160122","",100,156,264);
   Graph_gr_T22_20_28_160122->SetMinimum(-0.1852476);
   Graph_gr_T22_20_28_160122->SetMaximum(0.0404723);
   Graph_gr_T22_20_28_160122->SetDirectory(0);
   Graph_gr_T22_20_28_160122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_28_160122->SetLineColor(ci);
   Graph_gr_T22_20_28_160122->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_160122->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_160122->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_160122->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_160122->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_160122->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_160122->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_160122->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_28_160122->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_28_160122->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_28_160122->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_28_160122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_28_160122);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
