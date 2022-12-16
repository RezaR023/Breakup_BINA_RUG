{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Feb 24 12:22:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",577,71,1019,578);
   Canvas_1->Range(100,-0.3945143,310,0.09939132);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_iT11_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.1280267);
   gre->SetPointError(0,0,0.06644696);
   gre->SetPoint(1,145,-0.03117766);
   gre->SetPointError(1,0,0.04825137);
   gre->SetPoint(2,155,-0.06177312);
   gre->SetPointError(2,0,0.03997952);
   gre->SetPoint(3,165,-0.1257378);
   gre->SetPointError(3,0,0.04066719);
   gre->SetPoint(4,175,-0.2171306);
   gre->SetPointError(4,0,0.03397894);
   gre->SetPoint(5,185,-0.2399062);
   gre->SetPointError(5,0,0.02721623);
   gre->SetPoint(6,195,-0.277363);
   gre->SetPointError(6,0,0.01895275);
   gre->SetPoint(7,205,-0.3000939);
   gre->SetPointError(7,0,0.01210279);
   gre->SetPoint(8,215,-0.2821388);
   gre->SetPointError(8,0,0.007971073);
   gre->SetPoint(9,225,-0.2702691);
   gre->SetPointError(9,0,0.006210984);
   gre->SetPoint(10,235,-0.2651921);
   gre->SetPointError(10,0,0.01007554);
   gre->SetPoint(11,245,-0.263315);
   gre->SetPointError(11,0,0.00760456);
   gre->SetPoint(12,255,-0.1663894);
   gre->SetPointError(12,0,0.00760456);
   gre->SetPoint(13,265,-0.1663894);
   gre->SetPointError(13,0,0.00760456);
   gre->SetPoint(14,275,-0.1663894);
   gre->SetPointError(14,0,0.00760456);
   
   TH1F *Graph_gr_iT11_28_28_18010 = new TH1F("Graph_gr_iT11_28_28_18010","",100,121,289);
   Graph_gr_iT11_28_28_18010->SetMinimum(-0.3451238);
   Graph_gr_iT11_28_28_18010->SetMaximum(0.05000076);
   Graph_gr_iT11_28_28_18010->SetDirectory(0);
   Graph_gr_iT11_28_28_18010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_28_28_18010->SetLineColor(ci);
   Graph_gr_iT11_28_28_18010->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18010->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18010->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18010->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18010->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18010->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18010->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18010->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_28_28_18010->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_28_28_18010->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_28_28_18010->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_28_28_18010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_28_28_18010);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
