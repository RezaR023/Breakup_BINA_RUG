{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat May  5 23:49:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",613,71,808,578);
   Canvas_1->Range(122.5,-0.08931013,257.5,0.08823762);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_25_28_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.0112052);
   gre->SetPointError(0,0,0.02559752);
   gre->SetPoint(1,155,-0.00647703);
   gre->SetPointError(1,0,0.02423978);
   gre->SetPoint(2,165,-0.03504135);
   gre->SetPointError(2,0,0.023218);
   gre->SetPoint(3,175,-0.03906412);
   gre->SetPointError(3,0,0.02065471);
   gre->SetPoint(4,185,0.004463843);
   gre->SetPointError(4,0,0.01710715);
   gre->SetPoint(5,195,0.02594772);
   gre->SetPointError(5,0,0.01406254);
   gre->SetPoint(6,205,0.04643638);
   gre->SetPointError(6,0,0.01220995);
   gre->SetPoint(7,215,0.01552753);
   gre->SetPointError(7,0,0.01121469);
   gre->SetPoint(8,225,0.005465452);
   gre->SetPointError(8,0,0.01203916);
   gre->SetPoint(9,235,0.01077408);
   gre->SetPointError(9,0,0.01383761);
   
   TH1F *Graph_gr_ImT22_25_28_16077 = new TH1F("Graph_gr_ImT22_25_28_16077","",100,136,244);
   Graph_gr_ImT22_25_28_16077->SetMinimum(-0.07155535);
   Graph_gr_ImT22_25_28_16077->SetMaximum(0.07048284);
   Graph_gr_ImT22_25_28_16077->SetDirectory(0);
   Graph_gr_ImT22_25_28_16077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_25_28_16077->SetLineColor(ci);
   Graph_gr_ImT22_25_28_16077->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_16077->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_16077->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_16077->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_16077->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_16077->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_16077->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_16077->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_25_28_16077->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_25_28_16077->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_25_28_16077->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_25_28_16077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_25_28_16077);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
