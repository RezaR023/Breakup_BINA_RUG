{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 11:09:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(142.5,-0.2453361,277.5,0.2530111);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_20_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.07545702);
   gre->SetPointError(0,0,0.06715342);
   gre->SetPoint(1,175,0.004508216);
   gre->SetPointError(1,0,0.05009884);
   gre->SetPoint(2,185,0.06850113);
   gre->SetPointError(2,0,0.0526895);
   gre->SetPoint(3,195,0.110333);
   gre->SetPointError(3,0,0.05962017);
   gre->SetPoint(4,205,-0.1002242);
   gre->SetPointError(4,0,0.06205399);
   gre->SetPoint(5,215,-0.02198827);
   gre->SetPointError(5,0,0.05233638);
   gre->SetPoint(6,225,0.004753671);
   gre->SetPointError(6,0,0.0523612);
   gre->SetPoint(7,235,0.009090306);
   gre->SetPointError(7,0,0.04134712);
   gre->SetPoint(8,245,0.01161712);
   gre->SetPointError(8,0,0.03647553);
   gre->SetPoint(9,255,0.009588615);
   gre->SetPointError(9,0,0.03351429);
   
   TH1F *Graph_gr_ImiT11_20_15_1402 = new TH1F("Graph_gr_ImiT11_20_15_1402","",100,156,264);
   Graph_gr_ImiT11_20_15_1402->SetMinimum(-0.1955014);
   Graph_gr_ImiT11_20_15_1402->SetMaximum(0.2031764);
   Graph_gr_ImiT11_20_15_1402->SetDirectory(0);
   Graph_gr_ImiT11_20_15_1402->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_20_15_1402->SetLineColor(ci);
   Graph_gr_ImiT11_20_15_1402->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_1402->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_1402->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_1402->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_1402->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_1402->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_1402->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_1402->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_20_15_1402->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_20_15_1402->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_20_15_1402->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_20_15_1402->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_20_15_1402);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
