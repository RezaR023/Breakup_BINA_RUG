{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:17:34 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(115.9557,-0.2182187,238.4143,0.2281497);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,136.3655,-0.03470708);
   gre->SetPointError(0,0,0.05736328);
   gre->SetPoint(1,145.4365,-0.09273828);
   gre->SetPointError(1,0,0.05108573);
   gre->SetPoint(2,154.5075,-0.002964242);
   gre->SetPointError(2,0,0.05466041);
   gre->SetPoint(3,163.5785,0.05432301);
   gre->SetPointError(3,0,0.04913694);
   gre->SetPoint(4,172.6495,0.09701393);
   gre->SetPointError(4,0,0.05513045);
   gre->SetPoint(5,181.7205,0.03035298);
   gre->SetPointError(5,0,0.06020887);
   gre->SetPoint(6,190.7915,0.08410955);
   gre->SetPointError(6,0,0.05292719);
   gre->SetPoint(7,199.8625,0.1011704);
   gre->SetPointError(7,0,0.05258449);
   gre->SetPoint(8,208.9335,0.01437962);
   gre->SetPointError(8,0,0.04823871);
   gre->SetPoint(9,218.0045,-0.07614735);
   gre->SetPointError(9,0,0.04361942);
   
   TH1F *Graph_gr_T22_28_28_1409 = new TH1F("Graph_gr_T22_28_28_1409","",100,128.2016,226.1684);
   Graph_gr_T22_28_28_1409->SetMinimum(-0.1735819);
   Graph_gr_T22_28_28_1409->SetMaximum(0.1835128);
   Graph_gr_T22_28_28_1409->SetDirectory(0);
   Graph_gr_T22_28_28_1409->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1409->SetLineColor(ci);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1409->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1409->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1409->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1409);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
