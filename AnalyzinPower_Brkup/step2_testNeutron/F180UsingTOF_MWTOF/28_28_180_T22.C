{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May 30 15:53:31 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",673,71,748,578);
   Canvas_1->Range(122.5,-0.2528019,257.5,-0.04288907);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_28_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,145,-0.1903648);
   gre->SetPointError(0,0,0.0274516);
   gre->SetPoint(1,155,-0.106318);
   gre->SetPointError(1,0,0.0267263);
   gre->SetPoint(2,165,-0.1220533);
   gre->SetPointError(2,0,0.02300395);
   gre->SetPoint(3,175,-0.1234839);
   gre->SetPointError(3,0,0.01772572);
   gre->SetPoint(4,185,-0.1058993);
   gre->SetPointError(4,0,0.0129736);
   gre->SetPoint(5,195,-0.08664653);
   gre->SetPointError(5,0,0.00877199);
   gre->SetPoint(6,205,-0.09248423);
   gre->SetPointError(6,0,0.006228926);
   gre->SetPoint(7,215,-0.09812946);
   gre->SetPointError(7,0,0.004781051);
   gre->SetPoint(8,225,-0.1103085);
   gre->SetPointError(8,0,0.004914258);
   gre->SetPoint(9,235,-0.1036889);
   gre->SetPointError(9,0,0.007684873);
   
   TH1F *Graph_gr_T22_28_28_18013 = new TH1F("Graph_gr_T22_28_28_18013","",100,136,244);
   Graph_gr_T22_28_28_18013->SetMinimum(-0.2318106);
   Graph_gr_T22_28_28_18013->SetMaximum(-0.06388035);
   Graph_gr_T22_28_28_18013->SetDirectory(0);
   Graph_gr_T22_28_28_18013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gr_T22_28_28_18013->SetLineColor(ci);
   Graph_gr_T22_28_28_18013->GetXaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18013->GetXaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18013->GetXaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18013->GetXaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18013->GetYaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18013->GetYaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18013->GetYaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18013->GetYaxis()->SetTitleFont(42);
   Graph_gr_T22_28_28_18013->GetZaxis()->SetLabelFont(42);
   Graph_gr_T22_28_28_18013->GetZaxis()->SetLabelSize(0.035);
   Graph_gr_T22_28_28_18013->GetZaxis()->SetTitleSize(0.035);
   Graph_gr_T22_28_28_18013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gr_T22_28_28_18013);
   
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
