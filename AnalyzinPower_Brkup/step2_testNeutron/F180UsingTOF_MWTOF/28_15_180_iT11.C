{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:55:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.1597993,257.5,0.2644352);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.05034002);
   gre->SetPointError(0,0,0.055094);
   gre->SetPoint(1,155,-0.006597217);
   gre->SetPointError(1,0,0.04479395);
   gre->SetPoint(2,165,-0.007794772);
   gre->SetPointError(2,0,0.04455827);
   gre->SetPoint(3,175,-0.001623168);
   gre->SetPointError(3,0,0.04102032);
   gre->SetPoint(4,185,-0.05266472);
   gre->SetPointError(4,0,0.03642882);
   gre->SetPoint(5,195,-0.05475201);
   gre->SetPointError(5,0,0.029071);
   gre->SetPoint(6,205,-0.0007406277);
   gre->SetPointError(6,0,0.02640662);
   gre->SetPoint(7,215,0.05051821);
   gre->SetPointError(7,0,0.01966958);
   gre->SetPoint(8,225,0.1276295);
   gre->SetPointError(8,0,0.01536135);
   gre->SetPoint(9,235,0.1794761);
   gre->SetPointError(9,0,0.01425343);
   
   TH1F *Graph_gr_iT11_28_15_18014 = new TH1F("Graph_gr_iT11_28_15_18014","",100,136,244);
   Graph_gr_iT11_28_15_18014->SetMinimum(-0.1173758);
   Graph_gr_iT11_28_15_18014->SetMaximum(0.2220118);
   Graph_gr_iT11_28_15_18014->SetDirectory(0);
   Graph_gr_iT11_28_15_18014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_15_18014->SetLineColor(ci);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18014->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18014->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_15_18014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_15_18014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
