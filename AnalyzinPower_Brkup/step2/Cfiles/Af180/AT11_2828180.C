{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:42:21 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(117.8637,-0.4339221,253.0663,0.1969615);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,140.3975,0.002069767);
   gre->SetPointError(0,0,0.0897445);
   gre->SetPoint(1,150.4125,-0.02952382);
   gre->SetPointError(1,0,0.07870671);
   gre->SetPoint(2,160.4275,-0.1189935);
   gre->SetPointError(2,0,0.07834372);
   gre->SetPoint(3,170.4425,-0.2597791);
   gre->SetPointError(3,0,0.06899574);
   gre->SetPoint(4,180.4575,-0.1954735);
   gre->SetPointError(4,0,0.05053162);
   gre->SetPoint(5,190.4725,-0.2906497);
   gre->SetPointError(5,0,0.03522953);
   gre->SetPoint(6,200.4875,-0.3006479);
   gre->SetPointError(6,0,0.02205591);
   gre->SetPoint(7,210.5025,-0.303864);
   gre->SetPointError(7,0,0.01550827);
   gre->SetPoint(8,220.5175,-0.284161);
   gre->SetPointError(8,0,0.01472574);
   gre->SetPoint(9,230.5325,-0.3021984);
   gre->SetPointError(9,0,0.01908568);
   
   TH1F *Graph_gr_iT11_28_28_1801 = new TH1F("Graph_gr_iT11_28_28_1801","",100,131.384,239.546);
   Graph_gr_iT11_28_28_1801->SetMinimum(-0.3708337);
   Graph_gr_iT11_28_28_1801->SetMaximum(0.1338732);
   Graph_gr_iT11_28_28_1801->SetDirectory(0);
   Graph_gr_iT11_28_28_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1801->SetLineColor(ci);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
