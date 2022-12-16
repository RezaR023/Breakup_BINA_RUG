{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:18:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-3.143158,310,3.906208);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.05209892);
   gre->SetPoint(1,145,-0.02635914);
   gre->SetPointError(1,0,0.05209892);
   gre->SetPoint(2,155,0.3815248);
   gre->SetPointError(2,0,2.349789);
   gre->SetPoint(3,165,-0.06772423);
   gre->SetPointError(3,0,0.0767634);
   gre->SetPoint(4,175,0.1587539);
   gre->SetPointError(4,0,0.04643687);
   gre->SetPoint(5,185,0.1799368);
   gre->SetPointError(5,0,0.04023926);
   gre->SetPoint(6,195,0.09848314);
   gre->SetPointError(6,0,0.03488108);
   gre->SetPoint(7,205,0.1252492);
   gre->SetPointError(7,0,0.03436306);
   gre->SetPoint(8,215,0.06651383);
   gre->SetPointError(8,0,0.03451084);
   gre->SetPoint(9,225,-0.01674165);
   gre->SetPointError(9,0,0.03701714);
   gre->SetPoint(10,235,-0.09704378);
   gre->SetPointError(10,0,0.04077583);
   gre->SetPoint(11,245,-0.06114591);
   gre->SetPointError(11,0,0.04734689);
   gre->SetPoint(12,255,-0.1169672);
   gre->SetPointError(12,0,0.04478162);
   gre->SetPoint(13,265,-0.1241883);
   gre->SetPointError(13,0,0.04337616);
   gre->SetPoint(14,275,-0.07389413);
   gre->SetPointError(14,0,0.03847917);
   
   TH1F *Graph_gr_T20_15_28_14034 = new TH1F("Graph_gr_T20_15_28_14034","",100,121,289);
   Graph_gr_T20_15_28_14034->SetMinimum(-2.438222);
   Graph_gr_T20_15_28_14034->SetMaximum(3.201271);
   Graph_gr_T20_15_28_14034->SetDirectory(0);
   Graph_gr_T20_15_28_14034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_15_28_14034->SetLineColor(ci);
   Graph_gr_T20_15_28_14034->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_14034->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_14034->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_14034->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_14034->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_14034->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_14034->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_14034->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_15_28_14034->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_15_28_14034->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_15_28_14034->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_15_28_14034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_15_28_14034);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
