{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:10:11 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.7665783,277.5,0.6550415);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.4196253);
   gre->SetPointError(0,0,0.1100163);
   gre->SetPoint(1,175,-0.3194031);
   gre->SetPointError(1,0,0.06901838);
   gre->SetPoint(2,185,0.1042358);
   gre->SetPointError(2,0,0.0904275);
   gre->SetPoint(3,195,-0.05041013);
   gre->SetPointError(3,0,0.08597186);
   gre->SetPoint(4,205,0.01954421);
   gre->SetPointError(4,0,0.08362025);
   gre->SetPoint(5,215,0.0604385);
   gre->SetPointError(5,0,0.07474724);
   gre->SetPoint(6,225,0.2612384);
   gre->SetPointError(6,0,0.07064999);
   gre->SetPoint(7,235,0.1697405);
   gre->SetPointError(7,0,0.06031916);
   gre->SetPoint(8,245,0.3329797);
   gre->SetPointError(8,0,0.05822642);
   gre->SetPoint(9,255,0.3667085);
   gre->SetPointError(9,0,0.05139637);
   
   TH1F *Graph_gr_T20_20_15_1403 = new TH1F("Graph_gr_T20_20_15_1403","",100,156,264);
   Graph_gr_T20_20_15_1403->SetMinimum(-0.6244163);
   Graph_gr_T20_20_15_1403->SetMaximum(0.5128795);
   Graph_gr_T20_20_15_1403->SetDirectory(0);
   Graph_gr_T20_20_15_1403->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_15_1403->SetLineColor(ci);
   Graph_gr_T20_20_15_1403->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_1403->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_1403->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_1403->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_15_1403->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_1403->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_1403->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_1403->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_15_1403->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_15_1403->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_15_1403->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_15_1403->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_15_1403);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
