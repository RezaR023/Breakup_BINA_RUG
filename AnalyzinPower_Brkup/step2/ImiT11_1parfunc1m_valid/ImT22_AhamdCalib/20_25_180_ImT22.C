{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:38:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(142.5,-0.06732274,277.5,0.06755504);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.002764418);
   gre->SetPointError(0,0,0.03219265);
   gre->SetPoint(1,175,-0.01494552);
   gre->SetPointError(1,0,0.02989759);
   gre->SetPoint(2,185,0.01913105);
   gre->SetPointError(2,0,0.02302361);
   gre->SetPoint(3,195,0.02524984);
   gre->SetPointError(3,0,0.01982557);
   gre->SetPoint(4,205,0.0224327);
   gre->SetPointError(4,0,0.01527514);
   gre->SetPoint(5,215,-0.02286513);
   gre->SetPointError(5,0,0.01314498);
   gre->SetPoint(6,225,0.02224323);
   gre->SetPointError(6,0,0.01160916);
   gre->SetPoint(7,235,-0.006931686);
   gre->SetPointError(7,0,0.01126595);
   gre->SetPoint(8,245,0.01508603);
   gre->SetPointError(8,0,0.0120972);
   gre->SetPoint(9,255,0.02793231);
   gre->SetPointError(9,0,0.01590357);
   
   TH1F *Graph_gr_ImT22_20_25_18056 = new TH1F("Graph_gr_ImT22_20_25_18056","",100,156,264);
   Graph_gr_ImT22_20_25_18056->SetMinimum(-0.05383496);
   Graph_gr_ImT22_20_25_18056->SetMaximum(0.05406726);
   Graph_gr_ImT22_20_25_18056->SetDirectory(0);
   Graph_gr_ImT22_20_25_18056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_25_18056->SetLineColor(ci);
   Graph_gr_ImT22_20_25_18056->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_18056->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_18056->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_18056->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_18056->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_18056->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_18056->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_18056->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_18056->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_18056->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_18056->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_18056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_25_18056);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
