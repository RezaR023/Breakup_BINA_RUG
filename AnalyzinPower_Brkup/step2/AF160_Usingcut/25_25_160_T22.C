{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:25:04 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2504124,257.5,0.01797607);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.11566);
   gre->SetPointError(0,0,0.04499606);
   gre->SetPoint(1,155,-0.05842703);
   gre->SetPointError(1,0,0.03167169);
   gre->SetPoint(2,165,-0.1386448);
   gre->SetPointError(2,0,0.03384261);
   gre->SetPoint(3,175,-0.1722387);
   gre->SetPointError(3,0,0.03344229);
   gre->SetPoint(4,185,-0.07808762);
   gre->SetPointError(4,0,0.0291531);
   gre->SetPoint(5,195,-0.110169);
   gre->SetPointError(5,0,0.02424352);
   gre->SetPoint(6,205,-0.07008653);
   gre->SetPointError(6,0,0.02007767);
   gre->SetPoint(7,215,-0.05335469);
   gre->SetPointError(7,0,0.01537307);
   gre->SetPoint(8,225,-0.06293833);
   gre->SetPointError(8,0,0.01293367);
   gre->SetPoint(9,235,-0.05977488);
   gre->SetPointError(9,0,0.01141726);
   
   TH1F *Graph_gr_T22_25_25_160137 = new TH1F("Graph_gr_T22_25_25_160137","",100,136,244);
   Graph_gr_T22_25_25_160137->SetMinimum(-0.2235735);
   Graph_gr_T22_25_25_160137->SetMaximum(-0.008862771);
   Graph_gr_T22_25_25_160137->SetDirectory(0);
   Graph_gr_T22_25_25_160137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_25_25_160137->SetLineColor(ci);
   Graph_gr_T22_25_25_160137->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_160137->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_160137->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_160137->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_25_25_160137->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_160137->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_160137->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_160137->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_25_25_160137->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_25_25_160137->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_25_25_160137->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_25_25_160137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_25_25_160137);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
