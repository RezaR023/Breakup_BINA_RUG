{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:16:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(115.9557,-0.4188497,238.4143,0.2151338);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,136.3655,-0.1691016);
   gre->SetPointError(0,0,0.06331858);
   gre->SetPoint(1,145.4365,-0.2019357);
   gre->SetPointError(1,0,0.05782705);
   gre->SetPoint(2,154.5075,0.05293762);
   gre->SetPointError(2,0,0.05653225);
   gre->SetPoint(3,163.5785,-0.1755965);
   gre->SetPointError(3,0,0.06122014);
   gre->SetPoint(4,172.6495,-0.178615);
   gre->SetPointError(4,0,0.0655131);
   gre->SetPoint(5,181.7205,-0.2443503);
   gre->SetPointError(5,0,0.06883552);
   gre->SetPoint(6,190.7915,-0.130076);
   gre->SetPointError(6,0,0.06787026);
   gre->SetPoint(7,199.8625,-0.1314611);
   gre->SetPointError(7,0,0.0801268);
   gre->SetPoint(8,208.9335,-0.2332475);
   gre->SetPointError(8,0,0.06727623);
   gre->SetPoint(9,218.0045,-0.06303528);
   gre->SetPointError(9,0,0.0578481);
   
   TH1F *Graph_gr_iT11_28_28_1407 = new TH1F("Graph_gr_iT11_28_28_1407","",100,128.2016,226.1684);
   Graph_gr_iT11_28_28_1407->SetMinimum(-0.3554514);
   Graph_gr_iT11_28_28_1407->SetMaximum(0.1517354);
   Graph_gr_iT11_28_28_1407->SetDirectory(0);
   Graph_gr_iT11_28_28_1407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1407->SetLineColor(ci);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1407->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1407->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1407);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
