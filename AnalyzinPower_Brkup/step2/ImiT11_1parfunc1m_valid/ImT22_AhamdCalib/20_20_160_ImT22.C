{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:24:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(152.5,-0.1995923,287.5,0.1002747);
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
   gre->SetPoint(0,175,-0.03800538);
   gre->SetPointError(0,0,0.02746144);
   gre->SetPoint(1,185,-0.02928063);
   gre->SetPointError(1,0,0.03060915);
   gre->SetPoint(2,195,0.02290585);
   gre->SetPointError(2,0,0.027391);
   gre->SetPoint(3,205,0.02213702);
   gre->SetPointError(3,0,0.02582414);
   gre->SetPoint(4,215,-0.05261898);
   gre->SetPointError(4,0,0.02327684);
   gre->SetPoint(5,225,-0.07489607);
   gre->SetPointError(5,0,0.0216092);
   gre->SetPoint(6,235,-0.07914895);
   gre->SetPointError(6,0,0.02052748);
   gre->SetPoint(7,245,-0.092404);
   gre->SetPointError(7,0,0.01802779);
   gre->SetPoint(8,255,-0.1331864);
   gre->SetPointError(8,0,0.01642811);
   gre->SetPoint(9,265,-0.1162022);
   gre->SetPointError(9,0,0.01623919);
   
   TH1F *Graph_gr_ImT22_20_20_16071 = new TH1F("Graph_gr_ImT22_20_20_16071","",100,166,274);
   Graph_gr_ImT22_20_20_16071->SetMinimum(-0.1696056);
   Graph_gr_ImT22_20_20_16071->SetMaximum(0.07028798);
   Graph_gr_ImT22_20_20_16071->SetDirectory(0);
   Graph_gr_ImT22_20_20_16071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_20_16071->SetLineColor(ci);
   Graph_gr_ImT22_20_20_16071->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_16071->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_16071->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_16071->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_16071->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_16071->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_16071->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_16071->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_16071->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_16071->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_16071->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_16071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_20_16071);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
