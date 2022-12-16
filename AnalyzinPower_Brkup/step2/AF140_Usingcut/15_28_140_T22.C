{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:49:26 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(155,-0.2000358,275,0.09175429);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T22_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.09092433);
   gre->SetPointError(0,0,0.03040512);
   gre->SetPoint(1,185,-0.1242907);
   gre->SetPointError(1,0,0.02711341);
   gre->SetPoint(2,195,-0.09407066);
   gre->SetPointError(2,0,0.02451253);
   gre->SetPoint(3,205,-0.05630258);
   gre->SetPointError(3,0,0.0234879);
   gre->SetPoint(4,215,-0.07696223);
   gre->SetPointError(4,0,0.02359275);
   gre->SetPoint(5,225,-0.003757238);
   gre->SetPointError(5,0,0.02374174);
   gre->SetPoint(6,235,0.01793821);
   gre->SetPointError(6,0,0.02518439);
   gre->SetPoint(7,245,-0.002059411);
   gre->SetPointError(7,0,0.02861042);
   gre->SetPoint(8,255,-0.06192539);
   gre->SetPointError(8,0,0.02822115);
   
   TH1F *Graph_gr_T22_15_28_140185 = new TH1F("Graph_gr_T22_15_28_140185","",100,167,263);
   Graph_gr_T22_15_28_140185->SetMinimum(-0.1708568);
   Graph_gr_T22_15_28_140185->SetMaximum(0.06257528);
   Graph_gr_T22_15_28_140185->SetDirectory(0);
   Graph_gr_T22_15_28_140185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_140185->SetLineColor(ci);
   Graph_gr_T22_15_28_140185->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_140185->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_140185->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_140185->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_140185->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_140185->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_140185->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_140185->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_140185->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_140185->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_140185->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_140185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_140185);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
