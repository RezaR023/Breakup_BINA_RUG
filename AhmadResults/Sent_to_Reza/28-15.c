{
//=========Macro generated from canvas: canvas_12/Cross section and ...
//=========  (Sat Sep 12 07:14:59 2009) by ROOT version5.06/00
   TCanvas *canvas_12 = new TCanvas("canvas_12", "Cross section and ...",4,21,1202,820);
   gStyle->SetOptStat(0);
   canvas_12->Range(0,0,1,1);
   canvas_12->SetFillColor(10);
   canvas_12->SetBorderSize(2);
   canvas_12->SetFrameFillColor(0);
   TLatex *   tex = new TLatex(0.48,0.042,"S [MeV]");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.05,0.72,"#frac{d^{5}#sigma}{d#Omega_{1}d#Omega_{2}dS} [#frac{#mub}{sr^{2} MeV}]");
   tex->SetTextSize(0.029484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.05,0.6,"iT_{11}");
   tex->SetTextSize(0.0329484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.05,0.39,"T_{20}");
   tex->SetTextSize(0.0329484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.05,0.185,"T_{22}");
   tex->SetTextSize(0.0329484);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.96,"#phi_{12} = 180^{#circ}");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.47,0.96,"#phi_{12} = 160^{#circ}");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.75,0.96,"#phi_{12} = 140^{#circ}");
   tex->SetTextSize(0.0329484);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0.1,0.075,1,0.945);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0,0,1,1);
   pad1->SetFillColor(10);
   pad1->SetBorderSize(2);
   pad1->SetLeftMargin(0.0333333);
   pad1->SetRightMargin(0.03125);
   pad1->SetTopMargin(0.0250522);
   pad1->SetBottomMargin(0.0250522);
   pad1->SetFrameFillColor(0);
  
// ------------>Primitives in pad: pad1_1
   pad1_1 = new TPad("pad1_1", "pad1_1",0,0.737474,0.345139,0.974948);
   pad1_1->Draw();
   pad1_1->cd();
   pad1_1->Range(84.878,-3,280,0.30103);
   pad1_1->SetFillColor(10);
   pad1_1->SetBorderMode(0);
   pad1_1->SetBorderSize(2);
   pad1_1->SetLogy();
   pad1_1->SetTickx();
   pad1_1->SetTicky();
   pad1_1->SetLeftMargin(0.18);
   pad1_1->SetRightMargin(0);
   pad1_1->SetTopMargin(0);
   pad1_1->SetBottomMargin(0);
   pad1_1->SetFrameFillColor(0);
   
   TH1 *hisCro = new TH2D("hisCro","",15,120,280,2000,1,2000);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.08);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.08);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("gr_Cro_36");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150+5,0.0157312*1000);
   gre->SetPointError(0,0,0.00119308);
   gre->SetPoint(1,160+5,0.0169972*1000);
   gre->SetPointError(1,0,0.00123363);
   gre->SetPoint(2,170+5,0.0216829*1000);
   gre->SetPointError(2,0,0.00138553);
   gre->SetPoint(3,180+5,0.0297406*1000);
   gre->SetPointError(3,0,0.00161342);
   gre->SetPoint(4,190+5,0.0478875*1000);
   gre->SetPointError(4,0,0.00205472);
   gre->SetPoint(5,200+5,0.0623376*1000);
   gre->SetPointError(5,0,0.00234162);
   gre->SetPoint(6,210+5,0.102749*1000);
   gre->SetPointError(6,0,0.00307458);
   gre->SetPoint(7,220+5,0.164681*1000);
   gre->SetPointError(7,0,0.00379229);
   gre->SetPoint(8,230+5,0.25618*1000);
   gre->SetPointError(8,0,0.00471618);
   gre->Draw("sp");
   TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_28_15_180");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,147.1127,13.42076);
   gren->SetPointError(0,0,1.352595);
   gren->SetPoint(1,156.7731,13.42076);
   gren->SetPointError(1,0,1.334997);
   gren->SetPoint(2,166.5513,19.20557);
   gren->SetPointError(2,0,1.685083);
   gren->SetPoint(3,176.2116,19.20557);
   gren->SetPointError(3,0,1.611099);
   gren->SetPoint(4,185.872,23.83342);
   gren->SetPointError(4,0,1.782624);
   gren->SetPoint(5,195.6502,35.40304);
   gren->SetPointError(5,0,2.16764);
   gren->SetPoint(6,205.3106,63.17014);
   gren->SetPointError(6,0,2.796676);
   gren->SetPoint(7,214.9709,92.09421);
   gren->SetPointError(7,0,3.432415);
   gren->SetPoint(8,224.7491,163.8259);
   gren->SetPointError(8,0,4.675569);
   gren->SetPoint(9,234.4095,477.3627);
   gren->SetPointError(9,0,7.75864);
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,147.595,15.01382);
   gre->SetPointError(0,0,1.574323);
   gre->SetPoint(1,153.605,13.02371);
   gre->SetPointError(1,0,1.476849);
   gre->SetPoint(2,159.615,14.32764);
   gre->SetPointError(2,0,1.549157);
   gre->SetPoint(3,165.625,15.68746);
   gre->SetPointError(3,0,1.552802);
   gre->SetPoint(4,171.635,19.14675);
   gre->SetPointError(4,0,1.673352);
   gre->SetPoint(5,177.645,18.82735);
   gre->SetPointError(5,0,1.698162);
   gre->SetPoint(6,183.655,20.38107);
   gre->SetPointError(6,0,1.74989);
   gre->SetPoint(7,189.665,24.38476);
   gre->SetPointError(7,0,1.905595);
   gre->SetPoint(8,195.675,36.02557);
   gre->SetPointError(8,0,2.291302);
   gre->SetPoint(9,201.685,50.92732);
   gre->SetPointError(9,0,2.661378);
   gre->SetPoint(10,207.695,65.11583);
   gre->SetPointError(10,0,3.047084);
   gre->SetPoint(11,213.705,80.68587);
   gre->SetPointError(11,0,3.386033);
   gre->SetPoint(12,219.715,117.2465);
   gre->SetPointError(12,0,4.100731);
   gre->SetPoint(13,225.725,169.704);
   gre->SetPointError(13,0,5.004359);
   gre->SetPoint(14,231.735,312.9421);
   gre->SetPointError(14,0,6.721078);   
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_15_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,147.3,17.88448);
   gre->SetPointError(0,0,1.458816);
   gre->SetPoint(1,157.3,14.25899);
   gre->SetPointError(1,0,1.572102);
   gre->SetPoint(2,167.3,16.8889);
   gre->SetPointError(2,0,1.528397);
   gre->SetPoint(3,177.3,17.84687);
   gre->SetPointError(3,0,1.685589);
   gre->SetPoint(4,187.3,39.81531);
   gre->SetPointError(4,0,1.990289);
   gre->SetPoint(5,197.3,61.39076);
   gre->SetPointError(5,0,2.393781);
   gre->SetPoint(6,207.3,95.2723);
   gre->SetPointError(6,0,2.865631);
   gre->SetPoint(7,217.3,136.3728);
   gre->SetPointError(7,0,3.537546);
   gre->SetPoint(8,227.3,240.7691);
   gre->SetPointError(8,0,4.735899);
   gre->SetPoint(9,237.3,321.0482);
   gre->SetPointError(9,0,5.247858);
   gre->Draw("sp");
   TF1 *phspSC_28_15_180 = new TF1("phspSC_28_15_180","pol2",13,280);
   phspSC_28_15_180->SetFillColor(19);
   phspSC_28_15_180->SetFillStyle(0);
   phspSC_28_15_180->SetLineWidth(2);
   phspSC_28_15_180->SetParameter(0,-0.115975);
   phspSC_28_15_180->SetParError(0,0);
   phspSC_28_15_180->SetParLimits(0,0,0);
   phspSC_28_15_180->SetParameter(1,0.0021628);
   phspSC_28_15_180->SetParError(1,0);
   phspSC_28_15_180->SetParLimits(1,0,0);
   phspSC_28_15_180->SetParameter(2,-5.66463e-06);
   phspSC_28_15_180->SetParError(2,0);
   phspSC_28_15_180->SetParLimits(2,0,0);
   phspSC_28_15_180->Draw("same");
   pad1_1->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_4
   pad1_4 = new TPad("pad1_4", "pad1_4",0,0.5,0.345139,0.737474);
   pad1_4->Draw();
   pad1_4->cd();
   pad1_4->Range(84.878,-0.57,280,0.57);
   pad1_4->SetFillColor(10);
   pad1_4->SetBorderMode(0);
   pad1_4->SetBorderSize(2);
   pad1_4->SetTickx();
   pad1_4->SetTicky();
   pad1_4->SetLeftMargin(0.18);
   pad1_4->SetRightMargin(0);
   pad1_4->SetTopMargin(0);
   pad1_4->SetBottomMargin(0);
   pad1_4->SetFrameFillColor(0);
   
   TH1 *hisT11 = new TH2D("hisT11","",15,120,280,20,-0.57,0.57);
   hisT11->SetStats(0);
   hisT11->GetXaxis()->CenterTitle(true);
   hisT11->GetXaxis()->SetNdivisions(207);
   hisT11->GetXaxis()->SetLabelOffset(0.03);
   hisT11->GetXaxis()->SetLabelSize(0.08);
   hisT11->GetXaxis()->SetTitleOffset(0.9);
   hisT11->GetYaxis()->CenterTitle(true);
   hisT11->GetYaxis()->SetLabelOffset(0.03);
   hisT11->GetYaxis()->SetLabelSize(0.08);
   hisT11->GetYaxis()->SetTitleOffset(0.9);
   hisT11->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_T11_36");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.0557781);
   gre->SetPointError(0,0,0.0692401);
   gre->SetPoint(1,160,0.212763);
   gre->SetPointError(1,0,0.0696198);
   gre->SetPoint(2,170,0.0567046);
   gre->SetPointError(2,0,0.0610665);
   gre->SetPoint(3,180,0.0757091);
   gre->SetPointError(3,0,0.0466221);
   gre->SetPoint(4,190,-0.0621444);
   gre->SetPointError(4,0,0.0390806);
   gre->SetPoint(5,200,-0.0091725);
   gre->SetPointError(5,0,0.0317483);
   gre->SetPoint(6,210,0.0597125);
   gre->SetPointError(6,0,0.0258984);
   gre->SetPoint(7,220,0.123101);
   gre->SetPointError(7,0,0.0212631);
   gre->SetPoint(8,230,0.165022);
   gre->SetPointError(8,0,0.0205696);
   gre->Draw("sp");
   
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_4->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_7
   pad1_7 = new TPad("pad1_7", "pad1_7",0,0.262526,0.345139,0.5);
   pad1_7->Draw();
   pad1_7->cd();
   pad1_7->Range(84.878,-0.57,280,0.57);
   pad1_7->SetFillColor(10);
   pad1_7->SetBorderMode(0);
   pad1_7->SetBorderSize(2);
   pad1_7->SetTickx();
   pad1_7->SetTicky();
   pad1_7->SetLeftMargin(0.18);
   pad1_7->SetRightMargin(0);
   pad1_7->SetTopMargin(0);
   pad1_7->SetBottomMargin(0);
   pad1_7->SetFrameFillColor(0);
   
   TH1 *hisT20 = new TH2D("hisT20","",15,120,280,20,-0.57,0.57);
   hisT20->SetStats(0);
   hisT20->GetXaxis()->CenterTitle(true);
   hisT20->GetXaxis()->SetNdivisions(207);
   hisT20->GetXaxis()->SetLabelOffset(0.03);
   hisT20->GetXaxis()->SetLabelSize(0.08);
   hisT20->GetXaxis()->SetTitleOffset(0.9);
   hisT20->GetYaxis()->CenterTitle(true);
   hisT20->GetYaxis()->SetLabelOffset(0.03);
   hisT20->GetYaxis()->SetLabelSize(0.08);
   hisT20->GetYaxis()->SetTitleOffset(0.9);
   hisT20->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_T20_36");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,0.0120921);
   gre->SetPointError(0,0,0.106334);
   gre->SetPoint(1,159.741,0.112392);
   gre->SetPointError(1,0,0.111249);
   gre->SetPoint(2,170,0.141669);
   gre->SetPointError(2,0,0.0927791);
   gre->SetPoint(3,180,0.221808);
   gre->SetPointError(3,0,0.0775917);
   gre->SetPoint(4,190,0.322233);
   gre->SetPointError(4,0,0.0650997);
   gre->SetPoint(5,200,0.344968);
   gre->SetPointError(5,0,0.056135);
   gre->SetPoint(6,210,0.358909);
   gre->SetPointError(6,0,0.0445528);
   gre->SetPoint(7,220,0.445502);
   gre->SetPointError(7,0,0.0362493);
   gre->SetPoint(8,230,0.48993);
   gre->SetPointError(8,0,0.0325985);
   gre->Draw("sp");
   
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_7->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_10
   pad1_10 = new TPad("pad1_10", "pad1_10",0,0,0.345139,0.262526);
   pad1_10->Draw();
   pad1_10->cd();
   pad1_10->Range(84.878,-0.855,280,0.57);
   pad1_10->SetFillColor(10);
   pad1_10->SetBorderMode(0);
   pad1_10->SetBorderSize(2);
   pad1_10->SetTickx();
   pad1_10->SetTicky();
   pad1_10->SetLeftMargin(0.18);
   pad1_10->SetRightMargin(0);
   pad1_10->SetTopMargin(0);
   pad1_10->SetBottomMargin(0.2);
   pad1_10->SetFrameFillColor(0);
   
   TH1 *hisT22 = new TH2D("hisT22","",15,120,280,20,-0.57,0.57);
   hisT22->SetStats(0);
   hisT22->GetXaxis()->CenterTitle(true);
   hisT22->GetXaxis()->SetNdivisions(207);
   hisT22->GetXaxis()->SetLabelOffset(0.03);
   hisT22->GetXaxis()->SetLabelSize(0.08);
   hisT22->GetXaxis()->SetTitleOffset(0.9);
   hisT22->GetYaxis()->CenterTitle(true);
   hisT22->GetYaxis()->SetLabelOffset(0.03);
   hisT22->GetYaxis()->SetLabelSize(0.08);
   hisT22->GetYaxis()->SetTitleOffset(0.9);
   hisT22->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_T22_36");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.181765);
   gre->SetPointError(0,0,0.0634178);
   gre->SetPoint(1,160,-0.10909);
   gre->SetPointError(1,0,0.0631277);
   gre->SetPoint(2,170,-0.15941);
   gre->SetPointError(2,0,0.0506988);
   gre->SetPoint(3,180,-0.149899);
   gre->SetPointError(3,0,0.0427766);
   gre->SetPoint(4,190,-0.113838);
   gre->SetPointError(4,0,0.0372917);
   gre->SetPoint(5,200,-0.21548);
   gre->SetPointError(5,0,0.0320607);
   gre->SetPoint(6,210,-0.204543);
   gre->SetPointError(6,0,0.0252287);
   gre->SetPoint(7,220,-0.200069);
   gre->SetPointError(7,0,0.0212111);
   gre->SetPoint(8,230,-0.213296);
   gre->SetPointError(8,0,0.0194619);
   gre->Draw("sp");
   
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_10->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_2
   pad1_2 = new TPad("pad1_2", "pad1_2",0.345139,0.737474,0.656944,0.974948);
   pad1_2->Draw();
   pad1_2->cd();
   pad1_2->Range(120,-3,280,0.30103);
   pad1_2->SetFillColor(10);
   pad1_2->SetBorderMode(0);
   pad1_2->SetBorderSize(2);
   pad1_2->SetLogy();
   pad1_2->SetTickx();
   pad1_2->SetTicky();
   pad1_2->SetLeftMargin(0);
   pad1_2->SetRightMargin(0);
   pad1_2->SetTopMargin(0);
   pad1_2->SetBottomMargin(0);
   pad1_2->SetFrameFillColor(0);
   
   TH1 *hisCro = new TH2D("hisCro","",15,120,280,2000,1,2000);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.08);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.08);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_Cro_37");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150+5,0.0312503*1000);
   gre->SetPointError(0,0,0.00167756);
   gre->SetPoint(1,160+5,0.0316722*1000);
   gre->SetPointError(1,0,0.00168587);
   gre->SetPoint(2,170+5,0.0354574*1000);
   gre->SetPointError(2,0,0.00176678);
   gre->SetPoint(3,180+5,0.0463389*1000);
   gre->SetPointError(3,0,0.00201246);
   gre->SetPoint(4,190+5,0.0690676*1000);
   gre->SetPointError(4,0,0.00244521);
   gre->SetPoint(5,200+5,0.086267*1000);
   gre->SetPointError(5,0,0.00272927);
   gre->SetPoint(6,210+5,0.120394*1000);
   gre->SetPointError(6,0,0.00323694);
   gre->SetPoint(7,220+5,0.165872*1000);
   gre->SetPointError(7,0,0.00378415);
   gre->SetPoint(8,230+5,0.180808*1000);
   gre->SetPointError(8,0,0.00397603);
   gre->Draw("sp");
   TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_28_15_160");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,147.1685,21.46506);
   gren->SetPointError(0,0,1.809757);
   gren->SetPoint(1,156.7081,21.46506);
   gren->SetPointError(1,0,1.815072);
   gren->SetPoint(2,166.2477,23.28414);
   gren->SetPointError(2,0,1.898683);
   gren->SetPoint(3,175.8995,34.19858);
   gren->SetPointError(3,0,2.200497);
   gren->SetPoint(4,185.4391,39.6558);
   gren->SetPointError(4,0,2.384206);
   gren->SetPoint(5,194.9787,56.02746);
   gren->SetPointError(5,0,2.673339);
   gren->SetPoint(6,204.6305,79.67542);
   gren->SetPointError(6,0,3.193565);
   gren->SetPoint(7,214.1701,100.5948);
   gren->SetPointError(7,0,3.627017);
   gren->SetPoint(8,223.7097,157.8956);
   gren->SetPointError(8,0,4.736852);
   gren->SetPoint(9,233.3615,375.2749);
   gren->SetPointError(9,0,7.025941);   
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,147.3175,26.51862);
   gre->SetPointError(0,0,1.798314);
   gre->SetPoint(1,157.1925,27.69955);
   gre->SetPointError(1,0,2.09847);
   gre->SetPoint(2,167.0675,21.70983);
   gre->SetPointError(2,0,2.085577);
   gre->SetPoint(3,176.9425,32.40042);
   gre->SetPointError(3,0,2.252683);
   gre->SetPoint(4,186.8175,54.87527);
   gre->SetPointError(4,0,2.449538);
   gre->SetPoint(5,196.6925,80.82363);
   gre->SetPointError(5,0,2.736607);
   gre->SetPoint(6,206.5675,109.2009);
   gre->SetPointError(6,0,3.14794);
   gre->SetPoint(7,216.4425,136.508);
   gre->SetPointError(7,0,3.640011);
   gre->SetPoint(8,226.3175,213.9802);
   gre->SetPointError(8,0,4.595232);
   gre->SetPoint(9,236.1925,234.9897);
   gre->SetPointError(9,0,4.602679);
   gre->Draw("sp");
   TF1 *phspSC_28_15_160 = new TF1("phspSC_28_15_160","pol2",13,280);
   phspSC_28_15_160->SetFillColor(19);
   phspSC_28_15_160->SetFillStyle(0);
   phspSC_28_15_160->SetLineWidth(2);
   phspSC_28_15_160->SetParameter(0,-0.17652);
   phspSC_28_15_160->SetParError(0,0);
   phspSC_28_15_160->SetParLimits(0,0,0);
   phspSC_28_15_160->SetParameter(1,0.00289767);
   phspSC_28_15_160->SetParError(1,0);
   phspSC_28_15_160->SetParLimits(1,0,0);
   phspSC_28_15_160->SetParameter(2,-7.60032e-06);
   phspSC_28_15_160->SetParError(2,0);
   phspSC_28_15_160->SetParLimits(2,0,0);
   phspSC_28_15_160->Draw("same");
   pad1_2->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_5
   pad1_5 = new TPad("pad1_5", "pad1_5",0.345139,0.5,0.656944,0.737474);
   pad1_5->Draw();
   pad1_5->cd();
   pad1_5->Range(120,-0.57,280,0.57);
   pad1_5->SetFillColor(10);
   pad1_5->SetBorderMode(0);
   pad1_5->SetBorderSize(2);
   pad1_5->SetTickx();
   pad1_5->SetTicky();
   pad1_5->SetLeftMargin(0);
   pad1_5->SetRightMargin(0);
   pad1_5->SetTopMargin(0);
   pad1_5->SetBottomMargin(0);
   pad1_5->SetFrameFillColor(0);
   
   TH1 *hisT11 = new TH2D("hisT11","",15,120,280,20,-0.57,0.57);
   hisT11->SetStats(0);
   hisT11->GetXaxis()->CenterTitle(true);
   hisT11->GetXaxis()->SetNdivisions(207);
   hisT11->GetXaxis()->SetLabelOffset(0.03);
   hisT11->GetXaxis()->SetLabelSize(0.08);
   hisT11->GetXaxis()->SetTitleOffset(0.9);
   hisT11->GetYaxis()->CenterTitle(true);
   hisT11->GetYaxis()->SetLabelOffset(0.03);
   hisT11->GetYaxis()->SetLabelSize(0.08);
   hisT11->GetYaxis()->SetTitleOffset(0.9);
   hisT11->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_T11_37");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,0.00780475);
   gre->SetPointError(0,0,0.053881);
   gre->SetPoint(1,160,-0.143169);
   gre->SetPointError(1,0,0.0492475);
   gre->SetPoint(2,170,-0.14599);
   gre->SetPointError(2,0,0.0454965);
   gre->SetPoint(3,180,-0.14458);
   gre->SetPointError(3,0,0.0415024);
   gre->SetPoint(4,190,-0.000378862);
   gre->SetPointError(4,0,0.0350076);
   gre->SetPoint(5,200,0.0205796);
   gre->SetPointError(5,0,0.0306805);
   gre->SetPoint(6,210,0.0410254);
   gre->SetPointError(6,0,0.0261332);
   gre->SetPoint(7,220,0.00692318);
   gre->SetPointError(7,0,0.0223501);
   gre->SetPoint(8,230,0.129453);
   gre->SetPointError(8,0,0.0259865);
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_iT11_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,147.1685,-0.3029537);
   gre->SetPointError(0,0,0.1184418);
   gre->SetPoint(1,156.7455,0.2638943);
   gre->SetPointError(1,0,0.1307543);
   gre->SetPoint(2,166.3225,0.06196667);
   gre->SetPointError(2,0,0.1264405);
   gre->SetPoint(3,175.8995,0.0464871);
   gre->SetPointError(3,0,0.1131173);
   gre->SetPoint(4,185.4765,0.02387794);
   gre->SetPointError(4,0,0.1058531);
   gre->SetPoint(5,195.0535,0.1001048);
   gre->SetPointError(5,0,0.08607151);
   gre->SetPoint(6,204.6305,-0.01425524);
   gre->SetPointError(6,0,0.07502589);
   gre->SetPoint(7,214.2075,0.08458038);
   gre->SetPointError(7,0,0.06693381);
   gre->SetPoint(8,223.7845,-0.03525681);
   gre->SetPointError(8,0,0.05115401);
   gre->SetPoint(9,233.3615,0.1414529);
   gre->SetPointError(9,0,0.04021552);   
   gre->Draw("sp");
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_5->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_8
   pad1_8 = new TPad("pad1_8", "pad1_8",0.345139,0.262526,0.656944,0.5);
   pad1_8->Draw();
   pad1_8->cd();
   pad1_8->Range(120,-0.57,280,0.57);
   pad1_8->SetFillColor(10);
   pad1_8->SetBorderMode(0);
   pad1_8->SetBorderSize(2);
   pad1_8->SetTickx();
   pad1_8->SetTicky();
   pad1_8->SetLeftMargin(0);
   pad1_8->SetRightMargin(0);
   pad1_8->SetTopMargin(0);
   pad1_8->SetBottomMargin(0);
   pad1_8->SetFrameFillColor(0);
   
   TH1 *hisT20 = new TH2D("hisT20","",15,120,280,20,-0.57,0.57);
   hisT20->SetStats(0);
   hisT20->GetXaxis()->CenterTitle(true);
   hisT20->GetXaxis()->SetNdivisions(207);
   hisT20->GetXaxis()->SetLabelOffset(0.03);
   hisT20->GetXaxis()->SetLabelSize(0.08);
   hisT20->GetXaxis()->SetTitleOffset(0.9);
   hisT20->GetYaxis()->CenterTitle(true);
   hisT20->GetYaxis()->SetLabelOffset(0.03);
   hisT20->GetYaxis()->SetLabelSize(0.08);
   hisT20->GetYaxis()->SetTitleOffset(0.9);
   hisT20->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_T20_37");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,0.222345);
   gre->SetPointError(0,0,0.0830238);
   gre->SetPoint(1,160,0.070826);
   gre->SetPointError(1,0,0.0766923);
   gre->SetPoint(2,170,0.111559);
   gre->SetPointError(2,0,0.07074);
   gre->SetPoint(3,180,0.240528);
   gre->SetPointError(3,0,0.0653266);
   gre->SetPoint(4,190,0.138792);
   gre->SetPointError(4,0,0.0531796);
   gre->SetPoint(5,199.41,0.261747);
   gre->SetPointError(5,0,0.0514428);
   gre->SetPoint(6,210,0.344369);
   gre->SetPointError(6,0,0.043129);
   gre->SetPoint(7,220,0.358227);
   gre->SetPointError(7,0,0.036613);
   gre->SetPoint(8,230,0.439856);
   gre->SetPointError(8,0,0.0412088);
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T20_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,147.1685,-0.3180345);
   gre->SetPointError(0,0,0.1561245);
   gre->SetPoint(1,156.7455,-0.04082021);
   gre->SetPointError(1,0,0.1713876);
   gre->SetPoint(2,166.3225,0.08335048);
   gre->SetPointError(2,0,0.1707227);
   gre->SetPoint(3,175.8995,-0.1155064);
   gre->SetPointError(3,0,0.1427357);
   gre->SetPoint(4,185.4765,-0.08475084);
   gre->SetPointError(4,0,0.1318636);
   gre->SetPoint(5,195.0535,0.02730984);
   gre->SetPointError(5,0,0.1206616);
   gre->SetPoint(6,204.6305,0.02496113);
   gre->SetPointError(6,0,0.1020493);
   gre->SetPoint(7,214.2075,0.1345412);
   gre->SetPointError(7,0,0.09065734);
   gre->SetPoint(8,223.7845,0.1214607);
   gre->SetPointError(8,0,0.07247431);
   gre->SetPoint(9,233.3615,0.2023603);
   gre->SetPointError(9,0,0.05624113);   
   gre->Draw("sp");
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_8->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_11
   pad1_11 = new TPad("pad1_11", "pad1_11",0.345139,0,0.656944,0.262526);
   pad1_11->Draw();
   pad1_11->cd();
   pad1_11->Range(120,-0.855,280,0.57);
   pad1_11->SetFillColor(10);
   pad1_11->SetBorderMode(0);
   pad1_11->SetBorderSize(2);
   pad1_11->SetTickx();
   pad1_11->SetTicky();
   pad1_11->SetLeftMargin(0);
   pad1_11->SetRightMargin(0);
   pad1_11->SetTopMargin(0);
   pad1_11->SetBottomMargin(0.2);
   pad1_11->SetFrameFillColor(0);
   
   TH1 *hisT22 = new TH2D("hisT22","",15,120,280,20,-0.57,0.57);
   hisT22->SetStats(0);
   hisT22->GetXaxis()->CenterTitle(true);
   hisT22->GetXaxis()->SetNdivisions(207);
   hisT22->GetXaxis()->SetLabelOffset(0.03);
   hisT22->GetXaxis()->SetLabelSize(0.08);
   hisT22->GetXaxis()->SetTitleOffset(0.9);
   hisT22->GetYaxis()->CenterTitle(true);
   hisT22->GetYaxis()->SetLabelOffset(0.03);
   hisT22->GetYaxis()->SetLabelSize(0.08);
   hisT22->GetYaxis()->SetTitleOffset(0.9);
   hisT22->Draw("");
   
   gre = new TGraphErrors(9);
   gre->SetName("gr_T22_37");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.0738249);
   gre->SetPointError(0,0,0.0489144);
   gre->SetPoint(1,160,-0.116529);
   gre->SetPointError(1,0,0.0449984);
   gre->SetPoint(2,170,-0.166928);
   gre->SetPointError(2,0,0.0426896);
   gre->SetPoint(3,180,-0.189542);
   gre->SetPointError(3,0,0.0379964);
   gre->SetPoint(4,190,-0.176333);
   gre->SetPointError(4,0,0.0300753);
   gre->SetPoint(5,200,-0.0999272);
   gre->SetPointError(5,0,0.0301188);
   gre->SetPoint(6,210,-0.13129);
   gre->SetPointError(6,0,0.025151);
   gre->SetPoint(7,220,-0.171671);
   gre->SetPointError(7,0,0.0214008);
   gre->SetPoint(8,230,-0.126051);
   gre->SetPointError(8,0,0.02401);
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_T22_28_15_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,147.1685,-0.2358984);
   gre->SetPointError(0,0,0.09319293);
   gre->SetPoint(1,156.7455,-0.01373793);
   gre->SetPointError(1,0,0.09726324);
   gre->SetPoint(2,166.3225,-0.1523946);
   gre->SetPointError(2,0,0.09848677);
   gre->SetPoint(3,175.8995,-0.09030324);
   gre->SetPointError(3,0,0.08287719);
   gre->SetPoint(4,185.4765,-0.1001457);
   gre->SetPointError(4,0,0.08826895);
   gre->SetPoint(5,195.0535,-0.1051417);
   gre->SetPointError(5,0,0.07358406);
   gre->SetPoint(6,204.6305,-0.03159081);
   gre->SetPointError(6,0,0.06203067);
   gre->SetPoint(7,214.2075,-0.08387184);
   gre->SetPointError(7,0,0.0546125);
   gre->SetPoint(8,223.7845,-0.126428);
   gre->SetPointError(8,0,0.04425066);
   gre->SetPoint(9,233.3615,-0.1232552);
   gre->SetPointError(9,0,0.03227695);   
   gre->Draw("sp");

   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_11->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_3
   pad1_3 = new TPad("pad1_3", "pad1_3",0.656944,0.737474,0.96875,0.974948);
   pad1_3->Draw();
   pad1_3->cd();
   pad1_3->Range(120,-3,288.421,0.30103);
   pad1_3->SetFillColor(10);
   pad1_3->SetBorderMode(0);
   pad1_3->SetBorderSize(2);
   pad1_3->SetLogy();
   pad1_3->SetTickx();
   pad1_3->SetTicky();
   pad1_3->SetLeftMargin(0);
   pad1_3->SetRightMargin(0.05);
   pad1_3->SetTopMargin(0);
   pad1_3->SetBottomMargin(0);
   pad1_3->SetFrameFillColor(0);
   
   TH1 *hisCro = new TH2D("hisCro","",15,120,280,2000,1,2000);
   hisCro->SetStats(0);
   hisCro->GetXaxis()->CenterTitle(true);
   hisCro->GetXaxis()->SetNdivisions(207);
   hisCro->GetXaxis()->SetLabelOffset(0.03);
   hisCro->GetXaxis()->SetLabelSize(0.08);
   hisCro->GetXaxis()->SetTitleOffset(0.9);
   hisCro->GetYaxis()->CenterTitle(true);
   hisCro->GetYaxis()->SetLabelOffset(0.03);
   hisCro->GetYaxis()->SetLabelSize(0.08);
   hisCro->GetYaxis()->SetTitleOffset(0.9);
   hisCro->Draw("");
   
   gre = new TGraphErrors(8);
   gre->SetName("gr_Cro_38");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150+5,0.0281193*1000);
   gre->SetPointError(0,0,0.00158924);
   gre->SetPoint(1,160+5,0.0227533*1000);
   gre->SetPointError(1,0,0.00142439);
   gre->SetPoint(2,170+5,0.0267444*1000);
   gre->SetPointError(2,0,0.00154154);
   gre->SetPoint(3,180+5,0.0323366*1000);
   gre->SetPointError(3,0,0.00168758);
   gre->SetPoint(4,190+5,0.0328687*1000);
   gre->SetPointError(4,0,0.0016904);
   gre->SetPoint(5,200+5,0.035963*1000);
   gre->SetPointError(5,0,0.00176733);
   gre->SetPoint(6,210+5,0.0333895*1000);
   gre->SetPointError(6,0,0.00169107);
   gre->SetPoint(7,220+5,0.0371099*1000);
   gre->SetPointError(7,0,0.0017913);
   gre->Draw("sp");
   TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_28_15_140");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,147.6652,19.25141);
   gren->SetPointError(0,0,1.824072);
   gren->SetPoint(1,156.8883,21.9544);
   gren->SetPointError(1,0,1.879894);
   gren->SetPoint(2,166.1114,25.78363);
   gren->SetPointError(2,0,1.924442);
   gren->SetPoint(3,175.226,24.20689);
   gren->SetPointError(3,0,1.89228);
   gren->SetPoint(4,184.4492,27.58563);
   gren->SetPointError(4,0,-190.9566);
   gren->SetPoint(5,193.6723,29.61287);
   gren->SetPointError(5,0,2.059554);
   gren->SetPoint(6,202.8954,44.47932);
   gren->SetPointError(6,0,2.404779);
   gren->SetPoint(7,212.0101,42.90258);
   gren->SetPointError(7,0,2.457679);
   gren->SetPoint(8,221.2332,35.46935);
   gren->SetPointError(8,0,2.432733);
   gren->SetPoint(9,230.4563,99.89064);
   gren->SetPointError(9,0,3.784161);   
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_15_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,147.888,30.30277);
   gre->SetPointError(0,0,1.989618);
   gre->SetPoint(1,157.384,22.42861);
   gre->SetPointError(1,0,2.208036);
   gre->SetPoint(2,166.88,23.14927);
   gre->SetPointError(2,0,2.364735);
   gre->SetPoint(3,176.376,30.85423);
   gre->SetPointError(3,0,2.369505);
   gre->SetPoint(4,185.872,23.47361);
   gre->SetPointError(4,0,1.999549);
   gre->SetPoint(5,195.368,44.31693);
   gre->SetPointError(5,0,2.246997);
   gre->SetPoint(6,204.864,38.60415);
   gre->SetPointError(6,0,2.194883);
   gre->SetPoint(7,214.36,29.09567);
   gre->SetPointError(7,0,2.189627);
   gre->SetPoint(8,223.856,69.47222);
   gre->SetPointError(8,0,2.911476);
   gre->SetPoint(9,233.352,141.644);
   gre->SetPointError(9,0,2.357956);
   gre->Draw("sp");
   TF1 *phspSC_28_15_140 = new TF1("phspSC_28_15_140","pol2",13,280);
   phspSC_28_15_140->SetFillColor(19);
   phspSC_28_15_140->SetFillStyle(0);
   phspSC_28_15_140->SetLineWidth(2);
   phspSC_28_15_140->SetParameter(0,0.146265);
   phspSC_28_15_140->SetParError(0,0);
   phspSC_28_15_140->SetParLimits(0,0,0);
   phspSC_28_15_140->SetParameter(1,-0.000784973);
   phspSC_28_15_140->SetParError(1,0);
   phspSC_28_15_140->SetParLimits(1,0,0);
   phspSC_28_15_140->SetParameter(2,2.51823e-06);
   phspSC_28_15_140->SetParError(2,0);
   phspSC_28_15_140->SetParLimits(2,0,0);
   phspSC_28_15_140->Draw("same");
   pad1_3->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_6
   pad1_6 = new TPad("pad1_6", "pad1_6",0.656944,0.5,0.96875,0.737474);
   pad1_6->Draw();
   pad1_6->cd();
   pad1_6->Range(120,-0.57,288.421,0.57);
   pad1_6->SetFillColor(10);
   pad1_6->SetBorderMode(0);
   pad1_6->SetBorderSize(2);
   pad1_6->SetTickx();
   pad1_6->SetTicky();
   pad1_6->SetLeftMargin(0);
   pad1_6->SetRightMargin(0.05);
   pad1_6->SetTopMargin(0);
   pad1_6->SetBottomMargin(0);
   pad1_6->SetFrameFillColor(0);
   
   TH1 *hisT11 = new TH2D("hisT11","",15,120,280,20,-0.57,0.57);
   hisT11->SetStats(0);
   hisT11->GetXaxis()->CenterTitle(true);
   hisT11->GetXaxis()->SetNdivisions(207);
   hisT11->GetXaxis()->SetLabelOffset(0.03);
   hisT11->GetXaxis()->SetLabelSize(0.08);
   hisT11->GetXaxis()->SetTitleOffset(0.9);
   hisT11->GetYaxis()->CenterTitle(true);
   hisT11->GetYaxis()->SetLabelOffset(0.03);
   hisT11->GetYaxis()->SetLabelSize(0.08);
   hisT11->GetYaxis()->SetTitleOffset(0.9);
   hisT11->Draw("");
   
   gre = new TGraphErrors(8);
   gre->SetName("gr_T11_38");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.126989);
   gre->SetPointError(0,0,0.0544323);
   gre->SetPoint(1,160,-0.0754835);
   gre->SetPointError(1,0,0.0534728);
   gre->SetPoint(2,170,-0.00803959);
   gre->SetPointError(2,0,0.0532123);
   gre->SetPoint(3,180,-0.00647001);
   gre->SetPointError(3,0,0.0524233);
   gre->SetPoint(4,190,0.0171158);
   gre->SetPointError(4,0,0.0514977);
   gre->SetPoint(5,200,0.0650744);
   gre->SetPointError(5,0,0.0469652);
   gre->SetPoint(6,210,-0.0121851);
   gre->SetPointError(6,0,0.0488888);
   gre->SetPoint(7,220,0.0658514);
   gre->SetPointError(7,0,0.0495025);
   gre->Draw("sp");
   
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_6->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_9
   pad1_9 = new TPad("pad1_9", "pad1_9",0.656944,0.262526,0.96875,0.5);
   pad1_9->Draw();
   pad1_9->cd();
   pad1_9->Range(120,-0.57,288.421,0.57);
   pad1_9->SetFillColor(10);
   pad1_9->SetBorderMode(0);
   pad1_9->SetBorderSize(2);
   pad1_9->SetTickx();
   pad1_9->SetTicky();
   pad1_9->SetLeftMargin(0);
   pad1_9->SetRightMargin(0.05);
   pad1_9->SetTopMargin(0);
   pad1_9->SetBottomMargin(0);
   pad1_9->SetFrameFillColor(0);
   
   TH1 *hisT20 = new TH2D("hisT20","",15,120,280,20,-0.57,0.57);
   hisT20->SetStats(0);
   hisT20->GetXaxis()->CenterTitle(true);
   hisT20->GetXaxis()->SetNdivisions(207);
   hisT20->GetXaxis()->SetLabelOffset(0.03);
   hisT20->GetXaxis()->SetLabelSize(0.08);
   hisT20->GetXaxis()->SetTitleOffset(0.9);
   hisT20->GetYaxis()->CenterTitle(true);
   hisT20->GetYaxis()->SetLabelOffset(0.03);
   hisT20->GetYaxis()->SetLabelSize(0.08);
   hisT20->GetYaxis()->SetTitleOffset(0.9);
   hisT20->Draw("");
   
   gre = new TGraphErrors(8);
   gre->SetName("gr_T20_38");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,0.147513);
   gre->SetPointError(0,0,0.0847699);
   gre->SetPoint(1,160,0.184899);
   gre->SetPointError(1,0,0.0865377);
   gre->SetPoint(2,170,0.127866);
   gre->SetPointError(2,0,0.0833119);
   gre->SetPoint(3,180,0.0769492);
   gre->SetPointError(3,0,0.0755275);
   gre->SetPoint(4,190,0.200554);
   gre->SetPointError(4,0,0.0773907);
   gre->SetPoint(5,200,0.221129);
   gre->SetPointError(5,0,0.0745586);
   gre->SetPoint(6,210,0.149655);
   gre->SetPointError(6,0,0.072055);
   gre->SetPoint(7,220,0.319534);
   gre->SetPointError(7,0,0.077086);
   gre->Draw("sp");
   
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_9->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_12
   pad1_12 = new TPad("pad1_12", "pad1_12",0.656944,0,0.96875,0.262526);
   pad1_12->Draw();
   pad1_12->cd();
   pad1_12->Range(120,-0.855,288.421,0.57);
   pad1_12->SetFillColor(10);
   pad1_12->SetBorderMode(0);
   pad1_12->SetBorderSize(2);
   pad1_12->SetTickx();
   pad1_12->SetTicky();
   pad1_12->SetLeftMargin(0);
   pad1_12->SetRightMargin(0.05);
   pad1_12->SetTopMargin(0);
   pad1_12->SetBottomMargin(0.2);
   pad1_12->SetFrameFillColor(0);
   
   TH1 *hisT22 = new TH2D("hisT22","",15,120,280,20,-0.57,0.57);
   hisT22->SetStats(0);
   hisT22->GetXaxis()->CenterTitle(true);
   hisT22->GetXaxis()->SetNdivisions(207);
   hisT22->GetXaxis()->SetLabelOffset(0.03);
   hisT22->GetXaxis()->SetLabelSize(0.08);
   hisT22->GetXaxis()->SetTitleOffset(0.9);
   hisT22->GetYaxis()->CenterTitle(true);
   hisT22->GetYaxis()->SetLabelOffset(0.03);
   hisT22->GetYaxis()->SetLabelSize(0.08);
   hisT22->GetYaxis()->SetTitleOffset(0.9);
   hisT22->Draw("");
   
   gre = new TGraphErrors(8);
   gre->SetName("gr_T22_38");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.072683);
   gre->SetPointError(0,0,0.0504335);
   gre->SetPoint(1,160,-0.183494);
   gre->SetPointError(1,0,0.0485589);
   gre->SetPoint(2,170,-0.148324);
   gre->SetPointError(2,0,0.0486719);
   gre->SetPoint(3,180,-0.122683);
   gre->SetPointError(3,0,0.0451393);
   gre->SetPoint(4,190,-0.0716571);
   gre->SetPointError(4,0,0.0458326);
   gre->SetPoint(5,200,-0.0964039);
   gre->SetPointError(5,0,0.0422989);
   gre->SetPoint(6,210,-0.0833802);
   gre->SetPointError(6,0,0.041072);
   gre->SetPoint(7,220,0.018863);
   gre->SetPointError(7,0,0.0457113);
   gre->Draw("sp");
   
   TF1 *line = new TF1("line","0*x",120,280);
   line->SetFillColor(19);
   line->SetFillStyle(0);
   line->SetLineColor(14);
   line->SetLineWidth(1);
   line->Draw("SAME");
   pad1_12->Modified();
   pad1->cd();
   pad1->Modified();
   canvas_12->cd();
   canvas_12->Modified();
   canvas_12->cd();
   canvas_12->SetSelected(canvas_12);
}
