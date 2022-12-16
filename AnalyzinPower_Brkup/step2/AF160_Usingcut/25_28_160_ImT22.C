{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:28:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.1155182,257.5,0.08870051);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.03261941);
   gre->SetPointError(0,0,0.0357769);
   gre->SetPoint(1,155,-0.008603225);
   gre->SetPointError(1,0,0.02772956);
   gre->SetPoint(2,165,-0.05294334);
   gre->SetPointError(2,0,0.0285384);
   gre->SetPoint(3,175,-0.03068125);
   gre->SetPointError(3,0,0.02710799);
   gre->SetPoint(4,185,-0.001531964);
   gre->SetPointError(4,0,0.02222932);
   gre->SetPoint(5,195,0.02124265);
   gre->SetPointError(5,0,0.01732181);
   gre->SetPoint(6,205,0.03690168);
   gre->SetPointError(6,0,0.01415273);
   gre->SetPoint(7,215,0.04256723);
   gre->SetPointError(7,0,0.01209683);
   gre->SetPoint(8,225,0.02524247);
   gre->SetPointError(8,0,0.01091177);
   gre->SetPoint(9,235,0.002437474);
   gre->SetPointError(9,0,0.01120724);
   
   TH1F *Graph_gr_ImT22_25_28_160143 = new TH1F("Graph_gr_ImT22_25_28_160143","",100,136,244);
   Graph_gr_ImT22_25_28_160143->SetMinimum(-0.09509632);
   Graph_gr_ImT22_25_28_160143->SetMaximum(0.06827864);
   Graph_gr_ImT22_25_28_160143->SetDirectory(0);
   Graph_gr_ImT22_25_28_160143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_28_160143->SetLineColor(ci);
   Graph_gr_ImT22_25_28_160143->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_160143->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_160143->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_160143->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_160143->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_160143->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_160143->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_160143->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_160143->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_160143->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_160143->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_160143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_28_160143);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
