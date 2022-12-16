{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:18:35 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.1308416,277.5,0.0998088);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.06596795);
   gre->SetPointError(0,0,0.02643193);
   gre->SetPoint(1,175,-0.01452442);
   gre->SetPointError(1,0,0.02503422);
   gre->SetPoint(2,185,-0.0229406);
   gre->SetPointError(2,0,0.02099211);
   gre->SetPoint(3,195,-0.000781096);
   gre->SetPointError(3,0,0.01691681);
   gre->SetPoint(4,205,0.02299899);
   gre->SetPointError(4,0,0.01435369);
   gre->SetPoint(5,215,0.03025703);
   gre->SetPointError(5,0,0.01362956);
   gre->SetPoint(6,225,0.03117274);
   gre->SetPointError(6,0,0.01277516);
   gre->SetPoint(7,235,0.04837793);
   gre->SetPointError(7,0,0.01298913);
   gre->SetPoint(8,245,0.03288948);
   gre->SetPointError(8,0,0.01444551);
   gre->SetPoint(9,255,0.01446701);
   gre->SetPointError(9,0,0.01534047);
   
   TH1F *Graph_gr_ImT22_20_28_160123 = new TH1F("Graph_gr_ImT22_20_28_160123","",100,156,264);
   Graph_gr_ImT22_20_28_160123->SetMinimum(-0.1077766);
   Graph_gr_ImT22_20_28_160123->SetMaximum(0.07674376);
   Graph_gr_ImT22_20_28_160123->SetDirectory(0);
   Graph_gr_ImT22_20_28_160123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_28_160123->SetLineColor(ci);
   Graph_gr_ImT22_20_28_160123->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_160123->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_160123->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_160123->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_160123->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_160123->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_160123->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_160123->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_28_160123->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_28_160123->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_28_160123->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_28_160123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_28_160123);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
