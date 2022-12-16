{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:38:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(152.5,-0.09710387,287.5,0.1107089);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.00417243);
   gre->SetPointError(0,0,0.03393551);
   gre->SetPoint(1,185,0.01854291);
   gre->SetPointError(1,0,0.03494318);
   gre->SetPoint(2,195,-0.02638743);
   gre->SetPointError(2,0,0.03608097);
   gre->SetPoint(3,205,0.00293077);
   gre->SetPointError(3,0,0.03356152);
   gre->SetPoint(4,215,0.01310558);
   gre->SetPointError(4,0,0.03072694);
   gre->SetPoint(5,225,0.02598442);
   gre->SetPointError(5,0,0.02779704);
   gre->SetPoint(6,235,0.05102429);
   gre->SetPointError(6,0,0.02504918);
   gre->SetPoint(7,245,0.03662788);
   gre->SetPointError(7,0,0.02259757);
   gre->SetPoint(8,255,0.02006718);
   gre->SetPointError(8,0,0.0204687);
   gre->SetPoint(9,265,-0.0005055482);
   gre->SetPointError(9,0,0.02014556);
   
   TH1F *Graph_gr_ImiT11_20_20_16022 = new TH1F("Graph_gr_ImiT11_20_20_16022","",100,166,274);
   Graph_gr_ImiT11_20_20_16022->SetMinimum(-0.07632259);
   Graph_gr_ImiT11_20_20_16022->SetMaximum(0.08992766);
   Graph_gr_ImiT11_20_20_16022->SetDirectory(0);
   Graph_gr_ImiT11_20_20_16022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_20_16022->SetLineColor(ci);
   Graph_gr_ImiT11_20_20_16022->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_16022->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_16022->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_16022->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_16022->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_16022->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_16022->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_16022->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_20_16022->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_20_16022->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_20_16022->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_20_16022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_20_16022);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
