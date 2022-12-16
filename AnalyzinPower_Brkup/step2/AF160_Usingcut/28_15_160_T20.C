{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:29:55 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.5153196,257.5,0.7075105);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.2101438);
   gre->SetPointError(0,0,0.1013708);
   gre->SetPoint(1,155,0.1922892);
   gre->SetPointError(1,0,0.08849187);
   gre->SetPoint(2,165,0.3000678);
   gre->SetPointError(2,0,0.08784342);
   gre->SetPoint(3,175,0.1198677);
   gre->SetPointError(3,0,0.07605285);
   gre->SetPoint(4,185,0.2603694);
   gre->SetPointError(4,0,0.07035122);
   gre->SetPoint(5,195,0.3330066);
   gre->SetPointError(5,0,0.0619306);
   gre->SetPoint(6,205,0.3688969);
   gre->SetPointError(6,0,0.05212661);
   gre->SetPoint(7,215,0.4384525);
   gre->SetPointError(7,0,0.04458209);
   gre->SetPoint(8,225,0.4426775);
   gre->SetPointError(8,0,0.03459191);
   gre->SetPoint(9,235,0.4781757);
   gre->SetPointError(9,0,0.02552981);
   
   TH1F *Graph_gr_T20_28_15_160146 = new TH1F("Graph_gr_T20_28_15_160146","",100,136,244);
   Graph_gr_T20_28_15_160146->SetMinimum(-0.3930366);
   Graph_gr_T20_28_15_160146->SetMaximum(0.5852275);
   Graph_gr_T20_28_15_160146->SetDirectory(0);
   Graph_gr_T20_28_15_160146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_15_160146->SetLineColor(ci);
   Graph_gr_T20_28_15_160146->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_160146->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_160146->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_160146->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_160146->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_160146->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_160146->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_160146->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_160146->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_160146->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_160146->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_160146->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_15_160146);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
