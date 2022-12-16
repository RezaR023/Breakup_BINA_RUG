{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Apr 18 07:32:08 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",548,71,1048,578);
   Canvas_1->Range(112.5,-0.3610604,247.5,0.02036332);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_30_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.2268648);
   gre->SetPointError(0,0,0.05861068);
   gre->SetPoint(1,145,-0.09621187);
   gre->SetPointError(1,0,0.05300456);
   gre->SetPoint(2,155,-0.1157298);
   gre->SetPointError(2,0,0.04980731);
   gre->SetPoint(3,165,-0.1545857);
   gre->SetPointError(3,0,0.0449052);
   gre->SetPoint(4,175,-0.2480712);
   gre->SetPointError(4,0,0.03484597);
   gre->SetPoint(5,185,-0.2364239);
   gre->SetPointError(5,0,0.02581144);
   gre->SetPoint(6,195,-0.2806061);
   gre->SetPointError(6,0,0.01688366);
   gre->SetPoint(7,205,-0.2402005);
   gre->SetPointError(7,0,0.01040326);
   gre->SetPoint(8,215,-0.2652754);
   gre->SetPointError(8,0,0.006298847);
   gre->SetPoint(9,225,-0.2302426);
   gre->SetPointError(9,0,0.008924717);
   
   TH1F *Graph_gr_iT11_30_28_1801 = new TH1F("Graph_gr_iT11_30_28_1801","",100,126,234);
   Graph_gr_iT11_30_28_1801->SetMinimum(-0.322918);
   Graph_gr_iT11_30_28_1801->SetMaximum(-0.01777906);
   Graph_gr_iT11_30_28_1801->SetDirectory(0);
   Graph_gr_iT11_30_28_1801->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_30_28_1801->SetLineColor(ci);
   Graph_gr_iT11_30_28_1801->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_30_28_1801->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_30_28_1801->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_30_28_1801->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_30_28_1801->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_30_28_1801->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_30_28_1801->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_30_28_1801->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_30_28_1801->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_30_28_1801->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_30_28_1801->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_30_28_1801->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_30_28_1801);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
