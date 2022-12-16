{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Mar  9 11:56:58 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",564,71,1032,578);
   Canvas_1->Range(100,-0.3931706,310,0.09454966);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1340709);
   gre->SetPointError(0,0,0.06537743);
   gre->SetPoint(1,145,-0.03279886);
   gre->SetPointError(1,0,0.04606181);
   gre->SetPoint(2,155,-0.0739712);
   gre->SetPointError(2,0,0.04165576);
   gre->SetPoint(3,165,-0.1288502);
   gre->SetPointError(3,0,0.04046245);
   gre->SetPoint(4,175,-0.2178678);
   gre->SetPointError(4,0,0.03520524);
   gre->SetPoint(5,185,-0.2405207);
   gre->SetPointError(5,0,0.02753415);
   gre->SetPoint(6,195,-0.2790953);
   gre->SetPointError(6,0,0.01847273);
   gre->SetPoint(7,205,-0.300191);
   gre->SetPointError(7,0,0.0116929);
   gre->SetPoint(8,215,-0.2830648);
   gre->SetPointError(8,0,0.00777743);
   gre->SetPoint(9,225,-0.2709731);
   gre->SetPointError(9,0,0.006144623);
   gre->SetPoint(10,235,-0.2674082);
   gre->SetPointError(10,0,0.01011879);
   gre->SetPoint(11,245,-0.2654334);
   gre->SetPointError(11,0,0.007566612);
   gre->SetPoint(12,255,-0.2654334);
   gre->SetPointError(12,0,0.007566612);
   gre->SetPoint(13,265,-0.2654334);
   gre->SetPointError(13,0,0.007566612);
   gre->SetPoint(14,275,-0.2654334);
   gre->SetPointError(14,0,0.007566612);
   
   TH1F *Graph_gr_iT11_28_28_1807 = new TH1F("Graph_gr_iT11_28_28_1807","",100,121,289);
   Graph_gr_iT11_28_28_1807->SetMinimum(-0.3443986);
   Graph_gr_iT11_28_28_1807->SetMaximum(0.04577763);
   Graph_gr_iT11_28_28_1807->SetDirectory(0);
   Graph_gr_iT11_28_28_1807->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1807->SetLineColor(ci);
   Graph_gr_iT11_28_28_1807->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1807->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1807->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1807->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1807->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1807->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1807->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1807->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1807->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1807->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1807->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1807->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1807);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
