{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:27:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(115,-0.1641053,235,0.05269372);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02868333);
   gre->SetPointError(0,0,0.04460398);
   gre->SetPoint(1,145,-0.05148266);
   gre->SetPointError(1,0,0.03432669);
   gre->SetPoint(2,155,-0.09353743);
   gre->SetPointError(2,0,0.03443471);
   gre->SetPoint(3,165,-0.01736305);
   gre->SetPointError(3,0,0.0339236);
   gre->SetPoint(4,175,-0.0427623);
   gre->SetPointError(4,0,0.03379971);
   gre->SetPoint(5,185,-0.02769314);
   gre->SetPointError(5,0,0.03406687);
   gre->SetPoint(6,195,-0.04970992);
   gre->SetPointError(6,0,0.03138316);
   gre->SetPoint(7,205,-0.03846505);
   gre->SetPointError(7,0,0.02620602);
   gre->SetPoint(8,215,-0.04867629);
   gre->SetPointError(8,0,0.02439051);
   
   TH1F *Graph_gr_ImT22_28_28_14060 = new TH1F("Graph_gr_ImT22_28_28_14060","",100,127,223);
   Graph_gr_ImT22_28_28_14060->SetMinimum(-0.1424254);
   Graph_gr_ImT22_28_28_14060->SetMaximum(0.03101382);
   Graph_gr_ImT22_28_28_14060->SetDirectory(0);
   Graph_gr_ImT22_28_28_14060->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_28_14060->SetLineColor(ci);
   Graph_gr_ImT22_28_28_14060->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_14060->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_14060->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_14060->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_14060->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_14060->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_14060->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_14060->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_14060->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_14060->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_14060->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_14060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_28_14060);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
