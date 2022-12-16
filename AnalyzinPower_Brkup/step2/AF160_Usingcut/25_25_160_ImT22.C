{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:25:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1345492,257.5,0.0936208);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.01228893);
   gre->SetPointError(0,0,0.04330353);
   gre->SetPoint(1,155,0.003730824);
   gre->SetPointError(1,0,0.03177703);
   gre->SetPoint(2,165,-0.06498328);
   gre->SetPointError(2,0,0.03153762);
   gre->SetPoint(3,175,-0.0213308);
   gre->SetPointError(3,0,0.03415231);
   gre->SetPoint(4,185,-0.009018487);
   gre->SetPointError(4,0,0.02824607);
   gre->SetPoint(5,195,0.0169677);
   gre->SetPointError(5,0,0.02385909);
   gre->SetPoint(6,205,0.007579986);
   gre->SetPointError(6,0,0.01930661);
   gre->SetPoint(7,215,0.004288829);
   gre->SetPointError(7,0,0.0153249);
   gre->SetPoint(8,225,-0.01594147);
   gre->SetPointError(8,0,0.01228403);
   gre->SetPoint(9,235,-0.01471416);
   gre->SetPointError(9,0,0.0107252);
   
   TH1F *Graph_gr_ImT22_25_25_160138 = new TH1F("Graph_gr_ImT22_25_25_160138","",100,136,244);
   Graph_gr_ImT22_25_25_160138->SetMinimum(-0.1117322);
   Graph_gr_ImT22_25_25_160138->SetMaximum(0.0708038);
   Graph_gr_ImT22_25_25_160138->SetDirectory(0);
   Graph_gr_ImT22_25_25_160138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_25_160138->SetLineColor(ci);
   Graph_gr_ImT22_25_25_160138->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_160138->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_160138->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_160138->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_160138->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_160138->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_160138->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_160138->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_25_160138->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_25_160138->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_25_160138->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_25_160138->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_25_160138);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
