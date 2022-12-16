{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb 20 10:17:16 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",481,71,940,578);
   Canvas_1->Range(115.9557,-0.7905723,238.4143,0.1485821);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_28_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,136.3655,-0.1033324);
   gre->SetPointError(0,0,0.09538871);
   gre->SetPoint(1,145.4365,-0.131734);
   gre->SetPointError(1,0,0.08882664);
   gre->SetPoint(2,154.5075,-0.1091294);
   gre->SetPointError(2,0,0.09114109);
   gre->SetPoint(3,163.5785,-0.2828177);
   gre->SetPointError(3,0,0.08773026);
   gre->SetPoint(4,172.6495,-0.2819645);
   gre->SetPointError(4,0,0.0938677);
   gre->SetPoint(5,181.7205,-0.2088392);
   gre->SetPointError(5,0,0.104056);
   gre->SetPoint(6,190.7915,-0.3958883);
   gre->SetPointError(6,0,0.0925198);
   gre->SetPoint(7,199.8625,-0.2958306);
   gre->SetPointError(7,0,0.09755654);
   gre->SetPoint(8,208.9335,-0.5502777);
   gre->SetPointError(8,0,0.08376887);
   gre->SetPoint(9,218.0045,-0.4261572);
   gre->SetPointError(9,0,0.07712418);
   
   TH1F *Graph_gr_T20_28_28_1408 = new TH1F("Graph_gr_T20_28_28_1408","",100,128.2016,226.1684);
   Graph_gr_T20_28_28_1408->SetMinimum(-0.6966568);
   Graph_gr_T20_28_28_1408->SetMaximum(0.05466665);
   Graph_gr_T20_28_28_1408->SetDirectory(0);
   Graph_gr_T20_28_28_1408->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T20_28_28_1408->SetLineColor(ci);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1408->GetXaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1408->GetYaxis()->SetTitleFont(42);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetLabelFont(42);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T20_28_28_1408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T20_28_28_1408);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
