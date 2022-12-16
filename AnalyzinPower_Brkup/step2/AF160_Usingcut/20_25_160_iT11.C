{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:15:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.3929388,277.5,0.1234048);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.002710139);
   gre->SetPointError(0,0,0.04005767);
   gre->SetPoint(1,175,-0.1128633);
   gre->SetPointError(1,0,0.03498913);
   gre->SetPoint(2,185,-0.2340128);
   gre->SetPointError(2,0,0.031348);
   gre->SetPoint(3,195,-0.2801209);
   gre->SetPointError(3,0,0.02676065);
   gre->SetPoint(4,205,-0.2421825);
   gre->SetPointError(4,0,0.02323233);
   gre->SetPoint(5,215,-0.2592232);
   gre->SetPointError(5,0,0.02145393);
   gre->SetPoint(6,225,-0.2570809);
   gre->SetPointError(6,0,0.02044029);
   gre->SetPoint(7,235,-0.2690935);
   gre->SetPointError(7,0,0.01924864);
   gre->SetPoint(8,245,-0.2744031);
   gre->SetPointError(8,0,0.01858697);
   gre->SetPoint(9,255,-0.2074876);
   gre->SetPointError(9,0,0.02035513);
   
   TH1F *Graph_gr_iT11_20_25_160114 = new TH1F("Graph_gr_iT11_20_25_160114","",100,156,264);
   Graph_gr_iT11_20_25_160114->SetMinimum(-0.3413044);
   Graph_gr_iT11_20_25_160114->SetMaximum(0.07177044);
   Graph_gr_iT11_20_25_160114->SetDirectory(0);
   Graph_gr_iT11_20_25_160114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_20_25_160114->SetLineColor(ci);
   Graph_gr_iT11_20_25_160114->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_160114->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_160114->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_160114->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_25_160114->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_160114->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_160114->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_160114->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_20_25_160114->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_20_25_160114->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_20_25_160114->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_20_25_160114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_20_25_160114);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
