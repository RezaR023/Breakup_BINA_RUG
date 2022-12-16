{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:17:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.0943619,257.5,0.154354);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.001624829);
   gre->SetPointError(0,0,0.05192637);
   gre->SetPoint(1,155,0.05283636);
   gre->SetPointError(1,0,0.06006498);
   gre->SetPoint(2,165,0.008467206);
   gre->SetPointError(2,0,0.04915088);
   gre->SetPoint(3,175,0.03470467);
   gre->SetPointError(3,0,0.04732493);
   gre->SetPoint(4,185,-0.007374472);
   gre->SetPointError(4,0,0.04194901);
   gre->SetPoint(5,195,0.02003482);
   gre->SetPointError(5,0,0.03361347);
   gre->SetPoint(6,205,-0.02416596);
   gre->SetPointError(6,0,0.02874329);
   gre->SetPoint(7,215,-0.003055811);
   gre->SetPointError(7,0,0.02382597);
   gre->SetPoint(8,225,-0.02222684);
   gre->SetPointError(8,0,0.01752668);
   gre->SetPoint(9,235,-0.03150318);
   gre->SetPointError(9,0,0.01310563);
   
   TH1F *Graph_gr_ImT22_28_15_18062 = new TH1F("Graph_gr_ImT22_28_15_18062","",100,136,244);
   Graph_gr_ImT22_28_15_18062->SetMinimum(-0.06949031);
   Graph_gr_ImT22_28_15_18062->SetMaximum(0.1294824);
   Graph_gr_ImT22_28_15_18062->SetDirectory(0);
   Graph_gr_ImT22_28_15_18062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_15_18062->SetLineColor(ci);
   Graph_gr_ImT22_28_15_18062->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_18062->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_18062->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_18062->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_18062->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_18062->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_18062->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_18062->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_18062->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_18062->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_18062->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_18062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_15_18062);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
