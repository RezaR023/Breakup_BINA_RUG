{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:50:02 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.06310783,277.5,0.05805628);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_18_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.00269922);
   gre->SetPointError(0,0,0.03439171);
   gre->SetPoint(1,175,0.001791284);
   gre->SetPointError(1,0,0.02461224);
   gre->SetPoint(2,185,-0.02243319);
   gre->SetPointError(2,0,0.02048063);
   gre->SetPoint(3,195,-0.0006293583);
   gre->SetPointError(3,0,0.01600704);
   gre->SetPoint(4,205,0.005586585);
   gre->SetPointError(4,0,0.01388149);
   gre->SetPoint(5,215,0.0004246167);
   gre->SetPointError(5,0,0.01256553);
   gre->SetPoint(6,225,-0.003950417);
   gre->SetPointError(6,0,0.01245397);
   gre->SetPoint(7,235,0.01022664);
   gre->SetPointError(7,0,0.01267968);
   gre->SetPoint(8,245,-0.0129255);
   gre->SetPointError(8,0,0.01431799);
   gre->SetPoint(9,255,0.019926);
   gre->SetPointError(9,0,0.01793627);
   
   TH1F *Graph_gr_ImT22_18_28_18088 = new TH1F("Graph_gr_ImT22_18_28_18088","",100,156,264);
   Graph_gr_ImT22_18_28_18088->SetMinimum(-0.05099142);
   Graph_gr_ImT22_18_28_18088->SetMaximum(0.04593987);
   Graph_gr_ImT22_18_28_18088->SetDirectory(0);
   Graph_gr_ImT22_18_28_18088->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_18_28_18088->SetLineColor(ci);
   Graph_gr_ImT22_18_28_18088->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_18_28_18088->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_18_28_18088->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_18_28_18088->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_18_28_18088->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_18_28_18088->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_18_28_18088->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_18_28_18088->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_18_28_18088->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_18_28_18088->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_18_28_18088->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_18_28_18088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_18_28_18088);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
