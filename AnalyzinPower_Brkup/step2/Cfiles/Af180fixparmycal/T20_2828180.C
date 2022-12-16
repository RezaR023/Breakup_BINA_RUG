{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Feb 22 17:03:23 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",464,71,1132,578);
   Canvas_1->Range(100,-0.5877399,310,0.4097224);
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
   gre->SetPoint(0,135,0.004514927);
   gre->SetPointError(0,0,0.08812126);
   gre->SetPoint(1,145,0.1725666);
   gre->SetPointError(1,0,0.07091211);
   gre->SetPoint(2,155,-0.06897217);
   gre->SetPointError(2,0,0.05878563);
   gre->SetPoint(3,165,-0.05926775);
   gre->SetPointError(3,0,0.05597308);
   gre->SetPoint(4,175,-0.2183608);
   gre->SetPointError(4,0,0.04661042);
   gre->SetPoint(5,185,-0.2846879);
   gre->SetPointError(5,0,0.03542476);
   gre->SetPoint(6,195,-0.3670798);
   gre->SetPointError(6,0,0.02343496);
   gre->SetPoint(7,205,-0.3913618);
   gre->SetPointError(7,0,0.01499886);
   gre->SetPoint(8,215,-0.3740958);
   gre->SetPointError(8,0,0.009932368);
   gre->SetPoint(9,225,-0.3948252);
   gre->SetPointError(9,0,0.007777808);
   gre->SetPoint(10,235,-0.4082993);
   gre->SetPointError(10,0,0.01283313);
   gre->SetPoint(11,245,-0.4118801);
   gre->SetPointError(11,0,0.009616097);
   gre->SetPoint(12,255,-0.02635914);
   gre->SetPointError(12,0,0.009616097);
   gre->SetPoint(13,265,-0.02635914);
   gre->SetPointError(13,0,0.009616097);
   gre->SetPoint(14,275,-0.02635914);
   gre->SetPointError(14,0,0.009616097);
   
   TH1F *Graph_gr_T20_28_28_1802 = new TH1F("Graph_gr_T20_28_28_1802","",100,121,289);
   Graph_gr_T20_28_28_1802->SetMinimum(-0.4879937);
   Graph_gr_T20_28_28_1802->SetMaximum(0.3099762);
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
