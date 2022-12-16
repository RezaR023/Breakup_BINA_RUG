{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:48:17 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(152.5,-0.1720683,287.5,0.1205663);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_15_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.07407313);
   gre->SetPointError(0,0,0.04922272);
   gre->SetPoint(1,185,-0.07818153);
   gre->SetPointError(1,0,0.03478593);
   gre->SetPoint(2,195,-0.03213114);
   gre->SetPointError(2,0,0.0308595);
   gre->SetPoint(3,205,-0.03875289);
   gre->SetPointError(3,0,0.02888498);
   gre->SetPoint(4,215,-0.007647829);
   gre->SetPointError(4,0,0.02604121);
   gre->SetPoint(5,225,0.008026164);
   gre->SetPointError(5,0,0.02600177);
   gre->SetPoint(6,235,0.03816135);
   gre->SetPointError(6,0,0.02739609);
   gre->SetPoint(7,245,0.04295653);
   gre->SetPointError(7,0,0.02883733);
   gre->SetPoint(8,255,0.0231755);
   gre->SetPointError(8,0,0.03054344);
   gre->SetPoint(9,265,0.002422954);
   gre->SetPointError(9,0,0.03345059);
   
   TH1F *Graph_gr_ImT22_15_25_140181 = new TH1F("Graph_gr_ImT22_15_25_140181","",100,166,274);
   Graph_gr_ImT22_15_25_140181->SetMinimum(-0.1428048);
   Graph_gr_ImT22_15_25_140181->SetMaximum(0.09130283);
   Graph_gr_ImT22_15_25_140181->SetDirectory(0);
   Graph_gr_ImT22_15_25_140181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_25_140181->SetLineColor(ci);
   Graph_gr_ImT22_15_25_140181->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_140181->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_140181->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_140181->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_140181->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_140181->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_140181->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_140181->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_25_140181->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_25_140181->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_25_140181->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_25_140181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_25_140181);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
