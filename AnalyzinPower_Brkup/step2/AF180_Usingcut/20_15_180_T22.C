{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 21:46:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(140,-0.3997938,290,0.3150484);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_T22_20_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.1250836);
   gre->SetPointError(0,0,0.07082441);
   gre->SetPoint(1,175,-0.007586884);
   gre->SetPointError(1,0,0.05594338);
   gre->SetPoint(2,185,-0.09956421);
   gre->SetPointError(2,0,0.0586132);
   gre->SetPoint(3,195,0.007560893);
   gre->SetPointError(3,0,0.05036526);
   gre->SetPoint(4,205,-0.0548818);
   gre->SetPointError(4,0,0.0403189);
   gre->SetPoint(5,215,-0.1364169);
   gre->SetPointError(5,0,0.03836363);
   gre->SetPoint(6,225,-0.2057263);
   gre->SetPointError(6,0,0.03221649);
   gre->SetPoint(7,235,-0.1106454);
   gre->SetPointError(7,0,0.02713125);
   gre->SetPoint(8,245,-0.1585826);
   gre->SetPointError(8,0,0.02147918);
   gre->SetPoint(9,255,-0.2510704);
   gre->SetPointError(9,0,0.01622879);
   gre->SetPoint(10,265,-0.2690952);
   gre->SetPointError(10,0,0.01155823);
   
   TH1F *Graph_gr_T22_20_15_18026 = new TH1F("Graph_gr_T22_20_15_18026","",100,155,275);
   Graph_gr_T22_20_15_18026->SetMinimum(-0.3283096);
   Graph_gr_T22_20_15_18026->SetMaximum(0.2435641);
   Graph_gr_T22_20_15_18026->SetDirectory(0);
   Graph_gr_T22_20_15_18026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_20_15_18026->SetLineColor(ci);
   Graph_gr_T22_20_15_18026->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_18026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_18026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_18026->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_20_15_18026->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_18026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_18026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_18026->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_20_15_18026->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_20_15_18026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_20_15_18026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_20_15_18026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_20_15_18026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
