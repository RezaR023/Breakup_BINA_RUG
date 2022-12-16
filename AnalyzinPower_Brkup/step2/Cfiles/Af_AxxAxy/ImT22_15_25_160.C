{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:35:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.2941624,310,0.1034673);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.0968341);
   gre->SetPointError(0,0,0.01797284);
   gre->SetPoint(1,145,-0.0968341);
   gre->SetPointError(1,0,0.01797284);
   gre->SetPoint(2,155,-0.0968341);
   gre->SetPointError(2,0,0.01797284);
   gre->SetPoint(3,165,-0.1428398);
   gre->SetPointError(3,0,0.08505093);
   gre->SetPoint(4,175,-0.07999917);
   gre->SetPointError(4,0,0.02604586);
   gre->SetPoint(5,185,-0.03642791);
   gre->SetPointError(5,0,0.02068419);
   gre->SetPoint(6,195,-0.01970155);
   gre->SetPointError(6,0,0.01731);
   gre->SetPoint(7,205,0.009121577);
   gre->SetPointError(7,0,0.01528206);
   gre->SetPoint(8,215,-0.01647394);
   gre->SetPointError(8,0,0.01433754);
   gre->SetPoint(9,225,0.01782706);
   gre->SetPointError(9,0,0.01489559);
   gre->SetPoint(10,235,-0.007918724);
   gre->SetPointError(10,0,0.01589464);
   gre->SetPoint(11,245,0.006378135);
   gre->SetPointError(11,0,0.0174169);
   gre->SetPoint(12,255,0.007956681);
   gre->SetPointError(12,0,0.0190476);
   gre->SetPoint(13,265,0.01716478);
   gre->SetPointError(13,0,0.02003094);
   gre->SetPoint(14,275,-0.01954622);
   gre->SetPointError(14,0,0.02580738);
   
   TH1F *Graph_gr_ImT22_15_25_16014 = new TH1F("Graph_gr_ImT22_15_25_16014","",100,121,289);
   Graph_gr_ImT22_15_25_16014->SetMinimum(-0.2543994);
   Graph_gr_ImT22_15_25_16014->SetMaximum(0.06370437);
   Graph_gr_ImT22_15_25_16014->SetDirectory(0);
   Graph_gr_ImT22_15_25_16014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_16014->SetLineColor(ci);
   Graph_gr_ImT22_15_25_16014->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16014->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_16014->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16014->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_16014->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_16014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_16014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_16014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_16014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
