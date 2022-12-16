{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 22:15:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1889414,257.5,0.1252124);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.0241984);
   gre->SetPointError(0,0,0.04865503);
   gre->SetPoint(1,155,-0.09437676);
   gre->SetPointError(1,0,0.04220566);
   gre->SetPoint(2,165,-0.06714041);
   gre->SetPointError(2,0,0.03511935);
   gre->SetPoint(3,175,0.02500468);
   gre->SetPointError(3,0,0.02634196);
   gre->SetPoint(4,185,0.0077904);
   gre->SetPointError(4,0,0.01949115);
   gre->SetPoint(5,195,0.01316366);
   gre->SetPointError(5,0,0.01379831);
   gre->SetPoint(6,205,-0.002375749);
   gre->SetPointError(6,0,0.009814997);
   gre->SetPoint(7,215,0.001482858);
   gre->SetPointError(7,0,0.007144989);
   gre->SetPoint(8,225,0.01384155);
   gre->SetPointError(8,0,0.005969475);
   gre->SetPoint(9,235,-5.720605e-05);
   gre->SetPointError(9,0,0.006601953);
   
   TH1F *Graph_gr_ImT22_25_28_18062 = new TH1F("Graph_gr_ImT22_25_28_18062","",100,136,244);
   Graph_gr_ImT22_25_28_18062->SetMinimum(-0.157526);
   Graph_gr_ImT22_25_28_18062->SetMaximum(0.09379702);
   Graph_gr_ImT22_25_28_18062->SetDirectory(0);
   Graph_gr_ImT22_25_28_18062->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_28_18062->SetLineColor(ci);
   Graph_gr_ImT22_25_28_18062->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_18062->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_18062->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_18062->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_18062->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_18062->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_18062->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_18062->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_18062->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_18062->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_18062->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_18062->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_28_18062);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
