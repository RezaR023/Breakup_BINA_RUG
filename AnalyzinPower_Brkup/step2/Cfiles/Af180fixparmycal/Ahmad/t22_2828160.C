{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:20:41 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.201506,310,0.04387455);
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
   gre->SetPoint(0,135,-0.06762937);
   gre->SetPointError(0,0,0.04239217);
   gre->SetPoint(1,145,-0.1284734);
   gre->SetPointError(1,0,0.03213583);
   gre->SetPoint(2,155,-0.1232693);
   gre->SetPointError(2,0,0.02865329);
   gre->SetPoint(3,165,-0.09120624);
   gre->SetPointError(3,0,0.02820468);
   gre->SetPoint(4,175,-0.1154691);
   gre->SetPointError(4,0,0.02007658);
   gre->SetPoint(5,185,-0.08491883);
   gre->SetPointError(5,0,0.01366331);
   gre->SetPoint(6,195,-0.08885866);
   gre->SetPointError(6,0,0.00890909);
   gre->SetPoint(7,205,-0.1033137);
   gre->SetPointError(7,0,0.006111878);
   gre->SetPoint(8,215,-0.09652429);
   gre->SetPointError(8,0,0.005014749);
   gre->SetPoint(9,225,-0.1166154);
   gre->SetPointError(9,0,0.005857095);
   gre->SetPoint(10,235,-0.1210836);
   gre->SetPointError(10,0,0.01236371);
   gre->SetPoint(11,245,-0.1044869);
   gre->SetPointError(11,0,0.009567574);
   gre->SetPoint(12,255,-0.006589786);
   gre->SetPointError(12,0,0.009567574);
   gre->SetPoint(13,265,-0.006589786);
   gre->SetPointError(13,0,0.009567574);
   gre->SetPoint(14,275,-0.006589786);
   gre->SetPointError(14,0,0.009567574);
   
   TH1F *Graph_gr_T22_28_28_1809 = new TH1F("Graph_gr_T22_28_28_1809","",100,121,289);
   Graph_gr_T22_28_28_1809->SetMinimum(-0.176968);
   Graph_gr_T22_28_28_1809->SetMaximum(0.01933649);
   Graph_gr_T22_28_28_1809->SetDirectory(0);
   Graph_gr_T22_28_28_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1809->SetLineColor(ci);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
