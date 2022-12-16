{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:02:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.5417637,250,0.3312568);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T22_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,-0.274735);
   gre->SetPointError(0,0,0.1215253);
   gre->SetPoint(1,170,0.06615806);
   gre->SetPointError(1,0,0.1195953);
   gre->SetPoint(2,190,-0.04853882);
   gre->SetPointError(2,0,0.08902109);
   gre->SetPoint(3,210,-0.232845);
   gre->SetPointError(3,0,0.06349445);
   gre->SetPoint(4,230,-0.3205862);
   gre->SetPointError(4,0,0.03682897);
   
   TH1F *Graph_gr_T22_28_20_18023 = new TH1F("Graph_gr_T22_28_20_18023","",100,142,238);
   Graph_gr_T22_28_20_18023->SetMinimum(-0.4544617);
   Graph_gr_T22_28_20_18023->SetMaximum(0.2439547);
   Graph_gr_T22_28_20_18023->SetDirectory(0);
   Graph_gr_T22_28_20_18023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_20_18023->SetLineColor(ci);
   Graph_gr_T22_28_20_18023->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_18023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_18023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_18023->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_18023->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_18023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_18023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_18023->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_20_18023->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_20_18023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_20_18023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_20_18023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_20_18023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
