{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:04:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.07496839,287.5,0.1038296);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.003167984);
   gre->SetPointError(0,0,0.03923485);
   gre->SetPoint(1,185,0.0334051);
   gre->SetPointError(1,0,0.02843051);
   gre->SetPoint(2,195,0.04836624);
   gre->SetPointError(2,0,0.02358718);
   gre->SetPoint(3,205,-0.01765477);
   gre->SetPointError(3,0,0.02148795);
   gre->SetPoint(4,215,0.0123492);
   gre->SetPointError(4,0,0.02072022);
   gre->SetPoint(5,225,-0.01873853);
   gre->SetPointError(5,0,0.0213549);
   gre->SetPoint(6,235,0.02274607);
   gre->SetPointError(6,0,0.02348558);
   gre->SetPoint(7,245,-0.02096543);
   gre->SetPointError(7,0,0.02420329);
   gre->SetPoint(8,255,0.03557535);
   gre->SetPointError(8,0,0.0275866);
   gre->SetPoint(9,265,0.04297762);
   gre->SetPointError(9,0,0.03105234);
   
   TH1F *Graph_gr_ImiT11_15_25_16095 = new TH1F("Graph_gr_ImiT11_15_25_16095","",100,166,274);
   Graph_gr_ImiT11_15_25_16095->SetMinimum(-0.05708859);
   Graph_gr_ImiT11_15_25_16095->SetMaximum(0.08594983);
   Graph_gr_ImiT11_15_25_16095->SetDirectory(0);
   Graph_gr_ImiT11_15_25_16095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_25_16095->SetLineColor(ci);
   Graph_gr_ImiT11_15_25_16095->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_16095->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_16095->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_16095->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_16095->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_16095->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_16095->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_16095->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_25_16095->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_25_16095->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_25_16095->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_25_16095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_25_16095);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
