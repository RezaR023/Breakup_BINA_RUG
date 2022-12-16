{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:23:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.2416151,267.5,0.05650688);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.05830401);
   gre->SetPointError(0,0,0.0391413);
   gre->SetPoint(1,165,-0.03272337);
   gre->SetPointError(1,0,0.03954326);
   gre->SetPoint(2,175,-0.04033258);
   gre->SetPointError(2,0,0.04000152);
   gre->SetPoint(3,185,-0.05594957);
   gre->SetPointError(3,0,0.03751359);
   gre->SetPoint(4,195,-0.06321896);
   gre->SetPointError(4,0,0.03357736);
   gre->SetPoint(5,205,-0.1202162);
   gre->SetPointError(5,0,0.03235476);
   gre->SetPoint(6,215,-0.1265152);
   gre->SetPointError(6,0,0.02633598);
   gre->SetPoint(7,225,-0.1702123);
   gre->SetPointError(7,0,0.02110874);
   gre->SetPoint(8,235,-0.1763982);
   gre->SetPointError(8,0,0.01552991);
   gre->SetPoint(9,245,-0.1662204);
   gre->SetPointError(9,0,0.01257652);
   
   TH1F *Graph_gr_ImT22_25_20_160133 = new TH1F("Graph_gr_ImT22_25_20_160133","",100,146,254);
   Graph_gr_ImT22_25_20_160133->SetMinimum(-0.2118029);
   Graph_gr_ImT22_25_20_160133->SetMaximum(0.02669468);
   Graph_gr_ImT22_25_20_160133->SetDirectory(0);
   Graph_gr_ImT22_25_20_160133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_20_160133->SetLineColor(ci);
   Graph_gr_ImT22_25_20_160133->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_160133->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_160133->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_160133->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_160133->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_160133->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_160133->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_160133->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_20_160133->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_20_160133->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_20_160133->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_20_160133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_20_160133);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
