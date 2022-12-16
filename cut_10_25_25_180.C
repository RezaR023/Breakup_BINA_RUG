{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May  2 11:00:57 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",446,71,975,578);
   gStyle->SetOptStat(0);
   Canvas_1->ToggleEventStatus();
   Canvas_1->Range(14.88596,-17.77571,205.0164,159.9814);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TCutG *cutg = new TCutG("cut27the10",5);
   cutg->SetVarX("");
   cutg->SetVarY("");
   cutg->SetTitle("Graph");
   cutg->SetFillColor(1);
   cutg->SetPoint(0,56.39786,0);
   cutg->SetPoint(1,46.57437,0);
   cutg->SetPoint(2,173.328,129.2779);
   cutg->SetPoint(3,130.8781,67.338);
   cutg->SetPoint(4,56.39786,0);
   cutg->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4546597,0.9343502,0.5453403,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
