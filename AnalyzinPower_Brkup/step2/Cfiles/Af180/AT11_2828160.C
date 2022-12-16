{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:58:05 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(115.1607,-0.5060483,247.0693,0.1416573);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,137.1455,-0.02733285);
   gre->SetPointError(0,0,0.06103921);
   gre->SetPoint(1,146.9165,-0.05582049);
   gre->SetPointError(1,0,0.06317421);
   gre->SetPoint(2,156.6875,-0.1817089);
   gre->SetPointError(2,0,0.06614808);
   gre->SetPoint(3,166.4585,-0.245513);
   gre->SetPointError(3,0,0.06356328);
   gre->SetPoint(4,176.2295,-0.3333308);
   gre->SetPointError(4,0,0.05747378);
   gre->SetPoint(5,186.0005,-0.2878431);
   gre->SetPointError(5,0,0.04728439);
   gre->SetPoint(6,195.7715,-0.3591329);
   gre->SetPointError(6,0,0.03896442);
   gre->SetPoint(7,205.5425,-0.2883718);
   gre->SetPointError(7,0,0.03675066);
   gre->SetPoint(8,215.3135,-0.2402535);
   gre->SetPointError(8,0,0.03491891);
   gre->SetPoint(9,225.0845,-0.2184276);
   gre->SetPointError(9,0,0.03710567);
   
   TH1F *Graph_gr_iT11_28_28_1608 = new TH1F("Graph_gr_iT11_28_28_1608","",100,128.3516,233.8784);
   Graph_gr_iT11_28_28_1608->SetMinimum(-0.4412777);
   Graph_gr_iT11_28_28_1608->SetMaximum(0.07688673);
   Graph_gr_iT11_28_28_1608->SetDirectory(0);
   Graph_gr_iT11_28_28_1608->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_1608->SetLineColor(ci);
   Graph_gr_iT11_28_28_1608->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1608->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1608->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1608->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1608->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1608->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1608->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1608->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_1608->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_1608->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_1608->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_1608->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_1608);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
