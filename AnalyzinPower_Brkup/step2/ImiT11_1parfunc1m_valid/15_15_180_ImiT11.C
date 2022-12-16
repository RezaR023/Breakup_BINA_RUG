{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:31:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(162.5,-0.1914783,297.5,0.1923972);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.05441733);
   gre->SetPointError(0,0,0.07400064);
   gre->SetPoint(1,195,-0.06060055);
   gre->SetPointError(1,0,0.0668985);
   gre->SetPoint(2,205,-0.001270499);
   gre->SetPointError(2,0,0.06151292);
   gre->SetPoint(3,215,0.01330886);
   gre->SetPointError(3,0,0.05937959);
   gre->SetPoint(4,225,-0.05359223);
   gre->SetPointError(4,0,0.0495718);
   gre->SetPoint(5,235,0.0305807);
   gre->SetPointError(5,0,0.04167773);
   gre->SetPoint(6,245,-0.02650544);
   gre->SetPointError(6,0,0.03494592);
   gre->SetPoint(7,255,0.006919039);
   gre->SetPointError(7,0,0.03315709);
   gre->SetPoint(8,265,0.02558006);
   gre->SetPointError(8,0,0.02603575);
   gre->SetPoint(9,275,0.02250307);
   gre->SetPointError(9,0,0.02055338);
   
   TH1F *Graph_gr_ImiT11_15_15_1801 = new TH1F("Graph_gr_ImiT11_15_15_1801","",100,176,284);
   Graph_gr_ImiT11_15_15_1801->SetMinimum(-0.1530908);
   Graph_gr_ImiT11_15_15_1801->SetMaximum(0.1540097);
   Graph_gr_ImiT11_15_15_1801->SetDirectory(0);
   Graph_gr_ImiT11_15_15_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_1801->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
