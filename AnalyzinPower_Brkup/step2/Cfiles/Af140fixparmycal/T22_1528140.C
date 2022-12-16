{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Feb 23 09:19:04 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",467,71,1129,578);
   Canvas_1->Range(100,-6.02425,310,6.568615);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_T22_15_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,135,-0.006589786);
   gre->SetPointError(0,0,0.02908625);
   gre->SetPoint(1,145,-0.006589786);
   gre->SetPointError(1,0,0.02908625);
   gre->SetPoint(2,155,0.2721824);
   gre->SetPointError(2,0,4.197621);
   gre->SetPoint(3,165,-0.003966348);
   gre->SetPointError(3,0,0.04363675);
   gre->SetPoint(4,175,-0.1056787);
   gre->SetPointError(4,0,0.02662573);
   gre->SetPoint(5,185,-0.1254258);
   gre->SetPointError(5,0,0.02315565);
   gre->SetPoint(6,195,-0.0818946);
   gre->SetPointError(6,0,0.02062047);
   gre->SetPoint(7,205,-0.06593777);
   gre->SetPointError(7,0,0.01995776);
   gre->SetPoint(8,215,-0.06501379);
   gre->SetPointError(8,0,0.0200104);
   gre->SetPoint(9,225,0.008395142);
   gre->SetPointError(9,0,0.02051235);
   gre->SetPoint(10,235,0.03168835);
   gre->SetPointError(10,0,0.02306439);
   gre->SetPoint(11,245,0.006902994);
   gre->SetPointError(11,0,0.02568038);
   gre->SetPoint(12,255,-0.0450663);
   gre->SetPointError(12,0,0.02462974);
   gre->SetPoint(13,265,0.04140897);
   gre->SetPointError(13,0,0.02442499);
   gre->SetPoint(14,275,0.006145149);
   gre->SetPointError(14,0,0.02136002);
   
   TH1F *Graph_gr_T22_15_28_14035 = new TH1F("Graph_gr_T22_15_28_14035","",100,121,289);
   Graph_gr_T22_15_28_14035->SetMinimum(-4.764963);
   Graph_gr_T22_15_28_14035->SetMaximum(5.309328);
   Graph_gr_T22_15_28_14035->SetDirectory(0);
   Graph_gr_T22_15_28_14035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_15_28_14035->SetLineColor(ci);
   Graph_gr_T22_15_28_14035->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_14035->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_14035->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_14035->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_14035->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_14035->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_14035->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_14035->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_15_28_14035->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_15_28_14035->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_15_28_14035->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_15_28_14035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_15_28_14035);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
