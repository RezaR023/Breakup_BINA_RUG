{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:17:24 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.5857098,310,0.2972674);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T20_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.06288561);
   gre->SetPointError(0,0,0.07826017);
   gre->SetPoint(1,145,0.09161728);
   gre->SetPointError(1,0,0.05848729);
   gre->SetPoint(2,155,-0.09951257);
   gre->SetPointError(2,0,0.05208085);
   gre->SetPoint(3,165,-0.03223387);
   gre->SetPointError(3,0,0.05076968);
   gre->SetPoint(4,175,-0.2770845);
   gre->SetPointError(4,0,0.03622551);
   gre->SetPoint(5,185,-0.3778762);
   gre->SetPointError(5,0,0.02459489);
   gre->SetPoint(6,195,-0.3705939);
   gre->SetPointError(6,0,0.01607678);
   gre->SetPoint(7,205,-0.3799408);
   gre->SetPointError(7,0,0.01088416);
   gre->SetPoint(8,215,-0.3936535);
   gre->SetPointError(8,0,0.008757127);
   gre->SetPoint(9,225,-0.4011044);
   gre->SetPointError(9,0,0.01010993);
   gre->SetPoint(10,235,-0.4178043);
   gre->SetPointError(10,0,0.02074257);
   gre->SetPoint(11,245,-0.4213918);
   gre->SetPointError(11,0,0.01581855);
   gre->SetPoint(12,255,-0.02635914);
   gre->SetPointError(12,0,0.01581855);
   gre->SetPoint(13,265,-0.02635914);
   gre->SetPointError(13,0,0.01581855);
   gre->SetPoint(14,275,-0.02635914);
   gre->SetPointError(14,0,0.01581855);
   
   TH1F *Graph_gr_T20_28_28_1802 = new TH1F("Graph_gr_T20_28_28_1802","",100,121,289);
   Graph_gr_T20_28_28_1802->SetMinimum(-0.497412);
   Graph_gr_T20_28_28_1802->SetMaximum(0.2089697);
   Graph_gr_T20_28_28_1802->SetDirectory(0);
   Graph_gr_T20_28_28_1802->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1802->SetLineColor(ci);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1802->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1802);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
