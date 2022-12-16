{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:36:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(112.5,-0.2334762,247.5,0.01692627);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1528858);
   gre->SetPointError(0,0,0.03885669);
   gre->SetPoint(1,145,-0.1079931);
   gre->SetPointError(1,0,0.03107415);
   gre->SetPoint(2,155,-0.08318958);
   gre->SetPointError(2,0,0.03204156);
   gre->SetPoint(3,165,-0.07858816);
   gre->SetPointError(3,0,0.02928054);
   gre->SetPoint(4,175,-0.09904278);
   gre->SetPointError(4,0,0.0273513);
   gre->SetPoint(5,185,-0.1003816);
   gre->SetPointError(5,0,0.02187303);
   gre->SetPoint(6,195,-0.04279906);
   gre->SetPointError(6,0,0.01799158);
   gre->SetPoint(7,205,-0.09146596);
   gre->SetPointError(7,0,0.01354142);
   gre->SetPoint(8,215,-0.06102655);
   gre->SetPointError(8,0,0.011312);
   gre->SetPoint(9,225,-0.07521239);
   gre->SetPointError(9,0,0.01046285);
   
   TH1F *Graph_gr_T22_28_28_160162 = new TH1F("Graph_gr_T22_28_28_160162","",100,126,234);
   Graph_gr_T22_28_28_160162->SetMinimum(-0.208436);
   Graph_gr_T22_28_28_160162->SetMaximum(-0.00811398);
   Graph_gr_T22_28_28_160162->SetDirectory(0);
   Graph_gr_T22_28_28_160162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_160162->SetLineColor(ci);
   Graph_gr_T22_28_28_160162->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_160162->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_160162->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_160162->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_160162->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_160162->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_160162->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_160162->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_160162->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_160162->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_160162->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_160162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_160162);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
