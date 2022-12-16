{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 20:42:15 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,983,578);
   Canvas_1->Range(132.5,-0.1536012,267.5,0.1509633);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,-0.01061669);
   gre->SetPointError(0,0,0.03362199);
   gre->SetPoint(1,165,-0.0673092);
   gre->SetPointError(1,0,0.03553124);
   gre->SetPoint(2,175,-0.04515437);
   gre->SetPointError(2,0,0.03792961);
   gre->SetPoint(3,185,0.02042247);
   gre->SetPointError(3,0,0.03566364);
   gre->SetPoint(4,195,-0.03237707);
   gre->SetPointError(4,0,0.03409433);
   gre->SetPoint(5,205,0.03987505);
   gre->SetPointError(5,0,0.02903936);
   gre->SetPoint(6,215,0.07168871);
   gre->SetPointError(6,0,0.02469755);
   gre->SetPoint(7,225,0.07966279);
   gre->SetPointError(7,0,0.0205398);
   gre->SetPoint(8,235,0.05971674);
   gre->SetPointError(8,0,0.01591097);
   gre->SetPoint(9,245,0.05119145);
   gre->SetPointError(9,0,0.01863833);
   
   TH1F *Graph_gr_ImiT11_25_20_16026 = new TH1F("Graph_gr_ImiT11_25_20_16026","",100,146,254);
   Graph_gr_ImiT11_25_20_16026->SetMinimum(-0.1231447);
   Graph_gr_ImiT11_25_20_16026->SetMaximum(0.1205069);
   Graph_gr_ImiT11_25_20_16026->SetDirectory(0);
   Graph_gr_ImiT11_25_20_16026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_25_20_16026->SetLineColor(ci);
   Graph_gr_ImiT11_25_20_16026->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_16026->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_16026->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_16026->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_16026->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_16026->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_16026->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_16026->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_25_20_16026->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_25_20_16026->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_25_20_16026->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_25_20_16026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_25_20_16026);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
