{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Mar 25 00:23:56 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",567,71,1029,578);
   Canvas_1->Range(122.5,-0.3222911,257.5,0.06489219);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_25_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.04596714);
   gre->SetPointError(0,0,0.04632877);
   gre->SetPoint(1,155,-0.08566609);
   gre->SetPointError(1,0,0.03527582);
   gre->SetPoint(2,165,-0.1784792);
   gre->SetPointError(2,0,0.03928847);
   gre->SetPoint(3,175,-0.1499596);
   gre->SetPointError(3,0,0.03826991);
   gre->SetPoint(4,185,-0.1365234);
   gre->SetPointError(4,0,0.03612545);
   gre->SetPoint(5,195,-0.1890509);
   gre->SetPointError(5,0,0.03163073);
   gre->SetPoint(6,205,-0.1867891);
   gre->SetPointError(6,0,0.02675283);
   gre->SetPoint(7,215,-0.2037862);
   gre->SetPointError(7,0,0.02170431);
   gre->SetPoint(8,225,-0.2404038);
   gre->SetPointError(8,0,0.01735675);
   gre->SetPoint(9,235,-0.1942694);
   gre->SetPointError(9,0,0.01548384);
   
   TH1F *Graph_gr_iT11_25_25_160134 = new TH1F("Graph_gr_iT11_25_25_160134","",100,136,244);
   Graph_gr_iT11_25_25_160134->SetMinimum(-0.2835728);
   Graph_gr_iT11_25_25_160134->SetMaximum(0.02617386);
   Graph_gr_iT11_25_25_160134->SetDirectory(0);
   Graph_gr_iT11_25_25_160134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_iT11_25_25_160134->SetLineColor(ci);
   Graph_gr_iT11_25_25_160134->GetXaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_160134->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_160134->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_160134->GetXaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_25_160134->GetYaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_160134->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_160134->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_160134->GetYaxis()->SetTitleFont(42);
   Graph_gr_iT11_25_25_160134->GetZaxis()->SetLabelFont(42);
   Graph_gr_iT11_25_25_160134->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_iT11_25_25_160134->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_iT11_25_25_160134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_iT11_25_25_160134);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
