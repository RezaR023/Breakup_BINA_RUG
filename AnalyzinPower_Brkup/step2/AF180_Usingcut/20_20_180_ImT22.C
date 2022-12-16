{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:50:18 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.1388402,290,0.1224264);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.008206926);
   gre->SetPointError(0,0,0.08708887);
   gre->SetPoint(1,175,-0.02559);
   gre->SetPointError(1,0,0.04784843);
   gre->SetPoint(2,185,-0.00753349);
   gre->SetPointError(2,0,0.0522664);
   gre->SetPoint(3,195,0.02690814);
   gre->SetPointError(3,0,0.04221567);
   gre->SetPoint(4,205,-0.02889316);
   gre->SetPointError(4,0,0.03782729);
   gre->SetPoint(5,215,-0.01145717);
   gre->SetPointError(5,0,0.02999354);
   gre->SetPoint(6,225,-0.003230085);
   gre->SetPointError(6,0,0.02687547);
   gre->SetPoint(7,235,-0.01371283);
   gre->SetPointError(7,0,0.02319573);
   gre->SetPoint(8,245,-0.04408643);
   gre->SetPointError(8,0,0.01868397);
   gre->SetPoint(9,255,-0.02296087);
   gre->SetPointError(9,0,0.01443978);
   gre->SetPoint(10,265,-0.02409314);
   gre->SetPointError(10,0,0.01128489);
   
   TH1F *Graph_gr_ImT22_20_20_18032 = new TH1F("Graph_gr_ImT22_20_20_18032","",100,155,275);
   Graph_gr_ImT22_20_20_18032->SetMinimum(-0.1127136);
   Graph_gr_ImT22_20_20_18032->SetMaximum(0.09629972);
   Graph_gr_ImT22_20_20_18032->SetDirectory(0);
   Graph_gr_ImT22_20_20_18032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_20_18032->SetLineColor(ci);
   Graph_gr_ImT22_20_20_18032->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_18032->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_18032->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_18032->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_18032->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_18032->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_18032->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_18032->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_18032->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_18032->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_18032->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_18032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_20_18032);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
