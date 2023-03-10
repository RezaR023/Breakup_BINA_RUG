{
//=========Macro generated from canvas: canvas_13/Cross section and ...
//=========  (Sat Sep 12 07:18:43 2009) by ROOT version5.06/00
   TCanvas *canvas_13 = new TCanvas("canvas_13", "Cross section and ...",4,21,1202,820);
   gStyle->SetOptStat(0);
   canvas_13->Range(0,0,1,1);
   canvas_13->SetFillColor(10);
   canvas_13->SetBorderSize(2);
   canvas_13->SetFrameFillColor(0);
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
   
   TH1 *hisCro = new TH2D("hisCro","",100,130,240,2000,1,2000);
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
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_Cro_39");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,140+5,0.0158305*1000);
   gre->SetPointError(0,0,0.00103667);
   gre->SetPoint(1,150+5,0.0148383*1000);
   gre->SetPointError(1,0,0.00100074);
   gre->SetPoint(2,160+5,0.0167389*1000);
   gre->SetPointError(2,0,0.00107129);
   gre->SetPoint(3,170+5,0.0217312*1000);
   gre->SetPointError(3,0,0.00121635);
   gre->SetPoint(4,180+5,0.0233178*1000);
   gre->SetPointError(4,0,0.00125356);
   gre->SetPoint(5,190+5,0.0372249*1000);
   gre->SetPointError(5,0,0.00157832);
   gre->SetPoint(6,200+5,0.0654679*1000);
   gre->SetPointError(6,0,0.00208888);
   gre->SetPoint(7,210+5,0.135487*1000);
   gre->SetPointError(7,0,0.00298964);
   gre->SetPoint(8,220+5,0.298477*1000);
   gre->SetPointError(8,0,0.00442319);
   gre->SetPoint(9,230+5,0.497644*1000);
   gre->SetPointError(9,0,0.00574281);
   gre->Draw("sp");
  /*    TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_28_20_180");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,143.5328,16.70496);
   gren->SetPointError(0,0,1.256567);
   gren->SetPoint(1,153.4142,14.76252);
   gren->SetPointError(1,0,1.266402);
   gren->SetPoint(2,163.4161,14.76252);
   gren->SetPointError(2,0,1.217647);
   gren->SetPoint(3,173.2974,18.6474);
   gren->SetPointError(3,0,1.365886);
   gren->SetPoint(4,183.1788,24.47471);
   gren->SetPointError(4,0,1.512475);
   gren->SetPoint(5,193.1807,30.30203);
   gren->SetPointError(5,0,1.716229);
   gren->SetPoint(6,203.0621,47.78397);
   gren->SetPointError(6,0,2.078416);
   gren->SetPoint(7,212.9434,82.74786);
   gren->SetPointError(7,0,2.799002);
   gren->SetPoint(8,222.9453,201.2366);
   gren->SetPointError(8,0,4.437902);
   gren->SetPoint(9,232.8267,803.3925);
   gren->SetPointError(9,0,8.685125);
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,143.9717,13.66924);
   gre->SetPointError(0,0,1.281204);
   gre->SetPoint(1,150.155,14.60344);
   gre->SetPointError(1,0,1.313994);
   gre->SetPoint(2,156.3383,15.67238);
   gre->SetPointError(2,0,1.314166);
   gre->SetPoint(3,162.5217,12.37534);
   gre->SetPointError(3,0,1.175758);
   gre->SetPoint(4,168.705,13.34323);
   gre->SetPointError(4,0,1.229079);
   gre->SetPoint(5,174.8883,18.55017);
   gre->SetPointError(5,0,1.428958);
   gre->SetPoint(6,181.0717,21.82002);
   gre->SetPointError(6,0,1.544879);
   gre->SetPoint(7,187.255,27.14505);
   gre->SetPointError(7,0,1.689979);
   gre->SetPoint(8,193.4383,29.85317);
   gre->SetPointError(8,0,1.765196);
   gre->SetPoint(9,199.6217,36.27179);
   gre->SetPointError(9,0,1.952951);
   gre->SetPoint(10,205.805,47.22317);
   gre->SetPointError(10,0,2.237399);
   gre->SetPoint(11,211.9883,77.82367);
   gre->SetPointError(11,0,2.815119);
   gre->SetPoint(12,218.1717,116.3291);
   gre->SetPointError(12,0,3.542121);
   gre->SetPoint(13,224.355,220.586);
   gre->SetPointError(13,0,4.81684);
   gre->SetPoint(14,230.5383,536.4269);
   gre->SetPointError(14,0,7.517319);
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,143.7085,19.90443);
   gre->SetPointError(0,0,1.312842);
   gre->SetPoint(1,153.9055,17.05045);
   gre->SetPointError(1,0,1.302564);
   gre->SetPoint(2,164.1025,14.44225);
   gre->SetPointError(2,0,1.258446);
   gre->SetPoint(3,174.2995,22.72197);
   gre->SetPointError(3,0,1.409548);
   gre->SetPoint(4,184.4965,30.84651);
   gre->SetPointError(4,0,1.488047);
   gre->SetPoint(5,194.6935,46.63872);
   gre->SetPointError(5,0,1.746794);
   gre->SetPoint(6,204.8905,84.82104);
   gre->SetPointError(6,0,2.3323);
   gre->SetPoint(7,215.0875,165.405);
   gre->SetPointError(7,0,3.281187);
   gre->SetPoint(8,225.2845,372.4478);
   gre->SetPointError(8,0,5.053578);
   gre->SetPoint(9,235.4815,923.078);
   gre->SetPointError(9,0,7.520725);
   gre->Draw("sp");*/
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(1,145,13.15029);
   gre->SetPointError(1,0,0.5304638);
   gre->SetPoint(2,155,15.23632);
   gre->SetPointError(2,0,0.5531242);
   gre->SetPoint(3,165,14.13311);
   gre->SetPointError(3,0,0.5583184);
   gre->SetPoint(4,175,16.1849);
   gre->SetPointError(4,0,0.5843893);
   gre->SetPoint(5,185,21.57102);
   gre->SetPointError(5,0,0.648827);
   gre->SetPoint(6,195,29.8734);
   gre->SetPointError(6,0,0.7359174);
   gre->SetPoint(7,205,50.99976);
   gre->SetPointError(7,0,0.9100241);
   gre->SetPoint(8,215,98.77776);
   gre->SetPointError(8,0,1.262662);
   gre->SetPoint(9,225,261.3093);
   gre->SetPointError(9,0,2.077116);
   gre->SetPoint(10,235,839.238);
   gre->SetPointError(10,0,3.878674);
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_28_20_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   gre->SetPoint(1,145,16.32783);
   gre->SetPointError(1,0,0.6373898);
   gre->SetPoint(2,155,14.10671);
   gre->SetPointError(2,0,0.6093345);
   gre->SetPoint(3,165,16.19597);
   gre->SetPointError(3,0,0.6247433);
   gre->SetPoint(4,175,21.29722);
   gre->SetPointError(4,0,0.6694363);
   gre->SetPoint(5,185,28.8143);
   gre->SetPointError(5,0,0.742997);
   gre->SetPoint(6,195,48.63101);
   gre->SetPointError(6,0,0.9062911);
   gre->SetPoint(7,205,87.1946);
   gre->SetPointError(7,0,1.18807);
   gre->SetPoint(8,215,172.5999);
   gre->SetPointError(8,0,1.67817);
   gre->SetPoint(9,225,357.7911);
   gre->SetPointError(9,0,2.478585);
   gre->SetPoint(10,235,152.1101);
   gre->SetPointError(10,0,0.6589752);
   gre->Draw("sp");
   TF1 *phspSC_28_20_180 = new TF1("phspSC_28_20_180","pol2",13,280);
   phspSC_28_20_180->SetFillColor(19);
   phspSC_28_20_180->SetFillStyle(0);
   phspSC_28_20_180->SetLineWidth(2);
   phspSC_28_20_180->SetParameter(0,-0.0210107);
   phspSC_28_20_180->SetParError(0,0);
   phspSC_28_20_180->SetParLimits(0,0,0);
   phspSC_28_20_180->SetParameter(1,0.000958014);
   phspSC_28_20_180->SetParError(1,0);
   phspSC_28_20_180->SetParLimits(1,0,0);
   phspSC_28_20_180->SetParameter(2,-2.0148e-06);
   phspSC_28_20_180->SetParError(2,0);
   phspSC_28_20_180->SetParLimits(2,0,0);
   phspSC_28_20_180->Draw("same");
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
   
   TH1 *hisT11 = new TH2D("hisT11","",100,130,240,20,-0.57,0.57);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("gr_T11_39");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,140,-0.0288669);
   gre->SetPointError(0,0,0.0717453);
   gre->SetPoint(1,150,-0.0687557);
   gre->SetPointError(1,0,0.0543892);
   gre->SetPoint(2,160,0.0124236);
   gre->SetPointError(2,0,0.0566284);
   gre->SetPoint(3,170,-0.00686997);
   gre->SetPointError(3,0,0.052693);
   gre->SetPoint(4,180,0.0565606);
   gre->SetPointError(4,0,0.0480522);
   gre->SetPoint(5,190,0.112452);
   gre->SetPointError(5,0,0.0361919);
   gre->SetPoint(6,200,0.112563);
   gre->SetPointError(6,0,0.0259388);
   gre->SetPoint(7,210,0.130989);
   gre->SetPointError(7,0,0.018944);
   gre->SetPoint(8,220,0.137654);
   gre->SetPointError(8,0,0.0135849);
   gre->SetPoint(9,230,0.114074);
   gre->SetPointError(9,0,0.0123135);
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
   
   TH1 *hisT20 = new TH2D("hisT20","",100,130,240,20,-0.57,0.57);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("gr_T20_39");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,140,0.0761679);
   gre->SetPointError(0,0,0.0993541);
   gre->SetPoint(1,150,0.197828);
   gre->SetPointError(1,0,0.0973956);
   gre->SetPoint(2,160,-0.0320431);
   gre->SetPointError(2,0,0.0839346);
   gre->SetPoint(3,169.575,0.0543094);
   gre->SetPointError(3,0,0.0753959);
   gre->SetPoint(4,180,0.209032);
   gre->SetPointError(4,0,0.0743078);
   gre->SetPoint(5,189.243,0.270045);
   gre->SetPointError(5,0,0.0628489);
   gre->SetPoint(6,200,0.110261);
   gre->SetPointError(6,0,0.0443569);
   gre->SetPoint(7,210,0.132484);
   gre->SetPointError(7,0,0.0311799);
   gre->SetPoint(8,220,0.149674);
   gre->SetPointError(8,0,0.0212453);
   gre->SetPoint(9,230,0.0944164);
   gre->SetPointError(9,0,0.0173366);
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
   
   TH1 *hisT22 = new TH2D("hisT22","",100,130,240,20,-0.57,0.57);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("gr_T22_39");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,140,-0.0360099);
   gre->SetPointError(0,0,0.0571298);
   gre->SetPoint(1,148.677,-0.131403);
   gre->SetPointError(1,0,0.054792);
   gre->SetPoint(2,160,-0.125017);
   gre->SetPointError(2,0,0.0477973);
   gre->SetPoint(3,170,-0.120904);
   gre->SetPointError(3,0,0.0402793);
   gre->SetPoint(4,180,-0.113065);
   gre->SetPointError(4,0,0.0417549);
   gre->SetPoint(5,190,-0.2224);
   gre->SetPointError(5,0,0.0360949);
   gre->SetPoint(6,200,-0.264149);
   gre->SetPointError(6,0,0.0242266);
   gre->SetPoint(7,210,-0.257409);
   gre->SetPointError(7,0,0.0170236);
   gre->SetPoint(8,220,-0.277557);
   gre->SetPointError(8,0,0.0121895);
   gre->SetPoint(9,230,-0.248782);
   gre->SetPointError(9,0,0.0103594);
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
   
   TH1 *hisCro = new TH2D("hisCro","",90,150,240,2000,1,2000);
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
   gre->SetName("gr_Cro_40");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150+5,0.0307512*1000);
   gre->SetPointError(0,0,0.0014672);
   gre->SetPoint(1,160+5,0.0288626*1000);
   gre->SetPointError(1,0,0.00140531);
   gre->SetPoint(2,170+5,0.0316246*1000);
   gre->SetPointError(2,0,0.00145998);
   gre->SetPoint(3,180+5,0.0387406*1000);
   gre->SetPointError(3,0,0.00161705);
   gre->SetPoint(4,190+5,0.0436294*1000);
   gre->SetPointError(4,0,0.00170003);
   gre->SetPoint(5,200+5,0.0577401*1000);
   gre->SetPointError(5,0,0.00195684);
   gre->SetPoint(6,210+5,0.0866147*1000);
   gre->SetPointError(6,0,0.00238156);
   gre->SetPoint(7,220+5,0.134862*1000);
   gre->SetPointError(7,0,0.00298495);
   gre->SetPoint(8,230+5,0.105656*1000);
   gre->SetPointError(8,0,0.00264348);
   gre->Draw("sp");
   /*   TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_28_20_160");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,143.7945,27.0039);
   gren->SetPointError(0,0,1.697645);
   gren->SetPoint(1,153.5054,23.67829);
   gren->SetPointError(1,0,1.653146);
   gren->SetPoint(2,163.2163,29.66438);
   gren->SetPointError(2,0,1.750668);
   gren->SetPoint(3,173.0415,30.3295);
   gren->SetPointError(3,0,1.791321);
   gren->SetPoint(4,182.7524,31.65974);
   gren->SetPointError(4,0,1.791502);
   gren->SetPoint(5,192.4633,41.63655);
   gren->SetPointError(5,0,2.027626);
   gren->SetPoint(6,202.2885,48.28776);
   gren->SetPointError(6,0,2.167179);
   gren->SetPoint(7,211.9994,68.24138);
   gren->SetPointError(7,0,2.53011);
   gren->SetPoint(8,221.7103,106.8184);
   gren->SetPointError(8,0,3.306971);
   gren->SetPoint(9,231.5355,275.0939);
   gren->SetPointError(9,0,5.187548);
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,143.931,34.90394);
   gre->SetPointError(0,0,1.710278);
   gre->SetPoint(1,153.953,28.85906);
   gre->SetPointError(1,0,1.756401);
   gre->SetPoint(2,163.975,27.19903);
   gre->SetPointError(2,0,1.748596);
   gre->SetPoint(3,173.997,28.43679);
   gre->SetPointError(3,0,1.63346);
   gre->SetPoint(4,184.019,39.78107);
   gre->SetPointError(4,0,1.812332);
   gre->SetPoint(5,194.041,48.96139);
   gre->SetPointError(5,0,1.837504);
   gre->SetPoint(6,204.063,69.87139);
   gre->SetPointError(6,0,2.129595);
   gre->SetPoint(7,214.085,93.74754);
   gre->SetPointError(7,0,2.567934);
   gre->SetPoint(8,224.107,142.2548);
   gre->SetPointError(8,0,3.284116);
   gre->SetPoint(9,234.129,179.2351);
   gre->SetPointError(9,0,3.385168);
   gre->Draw("sp");*/
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_28_20_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(2,155,27.46105);
   gre->SetPointError(2,0,0.7513764);
   gre->SetPoint(3,165,26.83201);
   gre->SetPointError(3,0,0.7623359);
   gre->SetPoint(4,175,29.23811);
   gre->SetPointError(4,0,0.7768215);
   gre->SetPoint(5,185,31.46986);
   gre->SetPointError(5,0,0.7822637);
   gre->SetPoint(6,195,38.86847);
   gre->SetPointError(6,0,0.8373413);
   gre->SetPoint(7,205,51.28813);
   gre->SetPointError(7,0,0.9210889);
   gre->SetPoint(8,215,81.63401);
   gre->SetPointError(8,0,1.155868);
   gre->SetPoint(9,225,147.1485);
   gre->SetPointError(9,0,1.59727);
   gre->SetPoint(10,235,245.5265);
   gre->SetPointError(10,0,2.107135);

   gre->Draw("sp");
   TF1 *phspSC_28_20_160 = new TF1("phspSC_28_20_160","pol2",13,280);
   phspSC_28_20_160->SetFillColor(19);
   phspSC_28_20_160->SetFillStyle(0);
   phspSC_28_20_160->SetLineWidth(2);
   phspSC_28_20_160->SetParameter(0,-0.059505);
   phspSC_28_20_160->SetParError(0,0);
   phspSC_28_20_160->SetParLimits(0,0,0);
   phspSC_28_20_160->SetParameter(1,0.00157779);
   phspSC_28_20_160->SetParError(1,0);
   phspSC_28_20_160->SetParLimits(1,0,0);
   phspSC_28_20_160->SetParameter(2,-3.92635e-06);
   phspSC_28_20_160->SetParError(2,0);
   phspSC_28_20_160->SetParLimits(2,0,0);
   phspSC_28_20_160->Draw("same");
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
   
   TH1 *hisT11 = new TH2D("hisT11","",90,150,240,20,-0.57,0.57);
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
   gre->SetName("gr_T11_40");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.0387724);
   gre->SetPointError(0,0,0.044303);
   gre->SetPoint(1,160,0.0198228);
   gre->SetPointError(1,0,0.0432784);
   gre->SetPoint(2,170,0.0844065);
   gre->SetPointError(2,0,0.0445012);
   gre->SetPoint(3,180,0.0507519);
   gre->SetPointError(3,0,0.0409199);
   gre->SetPoint(4,190,0.0884483);
   gre->SetPointError(4,0,0.0366772);
   gre->SetPoint(5,200,0.0623426);
   gre->SetPointError(5,0,0.0310759);
   gre->SetPoint(6,210,0.0708592);
   gre->SetPointError(6,0,0.0258553);
   gre->SetPoint(7,220,0.127529);
   gre->SetPointError(7,0,0.0218667);
   gre->SetPoint(8,230,0.109326);
   gre->SetPointError(8,0,0.0282743);
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
   
   TH1 *hisT20 = new TH2D("hisT20","",90,150,240,20,-0.57,0.57);
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
   gre->SetName("gr_T20_40");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,0.126292);
   gre->SetPointError(0,0,0.0686665);
   gre->SetPoint(1,160,0.205645);
   gre->SetPointError(1,0,0.0709566);
   gre->SetPoint(2,170,0.114954);
   gre->SetPointError(2,0,0.0663805);
   gre->SetPoint(3,180,0.0518211);
   gre->SetPointError(3,0,0.0602593);
   gre->SetPoint(4,190,0.0417932);
   gre->SetPointError(4,0,0.0544583);
   gre->SetPoint(5,200,0.178587);
   gre->SetPointError(5,0,0.0491465);
   gre->SetPoint(6,210,0.205068);
   gre->SetPointError(6,0,0.0404036);
   gre->SetPoint(7,220,0.172982);
   gre->SetPointError(7,0,0.0329861);
   gre->SetPoint(8,230,0.0170806);
   gre->SetPointError(8,0,0.038557);
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
   
   TH1 *hisT22 = new TH2D("hisT22","",90,150,240,20,-0.57,0.57);
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
   gre->SetName("gr_T22_40");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.106075);
   gre->SetPointError(0,0,0.0390523);
   gre->SetPoint(1,160,-0.177802);
   gre->SetPointError(1,0,0.0407331);
   gre->SetPoint(2,170,-0.0836777);
   gre->SetPointError(2,0,0.0386586);
   gre->SetPoint(3,180,-0.10172);
   gre->SetPointError(3,0,0.0337053);
   gre->SetPoint(4,190,-0.0969573);
   gre->SetPointError(4,0,0.0319146);
   gre->SetPoint(5,200,-0.14768);
   gre->SetPointError(5,0,0.0284152);
   gre->SetPoint(6,210,-0.198154);
   gre->SetPointError(6,0,0.0234432);
   gre->SetPoint(7,220,-0.147279);
   gre->SetPointError(7,0,0.0196319);
   gre->SetPoint(8,230,-0.18043);
   gre->SetPointError(8,0,0.0234432);
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
   
   TH1 *hisCro = new TH2D("hisCro","",80,150,230,2000,1,2000);
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
   gre->SetName("gr_Cro_41");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150+5,0.027735*1000);
   gre->SetPointError(0,0,0.00136841);
   gre->SetPoint(1,160+5,0.0250037*1000);
   gre->SetPointError(1,0,0.00129616);
   gre->SetPoint(2,170+5,0.0184362*1000);
   gre->SetPointError(2,0,0.00112027);
   gre->SetPoint(3,180+5,0.0201748*1000);
   gre->SetPointError(3,0,0.00116097);
   gre->SetPoint(4,190+5,0.019539*1000);
   gre->SetPointError(4,0,0.00113807);
   gre->SetPoint(5,200+5,0.0190348*1000);
   gre->SetPointError(5,0,0.00112341);
   gre->SetPoint(6,210+5,0.0188145*1000);
   gre->SetPointError(6,0,0.00111216);
   gre->SetPoint(7,220+5,0.0202671*1000);
   gre->SetPointError(7,0,0.00114915);
   gre->Draw("sp");
/*   TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_28_20_140");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,145.8017,19.18309);
   gren->SetPointError(0,0,1.492893);
   gren->SetPoint(1,155.079,24.35901);
   gren->SetPointError(1,0,1.650929);
   gren->SetPoint(2,164.3563,22.91457);
   gren->SetPointError(2,0,1.637893);
   gren->SetPoint(3,173.5245,22.67383);
   gren->SetPointError(3,0,1.592699);
   gren->SetPoint(4,182.8018,22.31272);
   gren->SetPointError(4,0,1.56915);
   gren->SetPoint(5,192.0791,21.10902);
   gren->SetPointError(5,0,1.522684);
   gren->SetPoint(6,201.3564,24.35901);
   gren->SetPointError(6,0,1.624042);
   gren->SetPoint(7,210.5245,22.67383);
   gren->SetPointError(7,0,1.539156);
   gren->SetPoint(8,219.8018,21.83124);
   gren->SetPointError(8,0,1.618201);
   gren->SetPoint(9,229.0791,61.07193);
   gren->SetPointError(9,0,2.568576);   
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,146.014,27.31689);
   gre->SetPointError(0,0,1.662457);
   gre->SetPoint(1,155.542,22.76728);
   gre->SetPointError(1,0,1.713309);
   gre->SetPoint(2,165.07,23.24757);
   gre->SetPointError(2,0,1.759913);
   gre->SetPoint(3,174.598,24.91633);
   gre->SetPointError(3,0,1.736243);
   gre->SetPoint(4,184.126,19.59751);
   gre->SetPointError(4,0,1.495843);
   gre->SetPoint(5,193.654,21.15578);
   gre->SetPointError(5,0,1.502137);
   gre->SetPoint(6,203.182,22.7773);
   gre->SetPointError(6,0,1.379231);
   gre->SetPoint(7,212.71,15.6582);
   gre->SetPointError(7,0,1.298498);
   gre->SetPoint(8,222.238,71.32376);
   gre->SetPointError(8,0,2.121076);
   gre->SetPoint(9,231.766,42.0172);
   gre->SetPointError(9,0,1.58452);
   gre->Draw("sp");*/
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_28_20_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(2,155,23.23787);
   gre->SetPointError(2,0,0.7101016);
   gre->SetPoint(3,165,24.09439);
   gre->SetPointError(3,0,0.7433002);
   gre->SetPoint(4,175,20.71137);
   gre->SetPointError(4,0,0.721207);
   gre->SetPoint(5,185,21.28397);
   gre->SetPointError(5,0,0.7114718);
   gre->SetPoint(6,195,20.11007);
   gre->SetPointError(6,0,0.688516);
   gre->SetPoint(7,205,21.39981);
   gre->SetPointError(7,0,0.6488541);
//   gre->SetPoint(8,215,267.9932);
//   gre->SetPointError(8,0,9.636277);
//   gre->SetPoint(9,225,48.21816);
//   gre->SetPointError(9,0,1.003122);
   gre->Draw("sp");
   TF1 *phspSC_28_20_140 = new TF1("phspSC_28_20_140","pol2",13,280);
   phspSC_28_20_140->SetFillColor(19);
   phspSC_28_20_140->SetFillStyle(0);
   phspSC_28_20_140->SetLineWidth(2);
   phspSC_28_20_140->SetParameter(0,-0.107189);
   phspSC_28_20_140->SetParError(0,0);
   phspSC_28_20_140->SetParLimits(0,0,0);
   phspSC_28_20_140->SetParameter(1,0.00201296);
   phspSC_28_20_140->SetParError(1,0);
   phspSC_28_20_140->SetParLimits(1,0,0);
   phspSC_28_20_140->SetParameter(2,-5.13509e-06);
   phspSC_28_20_140->SetParError(2,0);
   phspSC_28_20_140->SetParLimits(2,0,0);
   phspSC_28_20_140->Draw("same");
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
   
   TH1 *hisT11 = new TH2D("hisT11","",80,150,230,20,-0.57,0.57);
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
   gre->SetName("gr_T11_41");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.0443516);
   gre->SetPointError(0,0,0.0488576);
   gre->SetPoint(1,158.489,-0.0816912);
   gre->SetPointError(1,0,0.0440508);
   gre->SetPoint(2,170,-0.0596823);
   gre->SetPointError(2,0,0.0539544);
   gre->SetPoint(3,178.456,-0.00701359);
   gre->SetPointError(3,0,0.0527939);
   gre->SetPoint(4,190,-0.0238793);
   gre->SetPointError(4,0,0.0584961);
   gre->SetPoint(5,200,0.079218);
   gre->SetPointError(5,0,0.0563147);
   gre->SetPoint(6,210,-0.0211456);
   gre->SetPointError(6,0,0.0546727);
   gre->SetPoint(7,220,-0.0672164);
   gre->SetPointError(7,0,0.0584237);
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
   
   TH1 *hisT20 = new TH2D("hisT20","",80,150,230,20,-0.57,0.57);
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
   gre->SetName("gr_T20_41");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,0.149791);
   gre->SetPointError(0,0,0.0719576);
   gre->SetPoint(1,160,0.00702581);
   gre->SetPointError(1,0,0.07277);
   gre->SetPoint(2,170,0.0752943);
   gre->SetPointError(2,0,0.0766777);
   gre->SetPoint(3,180,0.0055906);
   gre->SetPointError(3,0,0.0774197);
   gre->SetPoint(4,190,-0.0591246);
   gre->SetPointError(4,0,0.079314);
   gre->SetPoint(5,199.597,-0.0950459);
   gre->SetPointError(5,0,0.084574);
   gre->SetPoint(6,210,-0.167529);
   gre->SetPointError(6,0,0.0730985);
   gre->SetPoint(7,220,-0.200999);
   gre->SetPointError(7,0,0.0729628);
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
   
   TH1 *hisT22 = new TH2D("hisT22","",80,150,230,20,-0.57,0.57);
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
   gre->SetName("gr_T22_41");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,150,-0.0384865);
   gre->SetPointError(0,0,0.0409249);
   gre->SetPoint(1,159.664,-0.122021);
   gre->SetPointError(1,0,0.0396026);
   gre->SetPoint(2,170,-0.0958153);
   gre->SetPointError(2,0,0.0438709);
   gre->SetPoint(3,180,0.0257955);
   gre->SetPointError(3,0,0.0447124);
   gre->SetPoint(4,190.201,-0.0751104);
   gre->SetPointError(4,0,0.0475393);
   gre->SetPoint(5,200,0.0108175);
   gre->SetPointError(5,0,0.0500833);
   gre->SetPoint(6,210,-0.0853118);
   gre->SetPointError(6,0,0.0421528);
   gre->SetPoint(7,220,-0.0923843);
   gre->SetPointError(7,0,0.0452792);
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
   canvas_13->cd();
   canvas_13->Modified();
   canvas_13->cd();
   canvas_13->SetSelected(canvas_13);
}
