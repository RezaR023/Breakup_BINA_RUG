{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:51:16 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.2698931,257.5,0.1049341);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.002097821);
   gre->SetPointError(0,0,0.04036512);
   gre->SetPoint(1,155,-0.0505365);
   gre->SetPointError(1,0,0.04154393);
   gre->SetPoint(2,165,-0.0547288);
   gre->SetPointError(2,0,0.03552818);
   gre->SetPoint(3,175,-0.06589751);
   gre->SetPointError(3,0,0.03223049);
   gre->SetPoint(4,185,-0.06555798);
   gre->SetPointError(4,0,0.03149739);
   gre->SetPoint(5,195,-0.07122031);
   gre->SetPointError(5,0,0.02870253);
   gre->SetPoint(6,205,-0.1279274);
   gre->SetPointError(6,0,0.02539664);
   gre->SetPoint(7,215,-0.1277545);
   gre->SetPointError(7,0,0.02241006);
   gre->SetPoint(8,225,-0.1888316);
   gre->SetPointError(8,0,0.0185903);
   gre->SetPoint(9,235,-0.174527);
   gre->SetPointError(9,0,0.01554446);
   
   TH1F *Graph_gr_ImT22_28_15_16078 = new TH1F("Graph_gr_ImT22_28_15_16078","",100,136,244);
   Graph_gr_ImT22_28_15_16078->SetMinimum(-0.2324104);
   Graph_gr_ImT22_28_15_16078->SetMaximum(0.06745142);
   Graph_gr_ImT22_28_15_16078->SetDirectory(0);
   Graph_gr_ImT22_28_15_16078->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_15_16078->SetLineColor(ci);
   Graph_gr_ImT22_28_15_16078->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_16078->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_16078->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_16078->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_16078->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_16078->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_16078->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_16078->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_15_16078->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_15_16078->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_15_16078->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_15_16078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_15_16078);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
