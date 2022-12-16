{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:33:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(125,-0.2441376,245,0.01276427);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.06756123);
   gre->SetPointError(0,0,0.03750852);
   gre->SetPoint(1,155,-0.1147105);
   gre->SetPointError(1,0,0.03766377);
   gre->SetPoint(2,165,-0.158671);
   gre->SetPointError(2,0,0.03832817);
   gre->SetPoint(3,175,-0.08914977);
   gre->SetPointError(3,0,0.03668733);
   gre->SetPoint(4,185,-0.1229631);
   gre->SetPointError(4,0,0.03530056);
   gre->SetPoint(5,195,-0.1683439);
   gre->SetPointError(5,0,0.03297672);
   gre->SetPoint(6,205,-0.1210217);
   gre->SetPointError(6,0,0.02747063);
   gre->SetPoint(7,215,-0.1412676);
   gre->SetPointError(7,0,0.02091012);
   gre->SetPoint(8,225,-0.160631);
   gre->SetPointError(8,0,0.01599916);
   
   TH1F *Graph_gr_iT11_28_25_160154 = new TH1F("Graph_gr_iT11_28_25_160154","",100,137,233);
   Graph_gr_iT11_28_25_160154->SetMinimum(-0.2184474);
   Graph_gr_iT11_28_25_160154->SetMaximum(-0.01292592);
   Graph_gr_iT11_28_25_160154->SetDirectory(0);
   Graph_gr_iT11_28_25_160154->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_160154->SetLineColor(ci);
   Graph_gr_iT11_28_25_160154->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_160154->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_160154->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_160154->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_160154->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_160154->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_160154->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_160154->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_160154->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_160154->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_160154->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_160154->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_160154);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
