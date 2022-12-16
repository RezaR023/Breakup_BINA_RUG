{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:45:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(112.5,-0.1271564,247.5,0.0724076);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.005892947);
   gre->SetPointError(0,0,0.03510981);
   gre->SetPoint(1,145,-0.02761396);
   gre->SetPointError(1,0,0.03020444);
   gre->SetPoint(2,155,-0.0648939);
   gre->SetPointError(2,0,0.02900184);
   gre->SetPoint(3,165,-0.03895124);
   gre->SetPointError(3,0,0.02919623);
   gre->SetPoint(4,175,0.01118138);
   gre->SetPointError(4,0,0.02796555);
   gre->SetPoint(5,185,-0.006869958);
   gre->SetPointError(5,0,0.02374564);
   gre->SetPoint(6,195,-0.009639616);
   gre->SetPointError(6,0,0.01865705);
   gre->SetPoint(7,205,0.007191898);
   gre->SetPointError(7,0,0.01660865);
   gre->SetPoint(8,215,0.01119472);
   gre->SetPointError(8,0,0.01580226);
   gre->SetPoint(9,225,-0.006745144);
   gre->SetPointError(9,0,0.01789251);
   
   TH1F *Graph_gr_ImiT11_28_28_16032 = new TH1F("Graph_gr_ImiT11_28_28_16032","",100,126,234);
   Graph_gr_ImiT11_28_28_16032->SetMinimum(-0.1072);
   Graph_gr_ImiT11_28_28_16032->SetMaximum(0.0524512);
   Graph_gr_ImiT11_28_28_16032->SetDirectory(0);
   Graph_gr_ImiT11_28_28_16032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_28_16032->SetLineColor(ci);
   Graph_gr_ImiT11_28_28_16032->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_16032->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_16032->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_16032->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_16032->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_16032->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_16032->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_16032->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_16032->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_16032->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_16032->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_16032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_28_16032);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
