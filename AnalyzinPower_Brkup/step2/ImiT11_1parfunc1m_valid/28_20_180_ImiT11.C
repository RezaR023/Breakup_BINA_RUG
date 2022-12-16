{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 14:40:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(122.5,-0.1051475,257.5,0.2111232);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,145,0.02315041);
   gre->SetPointError(0,0,0.06513141);
   gre->SetPoint(1,155,0.04489728);
   gre->SetPointError(1,0,0.05923049);
   gre->SetPoint(2,165,0.09152287);
   gre->SetPointError(2,0,0.06688855);
   gre->SetPoint(3,175,0.04498891);
   gre->SetPointError(3,0,0.05487576);
   gre->SetPoint(4,185,-0.007017827);
   gre->SetPointError(4,0,0.04541789);
   gre->SetPoint(5,195,0.0670615);
   gre->SetPointError(5,0,0.04011141);
   gre->SetPoint(6,205,0.02472669);
   gre->SetPointError(6,0,0.03296191);
   gre->SetPoint(7,215,0.02217361);
   gre->SetPointError(7,0,0.02325329);
   gre->SetPoint(8,225,0.01629026);
   gre->SetPointError(8,0,0.01409154);
   gre->SetPoint(9,235,0.00750212);
   gre->SetPointError(9,0,0.007668784);
   
   TH1F *Graph_gr_ImiT11_28_20_18014 = new TH1F("Graph_gr_ImiT11_28_20_18014","",100,136,244);
   Graph_gr_ImiT11_28_20_18014->SetMinimum(-0.07352043);
   Graph_gr_ImiT11_28_20_18014->SetMaximum(0.1794961);
   Graph_gr_ImiT11_28_20_18014->SetDirectory(0);
   Graph_gr_ImiT11_28_20_18014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_20_18014->SetLineColor(ci);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_20_18014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_20_18014);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
