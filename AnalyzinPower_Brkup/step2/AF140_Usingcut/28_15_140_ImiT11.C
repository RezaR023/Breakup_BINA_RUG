{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:19:44 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(122.5,-0.1828999,257.5,0.186348);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.01693654);
   gre->SetPointError(0,0,0.104422);
   gre->SetPoint(1,155,0.009891268);
   gre->SetPointError(1,0,0.0593456);
   gre->SetPoint(2,165,0.005438158);
   gre->SetPointError(2,0,0.05766433);
   gre->SetPoint(3,175,0.04150889);
   gre->SetPointError(3,0,0.05613038);
   gre->SetPoint(4,185,0.03078878);
   gre->SetPointError(4,0,0.05629587);
   gre->SetPoint(5,195,-0.03181429);
   gre->SetPointError(5,0,0.05094912);
   gre->SetPoint(6,205,0.01250666);
   gre->SetPointError(6,0,0.0442487);
   gre->SetPoint(7,215,0.07896535);
   gre->SetPointError(7,0,0.04584134);
   gre->SetPoint(8,225,0.01619527);
   gre->SetPointError(8,0,0.04236286);
   gre->SetPoint(9,235,-0.01367996);
   gre->SetPointError(9,0,0.04776494);
   
   TH1F *Graph_gr_ImiT11_28_15_14042 = new TH1F("Graph_gr_ImiT11_28_15_14042","",100,136,244);
   Graph_gr_ImiT11_28_15_14042->SetMinimum(-0.1459751);
   Graph_gr_ImiT11_28_15_14042->SetMaximum(0.1494232);
   Graph_gr_ImiT11_28_15_14042->SetDirectory(0);
   Graph_gr_ImiT11_28_15_14042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_15_14042->SetLineColor(ci);
   Graph_gr_ImiT11_28_15_14042->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_14042->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_14042->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_14042->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_14042->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_14042->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_14042->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_14042->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_14042->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_14042->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_14042->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_14042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_15_14042);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
