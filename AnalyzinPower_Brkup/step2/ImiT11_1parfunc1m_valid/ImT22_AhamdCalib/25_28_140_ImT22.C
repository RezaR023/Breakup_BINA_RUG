{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:59:03 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(125,-0.1435974,245,0.06992974);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.05268484);
   gre->SetPointError(0,0,0.0271774);
   gre->SetPoint(1,155,-0.0832377);
   gre->SetPointError(1,0,0.02477183);
   gre->SetPoint(2,165,-0.008527129);
   gre->SetPointError(2,0,0.02735044);
   gre->SetPoint(3,175,0.006606206);
   gre->SetPointError(3,0,0.02773567);
   gre->SetPoint(4,185,-0.002729276);
   gre->SetPointError(4,0,0.02846299);
   gre->SetPoint(5,195,-0.020076);
   gre->SetPointError(5,0,0.02748285);
   gre->SetPoint(6,205,-0.02648259);
   gre->SetPointError(6,0,0.02780374);
   gre->SetPoint(7,215,-0.05764824);
   gre->SetPointError(7,0,0.0251089);
   gre->SetPoint(8,225,-0.01265521);
   gre->SetPointError(8,0,0.02462136);
   
   TH1F *Graph_gr_ImT22_25_28_14093 = new TH1F("Graph_gr_ImT22_25_28_14093","",100,137,233);
   Graph_gr_ImT22_25_28_14093->SetMinimum(-0.1222447);
   Graph_gr_ImT22_25_28_14093->SetMaximum(0.04857702);
   Graph_gr_ImT22_25_28_14093->SetDirectory(0);
   Graph_gr_ImT22_25_28_14093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_28_14093->SetLineColor(ci);
   Graph_gr_ImT22_25_28_14093->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_14093->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_14093->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_14093->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_14093->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_14093->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_14093->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_14093->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_14093->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_14093->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_14093->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_14093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_28_14093);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
