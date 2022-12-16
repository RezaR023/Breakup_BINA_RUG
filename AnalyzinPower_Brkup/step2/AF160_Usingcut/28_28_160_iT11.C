{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:34:54 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(112.5,-0.3689427,247.5,-0.01580078);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.123442);
   gre->SetPointError(0,0,0.04443624);
   gre->SetPoint(1,145,-0.1105652);
   gre->SetPointError(1,0,0.03590746);
   gre->SetPoint(2,155,-0.1500529);
   gre->SetPointError(2,0,0.03810594);
   gre->SetPoint(3,165,-0.2128116);
   gre->SetPointError(3,0,0.03561666);
   gre->SetPoint(4,175,-0.2512682);
   gre->SetPointError(4,0,0.03312962);
   gre->SetPoint(5,185,-0.2617249);
   gre->SetPointError(5,0,0.0283915);
   gre->SetPoint(6,195,-0.2666503);
   gre->SetPointError(6,0,0.0236726);
   gre->SetPoint(7,205,-0.292111);
   gre->SetPointError(7,0,0.01797465);
   gre->SetPoint(8,215,-0.2720173);
   gre->SetPointError(8,0,0.01572241);
   gre->SetPoint(9,225,-0.2670567);
   gre->SetPointError(9,0,0.01448268);
   
   TH1F *Graph_gr_iT11_28_28_160159 = new TH1F("Graph_gr_iT11_28_28_160159","",100,126,234);
   Graph_gr_iT11_28_28_160159->SetMinimum(-0.3336285);
   Graph_gr_iT11_28_28_160159->SetMaximum(-0.05111497);
   Graph_gr_iT11_28_28_160159->SetDirectory(0);
   Graph_gr_iT11_28_28_160159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_160159->SetLineColor(ci);
   Graph_gr_iT11_28_28_160159->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_160159->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_160159->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_160159->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_160159->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_160159->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_160159->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_160159->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_160159->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_160159->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_160159->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_160159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_160159);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
