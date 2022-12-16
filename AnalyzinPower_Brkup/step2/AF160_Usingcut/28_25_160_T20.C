{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:33:53 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(125,-0.4547681,245,0.3322142);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_T20_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.04352392);
   gre->SetPointError(0,0,0.05922583);
   gre->SetPoint(1,155,0.117433);
   gre->SetPointError(1,0,0.05931884);
   gre->SetPoint(2,165,0.1407245);
   gre->SetPointError(2,0,0.06032599);
   gre->SetPoint(3,175,-0.0304322);
   gre->SetPointError(3,0,0.05529013);
   gre->SetPoint(4,185,-0.2185942);
   gre->SetPointError(4,0,0.04820938);
   gre->SetPoint(5,195,-0.2592663);
   gre->SetPointError(5,0,0.04269309);
   gre->SetPoint(6,205,-0.2540023);
   gre->SetPointError(6,0,0.03442557);
   gre->SetPoint(7,215,-0.2779298);
   gre->SetPointError(7,0,0.02630172);
   gre->SetPoint(8,225,-0.3036142);
   gre->SetPointError(8,0,0.01999019);
   
   TH1F *Graph_gr_T20_28_25_160156 = new TH1F("Graph_gr_T20_28_25_160156","",100,137,233);
   Graph_gr_T20_28_25_160156->SetMinimum(-0.3760698);
   Graph_gr_T20_28_25_160156->SetMaximum(0.253516);
   Graph_gr_T20_28_25_160156->SetDirectory(0);
   Graph_gr_T20_28_25_160156->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_25_160156->SetLineColor(ci);
   Graph_gr_T20_28_25_160156->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_160156->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_160156->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_160156->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_160156->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_160156->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_160156->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_160156->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_25_160156->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_25_160156->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_25_160156->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_25_160156->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_25_160156);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
