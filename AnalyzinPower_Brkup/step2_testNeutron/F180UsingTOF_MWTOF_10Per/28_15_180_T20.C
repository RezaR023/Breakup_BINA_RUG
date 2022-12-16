{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 17:20:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-1.320355,257.5,0.9742394);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.6480648);
   gre->SetPointError(0,0,0.2898575);
   gre->SetPoint(1,155,-0.6590656);
   gre->SetPointError(1,0,0.236763);
   gre->SetPoint(2,165,-0.6350821);
   gre->SetPointError(2,0,0.2416994);
   gre->SetPoint(3,175,-0.4125305);
   gre->SetPointError(3,0,0.2407782);
   gre->SetPoint(4,185,-0.2996093);
   gre->SetPointError(4,0,0.2503552);
   gre->SetPoint(5,195,0.1837929);
   gre->SetPointError(5,0,0.2214897);
   gre->SetPoint(6,205,0.02210026);
   gre->SetPointError(6,0,0.1743952);
   gre->SetPoint(7,215,0.2260474);
   gre->SetPointError(7,0,0.1451219);
   gre->SetPoint(8,225,0.4741787);
   gre->SetPointError(8,0,0.1176284);
   gre->SetPoint(9,235,0.2305942);
   gre->SetPointError(9,0,0.1002499);
   
   TH1F *Graph_gr_T20_28_15_18038 = new TH1F("Graph_gr_T20_28_15_18038","",100,136,244);
   Graph_gr_T20_28_15_18038->SetMinimum(-1.090895);
   Graph_gr_T20_28_15_18038->SetMaximum(0.74478);
   Graph_gr_T20_28_15_18038->SetDirectory(0);
   Graph_gr_T20_28_15_18038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_15_18038->SetLineColor(ci);
   Graph_gr_T20_28_15_18038->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18038->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18038->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18038->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18038->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18038->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18038->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18038->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_15_18038->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_15_18038->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_15_18038->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_15_18038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_15_18038);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
