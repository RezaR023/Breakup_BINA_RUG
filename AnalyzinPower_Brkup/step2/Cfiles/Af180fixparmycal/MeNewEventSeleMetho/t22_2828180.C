{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:23:36 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.2437079,310,0.04751214);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.06189144);
   gre->SetPointError(0,0,0.05259277);
   gre->SetPoint(1,145,-0.1525076);
   gre->SetPointError(1,0,0.04266355);
   gre->SetPoint(2,155,-0.1453744);
   gre->SetPointError(2,0,0.03340453);
   gre->SetPoint(3,165,-0.1166113);
   gre->SetPointError(3,0,0.03263182);
   gre->SetPoint(4,175,-0.1133691);
   gre->SetPointError(4,0,0.02736892);
   gre->SetPoint(5,185,-0.08704004);
   gre->SetPointError(5,0,0.02061937);
   gre->SetPoint(6,195,-0.09423683);
   gre->SetPointError(6,0,0.01353011);
   gre->SetPoint(7,205,-0.09321964);
   gre->SetPointError(7,0,0.008537963);
   gre->SetPoint(8,215,-0.095752);
   gre->SetPointError(8,0,0.005690968);
   gre->SetPoint(9,225,-0.1075031);
   gre->SetPointError(9,0,0.004468289);
   gre->SetPoint(10,235,-0.1129468);
   gre->SetPointError(10,0,0.007410486);
   gre->SetPoint(11,245,-0.1147616);
   gre->SetPointError(11,0,0.005565256);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.005565256);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.005565256);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.005565256);
   
   TH1F *Graph_gr_T22_28_28_18012 = new TH1F("Graph_gr_T22_28_28_18012","",100,121,289);
   Graph_gr_T22_28_28_18012->SetMinimum(-0.2145859);
   Graph_gr_T22_28_28_18012->SetMaximum(0.01839014);
   Graph_gr_T22_28_28_18012->SetDirectory(0);
   Graph_gr_T22_28_28_18012->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_18012->SetLineColor(ci);
   Graph_gr_T22_28_28_18012->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18012->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18012->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18012->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18012->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18012->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18012->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18012->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18012->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18012->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18012->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_18012);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
