{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:04:14 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.3407121,310,0.09111045);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.02572981);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.02572981);
   gre->SetPoint(2,155,-0.006589786);
   gre->SetPointError(2,0,0.02572981);
   gre->SetPoint(3,165,-0.0615436);
   gre->SetPointError(3,0,0.05546129);
   gre->SetPoint(4,175,-0.02257321);
   gre->SetPointError(4,0,0.0398389);
   gre->SetPoint(5,185,-0.0275499);
   gre->SetPointError(5,0,0.0404822);
   gre->SetPoint(6,195,-0.105297);
   gre->SetPointError(6,0,0.03423767);
   gre->SetPoint(7,205,-0.02759432);
   gre->SetPointError(7,0,0.03242567);
   gre->SetPoint(8,215,-0.0774417);
   gre->SetPointError(8,0,0.02926817);
   gre->SetPoint(9,225,-0.09776403);
   gre->SetPointError(9,0,0.02467917);
   gre->SetPoint(10,235,-0.1162208);
   gre->SetPointError(10,0,0.02155594);
   gre->SetPoint(11,245,-0.1391784);
   gre->SetPointError(11,0,0.01803415);
   gre->SetPoint(12,255,-0.1809091);
   gre->SetPointError(12,0,0.013781);
   gre->SetPoint(13,265,-0.2285238);
   gre->SetPointError(13,0,0.01091376);
   gre->SetPoint(14,275,-0.2388392);
   gre->SetPointError(14,0,0.02990252);
   
   TH1F *Graph_gr_T22_20_20_18010 = new TH1F("Graph_gr_T22_20_20_18010","",100,121,289);
   Graph_gr_T22_20_20_18010->SetMinimum(-0.2975299);
   Graph_gr_T22_20_20_18010->SetMaximum(0.04792819);
   Graph_gr_T22_20_20_18010->SetDirectory(0);
   Graph_gr_T22_20_20_18010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_20_18010->SetLineColor(ci);
   Graph_gr_T22_20_20_18010->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_18010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_18010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_18010->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_18010->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_18010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_18010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_18010->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_20_18010->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_20_18010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_20_18010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_20_18010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_20_18010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
