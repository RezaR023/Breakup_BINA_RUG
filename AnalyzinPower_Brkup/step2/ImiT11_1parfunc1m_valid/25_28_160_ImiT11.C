{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri May  4 15:02:40 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",587,71,834,578);
   Canvas_1->Range(122.5,-0.1271181,257.5,0.08181786);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(1);
   gre->SetMarkerColor(1);
   gre->SetMarkerStyle(24);
   gre->SetPoint(0,145,-0.04943222);
   gre->SetPointError(0,0,0.04286324);
   gre->SetPoint(1,155,-0.05938787);
   gre->SetPointError(1,0,0.03245582);
   gre->SetPoint(2,165,0.01403292);
   gre->SetPointError(2,0,0.03296227);
   gre->SetPoint(3,175,-0.03760347);
   gre->SetPointError(3,0,0.03212108);
   gre->SetPoint(4,185,-0.03310334);
   gre->SetPointError(4,0,0.02938785);
   gre->SetPoint(5,195,-0.01489531);
   gre->SetPointError(5,0,0.0239006);
   gre->SetPoint(6,205,-0.02970086);
   gre->SetPointError(6,0,0.01936858);
   gre->SetPoint(7,215,-0.02129092);
   gre->SetPointError(7,0,0.01679011);
   gre->SetPoint(8,225,-0.03508789);
   gre->SetPointError(8,0,0.01512759);
   gre->SetPoint(9,235,0.006365271);
   gre->SetPointError(9,0,0.01569063);
   
   TH1F *Graph_gr_ImiT11_25_28_16028 = new TH1F("Graph_gr_ImiT11_25_28_16028","",100,136,244);
   Graph_gr_ImiT11_25_28_16028->SetMinimum(-0.1062245);
   Graph_gr_ImiT11_25_28_16028->SetMaximum(0.06092426);
   Graph_gr_ImiT11_25_28_16028->SetDirectory(0);
   Graph_gr_ImiT11_25_28_16028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_16028->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_16028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_16028);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
