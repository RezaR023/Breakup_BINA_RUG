{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:03:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-0.4557049,310,0.1127971);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.02635914);
   gre->SetPointError(0,0,0.04426219);
   gre->SetPoint(1,145,-0.02635914);
   gre->SetPointError(1,0,0.04426219);
   gre->SetPoint(2,155,-0.02635914);
   gre->SetPointError(2,0,0.04426219);
   gre->SetPoint(3,165,-0.08201045);
   gre->SetPointError(3,0,0.1000572);
   gre->SetPoint(4,175,-0.1995717);
   gre->SetPointError(4,0,0.07074158);
   gre->SetPoint(5,185,-0.1673142);
   gre->SetPointError(5,0,0.07219145);
   gre->SetPoint(6,195,-0.2433837);
   gre->SetPointError(6,0,0.06140647);
   gre->SetPoint(7,205,-0.2709518);
   gre->SetPointError(7,0,0.05699148);
   gre->SetPoint(8,215,-0.3112561);
   gre->SetPointError(8,0,0.04969854);
   gre->SetPoint(9,225,-0.3132842);
   gre->SetPointError(9,0,0.0430889);
   gre->SetPoint(10,235,-0.2697395);
   gre->SetPointError(10,0,0.0378876);
   gre->SetPoint(11,245,-0.1959045);
   gre->SetPointError(11,0,0.03130844);
   gre->SetPoint(12,255,-0.1517979);
   gre->SetPointError(12,0,0.02417455);
   gre->SetPoint(13,265,-0.0352317);
   gre->SetPointError(13,0,0.01879341);
   gre->SetPoint(14,275,-0.1099216);
   gre->SetPointError(14,0,0.05061778);
   
   TH1F *Graph_gr_T20_20_20_1809 = new TH1F("Graph_gr_T20_20_20_1809","",100,121,289);
   Graph_gr_T20_20_20_1809->SetMinimum(-0.3988547);
   Graph_gr_T20_20_20_1809->SetMaximum(0.0559469);
   Graph_gr_T20_20_20_1809->SetDirectory(0);
   Graph_gr_T20_20_20_1809->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_20_20_1809->SetLineColor(ci);
   Graph_gr_T20_20_20_1809->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1809->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1809->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1809->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_1809->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1809->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1809->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1809->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_20_20_1809->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_20_20_1809->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_20_20_1809->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_20_20_1809->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_20_20_1809);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
