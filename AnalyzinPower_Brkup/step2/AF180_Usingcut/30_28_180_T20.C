{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Apr 18 07:32:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",548,71,1048,578);
   Canvas_1->Range(112.5,-0.5556934,247.5,0.3286434);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_30_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.09373878);
   gre->SetPointError(0,0,0.08751512);
   gre->SetPoint(1,145,-0.01392282);
   gre->SetPointError(1,0,0.07856981);
   gre->SetPoint(2,155,-0.03059365);
   gre->SetPointError(2,0,0.07360782);
   gre->SetPoint(3,165,-0.1355939);
   gre->SetPointError(3,0,0.06489683);
   gre->SetPoint(4,175,-0.3165721);
   gre->SetPointError(4,0,0.04863138);
   gre->SetPoint(5,185,-0.3720853);
   gre->SetPointError(5,0,0.03330464);
   gre->SetPoint(6,195,-0.3874552);
   gre->SetPointError(6,0,0.02084875);
   gre->SetPoint(7,205,-0.3496737);
   gre->SetPointError(7,0,0.01270134);
   gre->SetPoint(8,215,-0.3548176);
   gre->SetPointError(8,0,0.007860465);
   gre->SetPoint(9,225,-0.3607271);
   gre->SetPointError(9,0,0.0112241);
   
   TH1F *Graph_gr_T20_30_28_1802 = new TH1F("Graph_gr_T20_30_28_1802","",100,126,234);
   Graph_gr_T20_30_28_1802->SetMinimum(-0.4672597);
   Graph_gr_T20_30_28_1802->SetMaximum(0.2402097);
   Graph_gr_T20_30_28_1802->SetDirectory(0);
   Graph_gr_T20_30_28_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_30_28_1802->SetLineColor(ci);
   Graph_gr_T20_30_28_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_30_28_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_30_28_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_30_28_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_30_28_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_30_28_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_30_28_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_30_28_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_30_28_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_30_28_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_30_28_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_30_28_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_30_28_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
