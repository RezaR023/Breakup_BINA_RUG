{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed May  2 11:05:07 2018) by ROOT version5.34/28
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",446,71,975,578);
   gStyle->SetOptStat(0);
   Canvas_1->ToggleEventStatus();
   Canvas_1->Range(5.201449,-18.54532,189.5509,166.9079);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TCutG *cutg = new TCutG("cut27the9",5);
   cutg->SetVarX("");
   cutg->SetVarY("");
   cutg->SetTitle("Graph");
   cutg->SetFillColor(1);
   cutg->SetPoint(0,46.57437,0);
   cutg->SetPoint(1,35.92636,0);
   cutg->SetPoint(2,158.826,134.875);
   cutg->SetPoint(3,126.7536,81.776);
   cutg->SetPoint(4,46.57437,0);
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
