{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 12:24:01 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",502,71,919,578);
   Canvas_1->Range(112.5,-0.2908558,247.5,0.02913748);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.09927163);
   gre->SetPointError(0,0,0.06212848);
   gre->SetPoint(1,145,-0.1235718);
   gre->SetPointError(1,0,0.04147072);
   gre->SetPoint(2,155,-0.1986065);
   gre->SetPointError(2,0,0.03891709);
   gre->SetPoint(3,165,-0.06587856);
   gre->SetPointError(3,0,0.04168382);
   gre->SetPoint(4,175,-0.1512178);
   gre->SetPointError(4,0,0.04128388);
   gre->SetPoint(5,185,-0.1401944);
   gre->SetPointError(5,0,0.04743237);
   gre->SetPoint(6,195,-0.1357222);
   gre->SetPointError(6,0,0.04658336);
   gre->SetPoint(7,205,-0.1422418);
   gre->SetPointError(7,0,0.04258636);
   gre->SetPoint(8,215,-0.1738811);
   gre->SetPointError(8,0,0.03745698);
   gre->SetPoint(9,225,-0.1132517);
   gre->SetPointError(9,0,0.03601102);
   
   TH1F *Graph_gr_iT11_28_25_14051 = new TH1F("Graph_gr_iT11_28_25_14051","",100,126,234);
   Graph_gr_iT11_28_25_14051->SetMinimum(-0.2588565);
   Graph_gr_iT11_28_25_14051->SetMaximum(-0.002861858);
   Graph_gr_iT11_28_25_14051->SetDirectory(0);
   Graph_gr_iT11_28_25_14051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_25_14051->SetLineColor(ci);
   Graph_gr_iT11_28_25_14051->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_14051->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_14051->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_14051->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_14051->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_14051->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_14051->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_14051->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_25_14051->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_25_14051->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_25_14051->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_25_14051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_25_14051);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
