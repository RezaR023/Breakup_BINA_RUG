{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:43:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1014346,257.5,0.1966993);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.004456595);
   gre->SetPointError(0,0,0.05620226);
   gre->SetPoint(1,155,0.1013834);
   gre->SetPointError(1,0,0.04562691);
   gre->SetPoint(2,165,0.008722278);
   gre->SetPointError(2,0,0.04569721);
   gre->SetPoint(3,175,0.05165759);
   gre->SetPointError(3,0,0.03602752);
   gre->SetPoint(4,185,-0.02118028);
   gre->SetPointError(4,0,0.0278293);
   gre->SetPoint(5,195,-0.002607351);
   gre->SetPointError(5,0,0.01920428);
   gre->SetPoint(6,205,-0.00530448);
   gre->SetPointError(6,0,0.01218647);
   gre->SetPoint(7,215,-0.01059577);
   gre->SetPointError(7,0,0.007990419);
   gre->SetPoint(8,225,-0.01017145);
   gre->SetPointError(8,0,0.006247294);
   gre->SetPoint(9,235,0.001447326);
   gre->SetPointError(9,0,0.01050799);
   
   TH1F *Graph_gr_ImiT11_28_28_18079 = new TH1F("Graph_gr_ImiT11_28_28_18079","",100,136,244);
   Graph_gr_ImiT11_28_28_18079->SetMinimum(-0.07162126);
   Graph_gr_ImiT11_28_28_18079->SetMaximum(0.1668859);
   Graph_gr_ImiT11_28_28_18079->SetDirectory(0);
   Graph_gr_ImiT11_28_28_18079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_28_18079->SetLineColor(ci);
   Graph_gr_ImiT11_28_28_18079->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_18079->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_18079->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_18079->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_18079->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_18079->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_18079->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_18079->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_18079->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_18079->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_18079->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_18079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_28_18079);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
