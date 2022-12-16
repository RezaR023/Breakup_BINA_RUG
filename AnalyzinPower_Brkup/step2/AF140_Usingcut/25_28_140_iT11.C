{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:08:46 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.3814412,245,0.02108723);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_iT11_25_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1335971);
   gre->SetPointError(0,0,0.04239701);
   gre->SetPoint(1,155,-0.1755415);
   gre->SetPointError(1,0,0.03547178);
   gre->SetPoint(2,165,-0.1530055);
   gre->SetPointError(2,0,0.03738832);
   gre->SetPoint(3,175,-0.08260831);
   gre->SetPointError(3,0,0.03660747);
   gre->SetPoint(4,185,-0.1855156);
   gre->SetPointError(4,0,0.04306651);
   gre->SetPoint(5,195,-0.2751875);
   gre->SetPointError(5,0,0.03916563);
   gre->SetPoint(6,205,-0.1583653);
   gre->SetPointError(6,0,0.03743598);
   gre->SetPoint(7,215,-0.1660135);
   gre->SetPointError(7,0,0.03731629);
   gre->SetPoint(8,225,-0.1737332);
   gre->SetPointError(8,0,0.03225924);
   
   TH1F *Graph_gr_iT11_25_28_14036 = new TH1F("Graph_gr_iT11_25_28_14036","",100,137,233);
   Graph_gr_iT11_25_28_14036->SetMinimum(-0.3411884);
   Graph_gr_iT11_25_28_14036->SetMaximum(-0.01916561);
   Graph_gr_iT11_25_28_14036->SetDirectory(0);
   Graph_gr_iT11_25_28_14036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_28_14036->SetLineColor(ci);
   Graph_gr_iT11_25_28_14036->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_14036->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_14036->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_14036->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_28_14036->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_14036->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_14036->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_14036->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_28_14036->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_28_14036->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_28_14036->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_28_14036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_28_14036);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
