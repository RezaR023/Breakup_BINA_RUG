{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:49:52 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(155,-0.188553,275,0.09893611);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,175,-0.1078284);
   gre->SetPointError(0,0,0.03280972);
   gre->SetPoint(1,185,-0.0833113);
   gre->SetPointError(1,0,0.02887731);
   gre->SetPoint(2,195,-0.04144459);
   gre->SetPointError(2,0,0.02561672);
   gre->SetPoint(3,205,-0.005793771);
   gre->SetPointError(3,0,0.02512097);
   gre->SetPoint(4,215,-0.0001184428);
   gre->SetPointError(4,0,0.02513666);
   gre->SetPoint(5,225,0.02353514);
   gre->SetPointError(5,0,0.02748612);
   gre->SetPoint(6,235,-0.02170435);
   gre->SetPointError(6,0,0.02916831);
   gre->SetPoint(7,245,0.0158959);
   gre->SetPointError(7,0,0.03348486);
   gre->SetPoint(8,255,-0.06945848);
   gre->SetPointError(8,0,0.03270396);
   
   TH1F *Graph_gr_ImT22_15_28_140186 = new TH1F("Graph_gr_ImT22_15_28_140186","",100,167,263);
   Graph_gr_ImT22_15_28_140186->SetMinimum(-0.1598041);
   Graph_gr_ImT22_15_28_140186->SetMaximum(0.0701872);
   Graph_gr_ImT22_15_28_140186->SetDirectory(0);
   Graph_gr_ImT22_15_28_140186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_140186->SetLineColor(ci);
   Graph_gr_ImT22_15_28_140186->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_140186->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_140186->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_140186->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_140186->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_140186->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_140186->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_140186->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_140186->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_140186->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_140186->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_140186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_140186);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
