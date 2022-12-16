{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:16:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3338309,257.5,0.1037138);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.03614535);
   gre->SetPointError(0,0,0.06693502);
   gre->SetPoint(1,155,-0.08330598);
   gre->SetPointError(1,0,0.06354949);
   gre->SetPoint(2,165,-0.1205298);
   gre->SetPointError(2,0,0.05926702);
   gre->SetPoint(3,175,-0.10078);
   gre->SetPointError(3,0,0.05434241);
   gre->SetPoint(4,185,-0.1763229);
   gre->SetPointError(4,0,0.05094604);
   gre->SetPoint(5,195,-0.1560064);
   gre->SetPointError(5,0,0.04119331);
   gre->SetPoint(6,205,-0.1392796);
   gre->SetPointError(6,0,0.03168321);
   gre->SetPoint(7,215,-0.2013105);
   gre->SetPointError(7,0,0.02713697);
   gre->SetPoint(8,225,-0.1993793);
   gre->SetPointError(8,0,0.02042807);
   gre->SetPoint(9,235,-0.2478284);
   gre->SetPointError(9,0,0.01307841);
   
   TH1F *Graph_gr_T22_28_15_18066 = new TH1F("Graph_gr_T22_28_15_18066","",100,136,244);
   Graph_gr_T22_28_15_18066->SetMinimum(-0.2900765);
   Graph_gr_T22_28_15_18066->SetMaximum(0.05995931);
   Graph_gr_T22_28_15_18066->SetDirectory(0);
   Graph_gr_T22_28_15_18066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_15_18066->SetLineColor(ci);
   Graph_gr_T22_28_15_18066->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18066->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18066->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18066->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18066->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18066->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18066->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18066->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_15_18066->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_15_18066->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_15_18066->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_15_18066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_15_18066);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
