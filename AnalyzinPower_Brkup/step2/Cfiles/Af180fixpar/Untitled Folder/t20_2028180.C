{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:57:49 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(136.702,-0.6337435,276.778,0.07396187);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_20_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,160.048,-0.3395301);
   gre->SetPointError(0,0,0.08649272);
   gre->SetPoint(1,170.424,-0.2086792);
   gre->SetPointError(1,0,0.07710184);
   gre->SetPoint(2,180.8,-0.1059775);
   gre->SetPointError(2,0,0.06198847);
   gre->SetPoint(3,191.176,-0.2252247);
   gre->SetPointError(3,0,0.04773889);
   gre->SetPoint(4,201.552,-0.2143981);
   gre->SetPointError(4,0,0.04054085);
   gre->SetPoint(5,211.928,-0.2327305);
   gre->SetPointError(5,0,0.03650255);
   gre->SetPoint(6,222.304,-0.3596006);
   gre->SetPointError(6,0,0.03427087);
   gre->SetPoint(7,232.68,-0.4391036);
   gre->SetPointError(7,0,0.0364611);
   gre->SetPoint(8,243.056,-0.4700892);
   gre->SetPointError(8,0,0.04570339);
   gre->SetPoint(9,253.432,-0.3875692);
   gre->SetPointError(9,0,0.06450429);
   
   TH1F *Graph_gr_T20_20_28_18017 = new TH1F("Graph_gr_T20_20_28_18017","",100,150.7096,262.7704);
   Graph_gr_T20_20_28_18017->SetMinimum(-0.562973);
   Graph_gr_T20_20_28_18017->SetMaximum(0.003191323);
   Graph_gr_T20_20_28_18017->SetDirectory(0);
   Graph_gr_T20_20_28_18017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_28_18017->SetLineColor(ci);
   Graph_gr_T20_20_28_18017->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_18017->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_18017->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_18017->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_18017->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_18017->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_18017->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_18017->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_28_18017->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_28_18017->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_28_18017->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_28_18017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_28_18017);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
