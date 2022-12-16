{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:20:27 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.1256658,257.5,0.1209285);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.04803822);
   gre->SetPointError(0,0,0.03652852);
   gre->SetPoint(1,155,-0.02182115);
   gre->SetPointError(1,0,0.03283606);
   gre->SetPoint(2,165,0.04854722);
   gre->SetPointError(2,0,0.03128223);
   gre->SetPoint(3,175,0.0102856);
   gre->SetPointError(3,0,0.02249089);
   gre->SetPoint(4,185,-0.006268054);
   gre->SetPointError(4,0,0.01497744);
   gre->SetPoint(5,195,0.006792351);
   gre->SetPointError(5,0,0.009745112);
   gre->SetPoint(6,205,0.01230348);
   gre->SetPointError(6,0,0.006489931);
   gre->SetPoint(7,215,-0.001256004);
   gre->SetPointError(7,0,0.005112868);
   gre->SetPoint(8,225,-0.001194607);
   gre->SetPointError(8,0,0.005874361);
   gre->SetPoint(9,235,-0.009157939);
   gre->SetPointError(9,0,0.01174418);
   
   TH1F *Graph_gr_ImT22_28_28_18065 = new TH1F("Graph_gr_ImT22_28_28_18065","",100,136,244);
   Graph_gr_ImT22_28_28_18065->SetMinimum(-0.1010064);
   Graph_gr_ImT22_28_28_18065->SetMaximum(0.09626907);
   Graph_gr_ImT22_28_28_18065->SetDirectory(0);
   Graph_gr_ImT22_28_28_18065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_28_18065->SetLineColor(ci);
   Graph_gr_ImT22_28_28_18065->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_18065->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_18065->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_18065->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_18065->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_18065->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_18065->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_18065->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_28_18065->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_28_18065->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_28_18065->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_28_18065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_28_18065);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
