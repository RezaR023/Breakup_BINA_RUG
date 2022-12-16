{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 22:38:00 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(140,-0.1156358,290,0.1049787);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(11);
   gre->SetName("gr_ImT22_20_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,0.01215165);
   gre->SetPointError(0,0,0.05605797);
   gre->SetPoint(1,175,-0.03705743);
   gre->SetPointError(1,0,0.03855097);
   gre->SetPoint(2,185,0.02027001);
   gre->SetPointError(2,0,0.039259);
   gre->SetPoint(3,195,-0.007735017);
   gre->SetPointError(3,0,0.03378749);
   gre->SetPoint(4,205,-0.002213373);
   gre->SetPointError(4,0,0.02997705);
   gre->SetPoint(5,215,-0.01696599);
   gre->SetPointError(5,0,0.02547072);
   gre->SetPoint(6,225,0.007904991);
   gre->SetPointError(6,0,0.02281135);
   gre->SetPoint(7,235,-0.05915796);
   gre->SetPointError(7,0,0.01926984);
   gre->SetPoint(8,245,0.002667278);
   gre->SetPointError(8,0,0.01571773);
   gre->SetPoint(9,255,-0.06490194);
   gre->SetPointError(9,0,0.01396474);
   gre->SetPoint(10,265,-0.007456082);
   gre->SetPointError(10,0,0.0137919);
   
   TH1F *Graph_gr_ImT22_20_20_18055 = new TH1F("Graph_gr_ImT22_20_20_18055","",100,155,275);
   Graph_gr_ImT22_20_20_18055->SetMinimum(-0.09357431);
   Graph_gr_ImT22_20_20_18055->SetMaximum(0.08291725);
   Graph_gr_ImT22_20_20_18055->SetDirectory(0);
   Graph_gr_ImT22_20_20_18055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_20_18055->SetLineColor(ci);
   Graph_gr_ImT22_20_20_18055->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_18055->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_18055->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_18055->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_18055->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_18055->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_18055->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_18055->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_20_18055->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_20_18055->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_20_18055->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_20_18055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_20_18055);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
