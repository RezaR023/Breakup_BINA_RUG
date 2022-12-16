{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:19:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.1361638,257.5,0.1593656);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.01571532);
   gre->SetPointError(0,0,0.04347442);
   gre->SetPoint(1,155,0.06641079);
   gre->SetPointError(1,0,0.04369995);
   gre->SetPoint(2,165,-0.04509133);
   gre->SetPointError(2,0,0.04181752);
   gre->SetPoint(3,175,0.03045015);
   gre->SetPointError(3,0,0.04055217);
   gre->SetPoint(4,185,-0.03530739);
   gre->SetPointError(4,0,0.0366228);
   gre->SetPoint(5,195,-0.03165186);
   gre->SetPointError(5,0,0.03042466);
   gre->SetPoint(6,205,-0.04466646);
   gre->SetPointError(6,0,0.02354112);
   gre->SetPoint(7,215,-0.03362776);
   gre->SetPointError(7,0,0.01642838);
   gre->SetPoint(8,225,-0.02682504);
   gre->SetPointError(8,0,0.01065041);
   gre->SetPoint(9,235,-0.008296145);
   gre->SetPointError(9,0,0.007569156);
   
   TH1F *Graph_gr_ImT22_28_20_18063 = new TH1F("Graph_gr_ImT22_28_20_18063","",100,136,244);
   Graph_gr_ImT22_28_20_18063->SetMinimum(-0.1066108);
   Graph_gr_ImT22_28_20_18063->SetMaximum(0.1298127);
   Graph_gr_ImT22_28_20_18063->SetDirectory(0);
   Graph_gr_ImT22_28_20_18063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_20_18063->SetLineColor(ci);
   Graph_gr_ImT22_28_20_18063->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_18063->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_18063->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_18063->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_18063->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_18063->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_18063->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_18063->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_20_18063->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_20_18063->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_20_18063->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_20_18063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_20_18063);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
