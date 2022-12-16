{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:22:43 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(132.5,-0.1708735,267.5,0.3043779);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_25_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,155,0.1160007);
   gre->SetPointError(0,0,0.06722648);
   gre->SetPoint(1,165,0.07066504);
   gre->SetPointError(1,0,0.06666965);
   gre->SetPoint(2,175,0.1551505);
   gre->SetPointError(2,0,0.07001881);
   gre->SetPoint(3,185,-0.002008154);
   gre->SetPointError(3,0,0.06447456);
   gre->SetPoint(4,195,-0.03223734);
   gre->SetPointError(4,0,0.05942757);
   gre->SetPoint(5,205,-0.01297176);
   gre->SetPointError(5,0,0.05371159);
   gre->SetPoint(6,215,0.0587603);
   gre->SetPointError(6,0,0.04540693);
   gre->SetPoint(7,225,0.1213165);
   gre->SetPointError(7,0,0.03708512);
   gre->SetPoint(8,235,0.09327877);
   gre->SetPointError(8,0,0.02673453);
   gre->SetPoint(9,245,0.05706395);
   gre->SetPointError(9,0,0.02199356);
   
   TH1F *Graph_gr_T20_25_20_160131 = new TH1F("Graph_gr_T20_25_20_160131","",100,146,254);
   Graph_gr_T20_25_20_160131->SetMinimum(-0.1233483);
   Graph_gr_T20_25_20_160131->SetMaximum(0.2568527);
   Graph_gr_T20_25_20_160131->SetDirectory(0);
   Graph_gr_T20_25_20_160131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_25_20_160131->SetLineColor(ci);
   Graph_gr_T20_25_20_160131->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_160131->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_160131->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_160131->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_160131->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_160131->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_160131->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_160131->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_25_20_160131->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_25_20_160131->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_25_20_160131->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_25_20_160131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_25_20_160131);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
