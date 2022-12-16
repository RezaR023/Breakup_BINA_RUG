{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:54:06 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(125,-0.2352275,245,0.05911947);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImiT11_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1512421);
   gre->SetPointError(0,0,0.03492756);
   gre->SetPoint(1,155,-0.130913);
   gre->SetPointError(1,0,0.03125447);
   gre->SetPoint(2,165,-0.1377594);
   gre->SetPointError(2,0,0.0318549);
   gre->SetPoint(3,175,-0.09512162);
   gre->SetPointError(3,0,0.03608037);
   gre->SetPoint(4,185,-0.06098399);
   gre->SetPointError(4,0,0.03745479);
   gre->SetPoint(5,195,-0.02772748);
   gre->SetPointError(5,0,0.03778913);
   gre->SetPoint(6,205,-0.03481042);
   gre->SetPointError(6,0,0.03844502);
   gre->SetPoint(7,215,-0.05429969);
   gre->SetPointError(7,0,0.03538701);
   gre->SetPoint(8,225,-0.08686791);
   gre->SetPointError(8,0,0.0326022);
   
   TH1F *Graph_gr_ImiT11_25_28_14044 = new TH1F("Graph_gr_ImiT11_25_28_14044","",100,137,233);
   Graph_gr_ImiT11_25_28_14044->SetMinimum(-0.2057928);
   Graph_gr_ImiT11_25_28_14044->SetMaximum(0.02968478);
   Graph_gr_ImiT11_25_28_14044->SetDirectory(0);
   Graph_gr_ImiT11_25_28_14044->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_28_14044->SetLineColor(ci);
   Graph_gr_ImiT11_25_28_14044->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_14044->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_14044->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_14044->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_14044->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_14044->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_14044->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_14044->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_28_14044->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_28_14044->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_28_14044->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_28_14044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_28_14044);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
