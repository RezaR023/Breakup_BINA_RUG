{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:16:50 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(142.5,-0.1403945,277.5,0.1047922);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImT22_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,165,-0.06487505);
   gre->SetPointError(0,0,0.03465499);
   gre->SetPoint(1,175,-0.01576228);
   gre->SetPointError(1,0,0.02948916);
   gre->SetPoint(2,185,-0.02235434);
   gre->SetPointError(2,0,0.02607722);
   gre->SetPoint(3,195,0.02023711);
   gre->SetPointError(3,0,0.02290669);
   gre->SetPoint(4,205,0.04455572);
   gre->SetPointError(4,0,0.0185006);
   gre->SetPoint(5,215,0.0381857);
   gre->SetPointError(5,0,0.01663114);
   gre->SetPoint(6,225,0.03253065);
   gre->SetPointError(6,0,0.01466101);
   gre->SetPoint(7,235,0.04962563);
   gre->SetPointError(7,0,0.01430213);
   gre->SetPoint(8,245,0.01476405);
   gre->SetPointError(8,0,0.01351584);
   gre->SetPoint(9,255,0.02450348);
   gre->SetPointError(9,0,0.01461946);
   
   TH1F *Graph_gr_ImT22_20_25_160118 = new TH1F("Graph_gr_ImT22_20_25_160118","",100,156,264);
   Graph_gr_ImT22_20_25_160118->SetMinimum(-0.1158758);
   Graph_gr_ImT22_20_25_160118->SetMaximum(0.08027354);
   Graph_gr_ImT22_20_25_160118->SetDirectory(0);
   Graph_gr_ImT22_20_25_160118->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_20_25_160118->SetLineColor(ci);
   Graph_gr_ImT22_20_25_160118->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_160118->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_160118->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_160118->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_160118->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_160118->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_160118->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_160118->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_20_25_160118->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_20_25_160118->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_20_25_160118->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_20_25_160118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_20_25_160118);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
