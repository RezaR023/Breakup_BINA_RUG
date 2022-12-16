{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:40:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(122.5,-0.135158,257.5,0.09684118);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,145,-0.02220464);
   gre->SetPointError(0,0,0.05684333);
   gre->SetPoint(1,155,-0.001659193);
   gre->SetPointError(1,0,0.05090381);
   gre->SetPoint(2,165,-0.002854836);
   gre->SetPointError(2,0,0.05161503);
   gre->SetPoint(3,175,-0.04675243);
   gre->SetPointError(3,0,0.04973903);
   gre->SetPoint(4,185,0.00422043);
   gre->SetPointError(4,0,0.04036824);
   gre->SetPoint(5,195,0.02802588);
   gre->SetPointError(5,0,0.03014876);
   gre->SetPoint(6,205,0.0119966);
   gre->SetPointError(6,0,0.01915663);
   gre->SetPoint(7,215,0.02249941);
   gre->SetPointError(7,0,0.01187552);
   gre->SetPoint(8,225,0.005453307);
   gre->SetPointError(8,0,0.007448019);
   gre->SetPoint(9,235,-0.008951632);
   gre->SetPointError(9,0,0.008335534);
   
   TH1F *Graph_gr_ImiT11_28_25_18015 = new TH1F("Graph_gr_ImiT11_28_25_18015","",100,136,244);
   Graph_gr_ImiT11_28_25_18015->SetMinimum(-0.1119581);
   Graph_gr_ImiT11_28_25_18015->SetMaximum(0.07364126);
   Graph_gr_ImiT11_28_25_18015->SetDirectory(0);
   Graph_gr_ImiT11_28_25_18015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_25_18015->SetLineColor(ci);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_18015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_25_18015);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
