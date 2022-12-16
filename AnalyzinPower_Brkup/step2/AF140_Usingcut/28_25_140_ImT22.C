{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:25:04 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(112.5,-0.2004958,247.5,0.1111782);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.001871295);
   gre->SetPointError(0,0,0.06110387);
   gre->SetPoint(1,145,-0.009265582);
   gre->SetPointError(1,0,0.04101268);
   gre->SetPoint(2,155,-0.01659776);
   gre->SetPointError(2,0,0.03872638);
   gre->SetPoint(3,165,-0.05546725);
   gre->SetPointError(3,0,0.03770425);
   gre->SetPoint(4,175,-0.03403834);
   gre->SetPointError(4,0,0.03648151);
   gre->SetPoint(5,185,-0.1090288);
   gre->SetPointError(5,0,0.03952134);
   gre->SetPoint(6,195,-0.05694448);
   gre->SetPointError(6,0,0.039761);
   gre->SetPoint(7,205,-0.0373893);
   gre->SetPointError(7,0,0.03254439);
   gre->SetPoint(8,215,-0.01495363);
   gre->SetPointError(8,0,0.02804715);
   gre->SetPoint(9,225,0.01714595);
   gre->SetPointError(9,0,0.02622301);
   
   TH1F *Graph_gr_ImT22_28_25_14055 = new TH1F("Graph_gr_ImT22_28_25_14055","",100,126,234);
   Graph_gr_ImT22_28_25_14055->SetMinimum(-0.1693284);
   Graph_gr_ImT22_28_25_14055->SetMaximum(0.08001084);
   Graph_gr_ImT22_28_25_14055->SetDirectory(0);
   Graph_gr_ImT22_28_25_14055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_25_14055->SetLineColor(ci);
   Graph_gr_ImT22_28_25_14055->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_14055->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_14055->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_14055->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_14055->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_14055->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_14055->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_14055->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_14055->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_14055->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_14055->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_14055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_25_14055);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
