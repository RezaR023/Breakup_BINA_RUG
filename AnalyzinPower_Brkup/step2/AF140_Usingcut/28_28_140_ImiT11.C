{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:25:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(115,-0.125583,235,0.118719);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006834351);
   gre->SetPointError(0,0,0.04744997);
   gre->SetPoint(1,145,0.020889);
   gre->SetPointError(1,0,0.04046145);
   gre->SetPoint(2,155,0.04025947);
   gre->SetPointError(2,0,0.03774256);
   gre->SetPoint(3,165,0.01010805);
   gre->SetPointError(3,0,0.03847786);
   gre->SetPoint(4,175,-0.04304252);
   gre->SetPointError(4,0,0.04182348);
   gre->SetPoint(5,185,-0.01179909);
   gre->SetPointError(5,0,0.04197827);
   gre->SetPoint(6,195,-0.004779647);
   gre->SetPointError(6,0,0.04238354);
   gre->SetPoint(7,205,-0.04040222);
   gre->SetPointError(7,0,0.03750809);
   gre->SetPoint(8,215,0.02967302);
   gre->SetPointError(8,0,0.03441979);
   
   TH1F *Graph_gr_ImiT11_28_28_14057 = new TH1F("Graph_gr_ImiT11_28_28_14057","",100,127,223);
   Graph_gr_ImiT11_28_28_14057->SetMinimum(-0.1011528);
   Graph_gr_ImiT11_28_28_14057->SetMaximum(0.09428884);
   Graph_gr_ImiT11_28_28_14057->SetDirectory(0);
   Graph_gr_ImiT11_28_28_14057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_28_14057->SetLineColor(ci);
   Graph_gr_ImiT11_28_28_14057->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_14057->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_14057->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_14057->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_14057->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_14057->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_14057->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_14057->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_28_14057->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_28_14057->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_28_14057->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_28_14057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_28_14057);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
