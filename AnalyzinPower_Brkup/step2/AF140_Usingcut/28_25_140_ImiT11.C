{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:24:20 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(112.5,-0.1638393,247.5,0.1577059);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.04318049);
   gre->SetPointError(0,0,0.06093455);
   gre->SetPoint(1,145,-0.01355272);
   gre->SetPointError(1,0,0.04399478);
   gre->SetPoint(2,155,-0.01749019);
   gre->SetPointError(2,0,0.04136734);
   gre->SetPoint(3,165,0.02960823);
   gre->SetPointError(3,0,0.04441127);
   gre->SetPoint(4,175,0.04529176);
   gre->SetPointError(4,0,0.04119546);
   gre->SetPoint(5,185,-0.05895305);
   gre->SetPointError(5,0,0.05129537);
   gre->SetPoint(6,195,-0.03670615);
   gre->SetPointError(6,0,0.05210393);
   gre->SetPoint(7,205,-0.009721817);
   gre->SetPointError(7,0,0.04523984);
   gre->SetPoint(8,215,0.02858292);
   gre->SetPointError(8,0,0.03973314);
   gre->SetPoint(9,225,-0.04582276);
   gre->SetPointError(9,0,0.03896952);
   
   TH1F *Graph_gr_ImiT11_28_25_14052 = new TH1F("Graph_gr_ImiT11_28_25_14052","",100,126,234);
   Graph_gr_ImiT11_28_25_14052->SetMinimum(-0.1316848);
   Graph_gr_ImiT11_28_25_14052->SetMaximum(0.1255514);
   Graph_gr_ImiT11_28_25_14052->SetDirectory(0);
   Graph_gr_ImiT11_28_25_14052->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_25_14052->SetLineColor(ci);
   Graph_gr_ImiT11_28_25_14052->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_14052->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_14052->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_14052->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_14052->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_14052->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_14052->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_14052->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_25_14052->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_25_14052->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_25_14052->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_25_14052->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_25_14052);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
