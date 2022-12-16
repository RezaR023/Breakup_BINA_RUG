{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Mar 24 23:15:59 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.2050568,257.5,0.2520479);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_ImiT11_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,0.08792686);
   gre->SetPointError(0,0,0.08793694);
   gre->SetPoint(1,155,-0.04999933);
   gre->SetPointError(1,0,0.07887338);
   gre->SetPoint(2,165,0.01807493);
   gre->SetPointError(2,0,0.07210226);
   gre->SetPoint(3,175,-0.03540785);
   gre->SetPointError(3,0,0.06036909);
   gre->SetPoint(4,185,0.03079171);
   gre->SetPointError(4,0,0.05967848);
   gre->SetPoint(5,195,-0.07379748);
   gre->SetPointError(5,0,0.04638788);
   gre->SetPoint(6,205,-0.005694951);
   gre->SetPointError(6,0,0.03806148);
   gre->SetPoint(7,215,0.02951409);
   gre->SetPointError(7,0,0.02934192);
   gre->SetPoint(8,225,-0.005028054);
   gre->SetPointError(8,0,0.02134353);
   gre->SetPoint(9,235,-0.01191542);
   gre->SetPointError(9,0,0.01337749);
   
   TH1F *Graph_gr_ImiT11_28_15_18064 = new TH1F("Graph_gr_ImiT11_28_15_18064","",100,136,244);
   Graph_gr_ImiT11_28_15_18064->SetMinimum(-0.1593464);
   Graph_gr_ImiT11_28_15_18064->SetMaximum(0.2063375);
   Graph_gr_ImiT11_28_15_18064->SetDirectory(0);
   Graph_gr_ImiT11_28_15_18064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_ImiT11_28_15_18064->SetLineColor(ci);
   Graph_gr_ImiT11_28_15_18064->GetXaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_18064->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_18064->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_18064->GetXaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_18064->GetYaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_18064->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_18064->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_18064->GetYaxis()->SetTitleFont(42);
   Graph_gr_ImiT11_28_15_18064->GetZaxis()->SetLabelFont(42);
   Graph_gr_ImiT11_28_15_18064->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_ImiT11_28_15_18064->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_ImiT11_28_15_18064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_ImiT11_28_15_18064);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
