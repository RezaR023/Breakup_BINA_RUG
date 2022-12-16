{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Feb 19 11:57:37 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(115.9557,-0.2265465,238.4143,0.2447757);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,136.3655,-0.03545324);
   gre->SetPointError(0,0,0.05859504);
   gre->SetPoint(1,145.4365,-0.09542624);
   gre->SetPointError(1,0,0.05256657);
   gre->SetPoint(2,154.5075,-0.003037036);
   gre->SetPointError(2,0,0.05593567);
   gre->SetPoint(3,163.5785,0.05854312);
   gre->SetPointError(3,0,0.05295478);
   gre->SetPoint(4,172.6495,0.1044504);
   gre->SetPointError(4,0,0.05935642);
   gre->SetPoint(5,181.7205,0.0319732);
   gre->SetPointError(5,0,0.06343961);
   gre->SetPoint(6,190.7915,0.09400741);
   gre->SetPointError(6,0,0.05915557);
   gre->SetPoint(7,199.8625,0.109373);
   gre->SetPointError(7,0,0.05684901);
   gre->SetPoint(8,208.9335,0.01698445);
   gre->SetPointError(8,0,0.05705383);
   gre->SetPoint(9,218.0045,-0.08598343);
   gre->SetPointError(9,0,0.04925696);
   
   TH1F *Graph_gr_T22_28_28_1407 = new TH1F("Graph_gr_T22_28_28_1407","",100,128.2016,226.1684);
   Graph_gr_T22_28_28_1407->SetMinimum(-0.1794143);
   Graph_gr_T22_28_28_1407->SetMaximum(0.1976435);
   Graph_gr_T22_28_28_1407->SetDirectory(0);
   Graph_gr_T22_28_28_1407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_1407->SetLineColor(ci);
   Graph_gr_T22_28_28_1407->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1407->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1407->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1407->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1407->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1407->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1407->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1407->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_1407->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_1407->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_1407->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_1407);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
