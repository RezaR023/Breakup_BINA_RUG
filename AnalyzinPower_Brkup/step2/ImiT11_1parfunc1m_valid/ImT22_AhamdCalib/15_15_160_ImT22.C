{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:21:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(162.5,-0.2575456,297.5,0.06906719);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,-0.05390589);
   gre->SetPointError(0,0,0.03142921);
   gre->SetPoint(1,195,-0.01508427);
   gre->SetPointError(1,0,0.02971599);
   gre->SetPoint(2,205,-0.06151911);
   gre->SetPointError(2,0,0.0283992);
   gre->SetPoint(3,215,-0.05770369);
   gre->SetPointError(3,0,0.02783377);
   gre->SetPoint(4,225,-0.1030111);
   gre->SetPointError(4,0,0.02571951);
   gre->SetPoint(5,235,-0.1279943);
   gre->SetPointError(5,0,0.02531663);
   gre->SetPoint(6,245,-0.1644705);
   gre->SetPointError(6,0,0.02532273);
   gre->SetPoint(7,255,-0.1630181);
   gre->SetPointError(7,0,0.02161266);
   gre->SetPoint(8,265,-0.1794416);
   gre->SetPointError(8,0,0.0207043);
   gre->SetPoint(9,275,-0.1845744);
   gre->SetPointError(9,0,0.01853572);
   
   TH1F *Graph_gr_ImT22_15_15_16066 = new TH1F("Graph_gr_ImT22_15_15_16066","",100,176,284);
   Graph_gr_ImT22_15_15_16066->SetMinimum(-0.2248843);
   Graph_gr_ImT22_15_15_16066->SetMaximum(0.03640591);
   Graph_gr_ImT22_15_15_16066->SetDirectory(0);
   Graph_gr_ImT22_15_15_16066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_15_16066->SetLineColor(ci);
   Graph_gr_ImT22_15_15_16066->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_16066->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_16066->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_16066->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_16066->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_16066->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_16066->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_16066->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_15_16066->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_15_16066->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_15_16066->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_15_16066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_15_16066);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
