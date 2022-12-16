{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:22:25 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(125,-0.2350169,245,0.2546034);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.02089114);
   gre->SetPointError(0,0,0.09130973);
   gre->SetPoint(1,155,0.09967665);
   gre->SetPointError(1,0,0.07332337);
   gre->SetPoint(2,165,0.1013153);
   gre->SetPointError(2,0,0.07073173);
   gre->SetPoint(3,175,0.09364813);
   gre->SetPointError(3,0,0.07320209);
   gre->SetPoint(4,185,0.05449469);
   gre->SetPointError(4,0,0.07386836);
   gre->SetPoint(5,195,-0.08276586);
   gre->SetPointError(5,0,0.07064767);
   gre->SetPoint(6,205,-0.03797808);
   gre->SetPointError(6,0,0.07305065);
   gre->SetPoint(7,215,-0.08103762);
   gre->SetPointError(7,0,0.06946633);
   gre->SetPoint(8,225,-0.02960408);
   gre->SetPointError(8,0,0.06617864);
   
   TH1F *Graph_gr_T20_28_20_14048 = new TH1F("Graph_gr_T20_28_20_14048","",100,137,233);
   Graph_gr_T20_28_20_14048->SetMinimum(-0.1860549);
   Graph_gr_T20_28_20_14048->SetMaximum(0.2056414);
   Graph_gr_T20_28_20_14048->SetDirectory(0);
   Graph_gr_T20_28_20_14048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_20_14048->SetLineColor(ci);
   Graph_gr_T20_28_20_14048->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_14048->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_14048->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_14048->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_20_14048->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_14048->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_14048->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_14048->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_20_14048->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_20_14048->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_20_14048->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_20_14048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_20_14048);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
