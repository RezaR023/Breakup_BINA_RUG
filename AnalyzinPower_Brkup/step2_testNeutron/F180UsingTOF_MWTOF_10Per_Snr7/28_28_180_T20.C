{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Jun  3 18:03:30 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",665,71,931,578);
   Canvas_1->Range(130,-0.8669347,250,0.6262292);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,150,0.2143247);
   gre->SetPointError(0,0,0.1630439);
   gre->SetPoint(1,170,-0.5214069);
   gre->SetPointError(1,0,0.09666715);
   gre->SetPoint(2,190,-0.4238641);
   gre->SetPointError(2,0,0.05538836);
   gre->SetPoint(3,210,-0.3475674);
   gre->SetPointError(3,0,0.02918818);
   gre->SetPoint(4,230,-0.4013496);
   gre->SetPointError(4,0,0.03069956);
   
   TH1F *Graph_gr_T20_28_28_18025 = new TH1F("Graph_gr_T20_28_28_18025","",100,142,238);
   Graph_gr_T20_28_28_18025->SetMinimum(-0.7176183);
   Graph_gr_T20_28_28_18025->SetMaximum(0.4769128);
   Graph_gr_T20_28_28_18025->SetDirectory(0);
   Graph_gr_T20_28_28_18025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_18025->SetLineColor(ci);
   Graph_gr_T20_28_28_18025->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18025->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18025->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18025->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18025->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18025->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18025->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18025->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_18025->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_18025->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_18025->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_18025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_18025);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
