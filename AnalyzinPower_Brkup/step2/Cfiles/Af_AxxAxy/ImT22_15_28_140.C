{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Mar 14 18:42:48 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",580,71,841,578);
   Canvas_1->Range(100,-0.1554969,310,0.09247169);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_ImT22_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,0.002267004);
   gre->SetPointError(0,0,0.03226012);
   gre->SetPoint(1,145,0.002267004);
   gre->SetPointError(1,0,0.03226012);
   gre->SetPoint(2,155,0.002267004);
   gre->SetPointError(2,0,0.03226012);
   gre->SetPoint(3,165,-0.0663391);
   gre->SetPointError(3,0,0.04782974);
   gre->SetPoint(4,175,-0.06920403);
   gre->SetPointError(4,0,0.02805782);
   gre->SetPoint(5,185,-0.06361917);
   gre->SetPointError(5,0,0.02432153);
   gre->SetPoint(6,195,-0.0291413);
   gre->SetPointError(6,0,0.02074671);
   gre->SetPoint(7,205,0.0001028808);
   gre->SetPointError(7,0,0.0210685);
   gre->SetPoint(8,215,-0.007104362);
   gre->SetPointError(8,0,0.02125023);
   gre->SetPoint(9,225,0.02738505);
   gre->SetPointError(9,0,0.02375853);
   gre->SetPoint(10,235,-0.03882009);
   gre->SetPointError(10,0,0.02554332);
   gre->SetPoint(11,245,0.01380602);
   gre->SetPointError(11,0,0.03096841);
   gre->SetPoint(12,255,-0.07477702);
   gre->SetPointError(12,0,0.02790385);
   gre->SetPoint(13,265,-0.08088537);
   gre->SetPointError(13,0,0.02601411);
   gre->SetPoint(14,275,-0.08782429);
   gre->SetPointError(14,0,0.02356124);
   
   TH1F *Graph_gr_ImT22_15_28_14024 = new TH1F("Graph_gr_ImT22_15_28_14024","",100,121,289);
   Graph_gr_ImT22_15_28_14024->SetMinimum(-0.1307001);
   Graph_gr_ImT22_15_28_14024->SetMaximum(0.06767483);
   Graph_gr_ImT22_15_28_14024->SetDirectory(0);
   Graph_gr_ImT22_15_28_14024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_15_28_14024->SetLineColor(ci);
   Graph_gr_ImT22_15_28_14024->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_14024->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_14024->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_14024->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_14024->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_14024->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_14024->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_14024->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_15_28_14024->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_15_28_14024->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_15_28_14024->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_15_28_14024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_15_28_14024);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
