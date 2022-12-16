{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:48:29 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(155,-0.2848097,275,-0.03708522);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1128504);
   gre->SetPointError(0,0,0.03447782);
   gre->SetPoint(1,185,-0.2145168);
   gre->SetPointError(1,0,0.02900549);
   gre->SetPoint(2,195,-0.1376064);
   gre->SetPointError(2,0,0.02714043);
   gre->SetPoint(3,205,-0.1697501);
   gre->SetPointError(3,0,0.02665742);
   gre->SetPoint(4,215,-0.1202085);
   gre->SetPointError(4,0,0.0263544);
   gre->SetPoint(5,225,-0.1535731);
   gre->SetPointError(5,0,0.02711972);
   gre->SetPoint(6,235,-0.1812891);
   gre->SetPointError(6,0,0.03080566);
   gre->SetPoint(7,245,-0.1566112);
   gre->SetPointError(7,0,0.034204);
   gre->SetPoint(8,255,-0.1243572);
   gre->SetPointError(8,0,0.03340737);
   
   TH1F *Graph_gr_iT11_15_28_140182 = new TH1F("Graph_gr_iT11_15_28_140182","",100,167,263);
   Graph_gr_iT11_15_28_140182->SetMinimum(-0.2600372);
   Graph_gr_iT11_15_28_140182->SetMaximum(-0.06185766);
   Graph_gr_iT11_15_28_140182->SetDirectory(0);
   Graph_gr_iT11_15_28_140182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_15_28_140182->SetLineColor(ci);
   Graph_gr_iT11_15_28_140182->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_140182->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_140182->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_140182->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_140182->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_140182->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_140182->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_140182->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_15_28_140182->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_15_28_140182->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_15_28_140182->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_15_28_140182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_15_28_140182);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
