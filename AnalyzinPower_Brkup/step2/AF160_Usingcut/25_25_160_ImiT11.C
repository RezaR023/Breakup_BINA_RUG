{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:24:22 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1041786,257.5,0.09667905);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0191226);
   gre->SetPointError(0,0,0.05157975);
   gre->SetPoint(1,155,-0.008081469);
   gre->SetPointError(1,0,0.03659008);
   gre->SetPoint(2,165,0.01423528);
   gre->SetPointError(2,0,0.04171847);
   gre->SetPoint(3,175,0.02068873);
   gre->SetPointError(3,0,0.04251404);
   gre->SetPoint(4,185,-0.02036693);
   gre->SetPointError(4,0,0.03748016);
   gre->SetPoint(5,195,-0.001281778);
   gre->SetPointError(5,0,0.03240162);
   gre->SetPoint(6,205,-0.001870465);
   gre->SetPointError(6,0,0.0280415);
   gre->SetPoint(7,215,0.04009055);
   gre->SetPointError(7,0,0.02235127);
   gre->SetPoint(8,225,0.0158678);
   gre->SetPointError(8,0,0.018159);
   gre->SetPoint(9,235,0.01536187);
   gre->SetPointError(9,0,0.01605314);
   
   TH1F *Graph_gr_ImiT11_25_25_160135 = new TH1F("Graph_gr_ImiT11_25_25_160135","",100,136,244);
   Graph_gr_ImiT11_25_25_160135->SetMinimum(-0.08409286);
   Graph_gr_ImiT11_25_25_160135->SetMaximum(0.07659328);
   Graph_gr_ImiT11_25_25_160135->SetDirectory(0);
   Graph_gr_ImiT11_25_25_160135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_25_160135->SetLineColor(ci);
   Graph_gr_ImiT11_25_25_160135->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_160135->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_160135->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_160135->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_160135->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_160135->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_160135->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_160135->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_25_160135->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_25_160135->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_25_160135->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_25_160135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_25_160135);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
