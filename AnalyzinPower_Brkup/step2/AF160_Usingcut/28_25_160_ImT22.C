{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:34:38 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(125,-0.138431,245,0.05335298);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_ImT22_28_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.01965969);
   gre->SetPointError(0,0,0.035402);
   gre->SetPoint(1,155,-0.0192077);
   gre->SetPointError(1,0,0.03389207);
   gre->SetPoint(2,165,-0.06965893);
   gre->SetPointError(2,0,0.0368081);
   gre->SetPoint(3,175,-0.06881151);
   gre->SetPointError(3,0,0.03254544);
   gre->SetPoint(4,185,-0.00973423);
   gre->SetPointError(4,0,0.02780161);
   gre->SetPoint(5,195,-0.02565844);
   gre->SetPointError(5,0,0.0250466);
   gre->SetPoint(6,205,0.001352151);
   gre->SetPointError(6,0,0.02003682);
   gre->SetPoint(7,215,-0.04384486);
   gre->SetPointError(7,0,0.01533891);
   gre->SetPoint(8,225,-0.05771423);
   gre->SetPointError(8,0,0.01177196);
   
   TH1F *Graph_gr_ImT22_28_25_160158 = new TH1F("Graph_gr_ImT22_28_25_160158","",100,137,233);
   Graph_gr_ImT22_28_25_160158->SetMinimum(-0.1192526);
   Graph_gr_ImT22_28_25_160158->SetMaximum(0.03417458);
   Graph_gr_ImT22_28_25_160158->SetDirectory(0);
   Graph_gr_ImT22_28_25_160158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImT22_28_25_160158->SetLineColor(ci);
   Graph_gr_ImT22_28_25_160158->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_160158->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_160158->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_160158->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_160158->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_160158->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_160158->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_160158->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImT22_28_25_160158->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImT22_28_25_160158->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImT22_28_25_160158->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImT22_28_25_160158->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImT22_28_25_160158);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
