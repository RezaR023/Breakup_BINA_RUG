{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:34:51 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(162.5,-0.1983568,297.5,0.226283);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_15_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,185,-0.06570268);
   gre->SetPointError(0,0,0.05802968);
   gre->SetPoint(1,195,-0.02791406);
   gre->SetPointError(1,0,0.05948429);
   gre->SetPoint(2,205,-0.06834907);
   gre->SetPointError(2,0,0.05923439);
   gre->SetPoint(3,215,0.05099436);
   gre->SetPointError(3,0,0.04999968);
   gre->SetPoint(4,225,-0.05465052);
   gre->SetPointError(4,0,0.04931753);
   gre->SetPoint(5,235,0.09817267);
   gre->SetPointError(5,0,0.0474417);
   gre->SetPoint(6,245,0.06745871);
   gre->SetPointError(6,0,0.04669974);
   gre->SetPoint(7,255,0.06482023);
   gre->SetPointError(7,0,0.03969061);
   gre->SetPoint(8,265,0.1187985);
   gre->SetPointError(8,0,0.0367112);
   gre->SetPoint(9,275,0.1078594);
   gre->SetPointError(9,0,0.03404608);
   
   TH1F *Graph_gr_ImiT11_15_15_14033 = new TH1F("Graph_gr_ImiT11_15_15_14033","",100,176,284);
   Graph_gr_ImiT11_15_15_14033->SetMinimum(-0.1558928);
   Graph_gr_ImiT11_15_15_14033->SetMaximum(0.183819);
   Graph_gr_ImiT11_15_15_14033->SetDirectory(0);
   Graph_gr_ImiT11_15_15_14033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_15_15_14033->SetLineColor(ci);
   Graph_gr_ImiT11_15_15_14033->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_14033->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_14033->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_14033->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_14033->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_14033->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_14033->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_14033->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_15_15_14033->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_15_15_14033->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_15_15_14033->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_15_15_14033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_15_15_14033);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
