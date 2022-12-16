{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:39:19 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(142.5,-0.1219398,277.5,0.04447631);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.01379223);
   gre->SetPointError(0,0,0.03053252);
   gre->SetPoint(1,175,-0.05483859);
   gre->SetPointError(1,0,0.02930754);
   gre->SetPoint(2,185,-0.04176093);
   gre->SetPointError(2,0,0.02567905);
   gre->SetPoint(3,195,-0.02836635);
   gre->SetPointError(3,0,0.02297983);
   gre->SetPoint(4,205,-0.0379689);
   gre->SetPointError(4,0,0.02098217);
   gre->SetPoint(5,215,-0.04076781);
   gre->SetPointError(5,0,0.01948067);
   gre->SetPoint(6,225,-0.0737337);
   gre->SetPointError(6,0,0.01907706);
   gre->SetPoint(7,235,-0.05897566);
   gre->SetPointError(7,0,0.01914859);
   gre->SetPoint(8,245,-0.0691487);
   gre->SetPointError(8,0,0.0210465);
   gre->SetPoint(9,255,-0.07115901);
   gre->SetPointError(9,0,0.02304476);
   
   TH1F *Graph_gr_ImiT11_20_25_16023 = new TH1F("Graph_gr_ImiT11_20_25_16023","",100,156,264);
   Graph_gr_ImiT11_20_25_16023->SetMinimum(-0.1052982);
   Graph_gr_ImiT11_20_25_16023->SetMaximum(0.0278347);
   Graph_gr_ImiT11_20_25_16023->SetDirectory(0);
   Graph_gr_ImiT11_20_25_16023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_25_16023->SetLineColor(ci);
   Graph_gr_ImiT11_20_25_16023->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_16023->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_16023->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_16023->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_16023->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_16023->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_16023->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_16023->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_25_16023->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_25_16023->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_25_16023->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_25_16023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_25_16023);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
