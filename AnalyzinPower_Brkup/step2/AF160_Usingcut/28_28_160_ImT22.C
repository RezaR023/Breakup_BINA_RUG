{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:37:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(112.5,-0.123252,247.5,0.06928882);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.01725107);
   gre->SetPointError(0,0,0.04269289);
   gre->SetPoint(1,145,-0.03354801);
   gre->SetPointError(1,0,0.03202631);
   gre->SetPoint(2,155,0.002251552);
   gre->SetPointError(2,0,0.03494713);
   gre->SetPoint(3,165,-0.0603486);
   gre->SetPointError(3,0,0.03081326);
   gre->SetPoint(4,175,-0.0279525);
   gre->SetPointError(4,0,0.02683615);
   gre->SetPoint(5,185,0.002032511);
   gre->SetPointError(5,0,0.02185246);
   gre->SetPoint(6,195,-0.0006717926);
   gre->SetPointError(6,0,0.01687084);
   gre->SetPoint(7,205,0.01279879);
   gre->SetPointError(7,0,0.01361029);
   gre->SetPoint(8,215,0.008742629);
   gre->SetPointError(8,0,0.01131126);
   gre->SetPoint(9,225,-0.0002951672);
   gre->SetPointError(9,0,0.01066691);
   
   TH1F *Graph_gr_ImT22_28_28_160163 = new TH1F("Graph_gr_ImT22_28_28_160163","",100,126,234);
   Graph_gr_ImT22_28_28_160163->SetMinimum(-0.1039979);
   Graph_gr_ImT22_28_28_160163->SetMaximum(0.05003474);
   Graph_gr_ImT22_28_28_160163->SetDirectory(0);
   Graph_gr_ImT22_28_28_160163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_28_160163->SetLineColor(ci);
   Graph_gr_ImT22_28_28_160163->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_160163->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_160163->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_160163->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_160163->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_160163->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_160163->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_160163->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_160163->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_160163->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_160163->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_160163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_28_160163);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
