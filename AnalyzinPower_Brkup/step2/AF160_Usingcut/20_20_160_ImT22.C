{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:14:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1912193,287.5,0.1342069);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.05645081);
   gre->SetPointError(0,0,0.03335015);
   gre->SetPoint(1,185,-0.01290827);
   gre->SetPointError(1,0,0.03714934);
   gre->SetPoint(2,195,0.03896902);
   gre->SetPointError(2,0,0.04100014);
   gre->SetPoint(3,205,0.02947528);
   gre->SetPointError(3,0,0.02991933);
   gre->SetPoint(4,215,-0.01919363);
   gre->SetPointError(4,0,0.02882616);
   gre->SetPoint(5,225,-0.06363937);
   gre->SetPointError(5,0,0.02489312);
   gre->SetPoint(6,235,-0.06188207);
   gre->SetPointError(6,0,0.02308534);
   gre->SetPoint(7,245,-0.09347343);
   gre->SetPointError(7,0,0.02036366);
   gre->SetPoint(8,255,-0.1111802);
   gre->SetPointError(8,0,0.01699338);
   gre->SetPoint(9,265,-0.1231394);
   gre->SetPointError(9,0,0.01384223);
   
   TH1F *Graph_gr_ImT22_20_20_160113 = new TH1F("Graph_gr_ImT22_20_20_160113","",100,166,274);
   Graph_gr_ImT22_20_20_160113->SetMinimum(-0.1586767);
   Graph_gr_ImT22_20_20_160113->SetMaximum(0.1016642);
   Graph_gr_ImT22_20_20_160113->SetDirectory(0);
   Graph_gr_ImT22_20_20_160113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_20_160113->SetLineColor(ci);
   Graph_gr_ImT22_20_20_160113->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_160113->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_160113->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_160113->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_160113->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_160113->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_160113->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_160113->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_160113->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_160113->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_160113->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_160113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_20_160113);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
