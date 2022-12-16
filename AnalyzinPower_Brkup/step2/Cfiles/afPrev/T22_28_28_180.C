{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 12:01:32 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-1.45062,310,0.2580223);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.3468017);
   gre->SetPointError(0,0,0.3200502);
   gre->SetPoint(1,145,-0.752364);
   gre->SetPointError(1,0,0.2410746);
   gre->SetPoint(2,155,-0.9514437);
   gre->SetPointError(2,0,0.2144029);
   gre->SetPoint(3,165,-0.7746438);
   gre->SetPointError(3,0,0.2045745);
   gre->SetPoint(4,175,-0.7111759);
   gre->SetPointError(4,0,0.1825171);
   gre->SetPoint(5,185,-0.6230685);
   gre->SetPointError(5,0,0.1422426);
   gre->SetPoint(6,195,-0.7011867);
   gre->SetPointError(6,0,0.09602686);
   gre->SetPoint(7,205,-0.6762473);
   gre->SetPointError(7,0,0.06183331);
   gre->SetPoint(8,215,-0.6964085);
   gre->SetPointError(8,0,0.04100509);
   gre->SetPoint(9,225,-0.7843389);
   gre->SetPointError(9,0,0.03240003);
   gre->SetPoint(10,235,-0.8283433);
   gre->SetPointError(10,0,0.05394938);
   gre->SetPoint(11,245,-0.8447063);
   gre->SetPointError(11,0,0.0404999);
   gre->SetPoint(12,255,-0.8447063);
   gre->SetPointError(12,0,0.0404999);
   gre->SetPoint(13,265,-0.8447063);
   gre->SetPointError(13,0,0.0404999);
   gre->SetPoint(14,275,-0.8447063);
   gre->SetPointError(14,0,0.0404999);
   
   TH1F *Graph_gr_T22_28_28_1809 = new TH1F("Graph_gr_T22_28_28_1809","",100,121,289);
   Graph_gr_T22_28_28_1809->SetMinimum(-1.279756);
   Graph_gr_T22_28_28_1809->SetMaximum(0.08715801);
   Graph_gr_T22_28_28_1809->SetDirectory(0);
   Graph_gr_T22_28_28_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1809->SetLineColor(ci);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
