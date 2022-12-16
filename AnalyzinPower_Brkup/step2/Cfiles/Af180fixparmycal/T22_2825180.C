{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:06:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.3621152,310,0.06986707);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.2383149);
   gre->SetPointError(0,0,0.05180329);
   gre->SetPoint(1,145,-0.1256193);
   gre->SetPointError(1,0,0.0402094);
   gre->SetPoint(2,155,-0.126628);
   gre->SetPointError(2,0,0.03676053);
   gre->SetPoint(3,165,-0.0655652);
   gre->SetPointError(3,0,0.03662539);
   gre->SetPoint(4,175,-0.1337059);
   gre->SetPointError(4,0,0.03220264);
   gre->SetPoint(5,185,-0.1103278);
   gre->SetPointError(5,0,0.02883932);
   gre->SetPoint(6,195,-0.1149797);
   gre->SetPointError(6,0,0.02067338);
   gre->SetPoint(7,205,-0.09683586);
   gre->SetPointError(7,0,0.0138452);
   gre->SetPoint(8,215,-0.1296848);
   gre->SetPointError(8,0,0.008638833);
   gre->SetPoint(9,225,-0.146391);
   gre->SetPointError(9,0,0.005366327);
   gre->SetPoint(10,235,-0.1596495);
   gre->SetPointError(10,0,0.005847999);
   gre->SetPoint(11,245,-0.1482105);
   gre->SetPointError(11,0,0.004459807);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.004459807);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.004459807);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.004459807);
   
   TH1F *Graph_gr_T22_28_25_18013 = new TH1F("Graph_gr_T22_28_25_18013","",100,121,289);
   Graph_gr_T22_28_25_18013->SetMinimum(-0.318917);
   Graph_gr_T22_28_25_18013->SetMaximum(0.02666884);
   Graph_gr_T22_28_25_18013->SetDirectory(0);
   Graph_gr_T22_28_25_18013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_25_18013->SetLineColor(ci);
   Graph_gr_T22_28_25_18013->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18013->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_18013->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18013->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_25_18013->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_25_18013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_25_18013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_25_18013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_25_18013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
