{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:34:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(162.5,-0.1202363,297.5,0.1404118);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,185,0.02211139);
   gre->SetPointError(0,0,0.03724702);
   gre->SetPoint(1,195,-0.01747234);
   gre->SetPointError(1,0,0.0353219);
   gre->SetPoint(2,205,0.03323966);
   gre->SetPointError(2,0,0.03551946);
   gre->SetPoint(3,215,-0.04331102);
   gre->SetPointError(3,0,0.03348393);
   gre->SetPoint(4,225,0.004700922);
   gre->SetPointError(4,0,0.03076805);
   gre->SetPoint(5,235,0.05005806);
   gre->SetPointError(5,0,0.02861949);
   gre->SetPoint(6,245,0.06946496);
   gre->SetPointError(6,0,0.0259421);
   gre->SetPoint(7,255,0.07168684);
   gre->SetPointError(7,0,0.02273269);
   gre->SetPoint(8,265,0.03294279);
   gre->SetPointError(8,0,0.02114017);
   gre->SetPoint(9,275,0.07816596);
   gre->SetPointError(9,0,0.01880446);
   
   TH1F *Graph_gr_ImiT11_15_15_16017 = new TH1F("Graph_gr_ImiT11_15_15_16017","",100,176,284);
   Graph_gr_ImiT11_15_15_16017->SetMinimum(-0.09417149);
   Graph_gr_ImiT11_15_15_16017->SetMaximum(0.1143469);
   Graph_gr_ImiT11_15_15_16017->SetDirectory(0);
   Graph_gr_ImiT11_15_15_16017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_16017->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_16017->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_16017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_16017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_16017->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_16017->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_16017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_16017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_16017->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_16017->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_16017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_16017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_16017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_16017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
