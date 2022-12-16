{
//=========Macro generated from canvas: canvas_6/Cross section and ...
//=========  (Sat Sep 12 07:07:47 2009) by ROOT version5.06/00
   TCanvas *canvas_6 = new TCanvas("canvas_6", "Cross section and ...",4,21,1202,820);
   gStyle->SetOptStat(0);
   canvas_6->Range(0,0,1,1);
   canvas_6->SetFillColor(10);
   canvas_6->SetBorderSize(2);
   canvas_6->SetFrameFillColor(0);
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
   
   TH1 *hisCro = new TH2D("hisCro","",100,150,250,2000,1,2000);
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
   gre->SetName("gr_Cro_18");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160+5,0.0223868*1000);
   gre->SetPointError(0,0,0.00131687);
   gre->SetPoint(1,170+5,0.0321122*1000);
   gre->SetPointError(1,0,0.00156151);
   gre->SetPoint(2,180+5,0.045534*1000);
   gre->SetPointError(2,0,0.00185138);
   gre->SetPoint(3,190+5,0.0659856*1000);
   gre->SetPointError(3,0,0.002228);
   gre->SetPoint(4,200+5,0.103562*1000);
   gre->SetPointError(4,0,0.00279096);
   gre->SetPoint(5,210+5,0.130445*1000);
   gre->SetPointError(5,0,0.00312425);
   gre->SetPoint(6,220+5,0.15732*1000);
   gre->SetPointError(6,0,0.00339288);
   gre->SetPoint(7,230+5,0.164626*1000);
   gre->SetPointError(7,0,0.00349507);
   gre->SetPoint(8,240+5,0.141182*1000);
   gre->SetPointError(8,0,0.00323689);
   gre->Draw("sp");
   /*TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_20_25_180");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,161.8738,30.0832);
   gren->SetPointError(0,0,1.789878);
   gren->SetPoint(1,172.2589,26.14203);
   gren->SetPointError(1,0,1.748288);
   gren->SetPoint(2,182.7706,37.40253);
   gren->SetPointError(2,0,1.99321);
   gren->SetPoint(3,193.1557,61.6126);
   gren->SetPointError(3,0,2.505888);
   gren->SetPoint(4,203.5408,91.45292);
   gren->SetPointError(4,0,3.032895);
   gren->SetPoint(5,214.0525,131.9907);
   gren->SetPointError(5,0,3.646057);
   gren->SetPoint(6,224.4376,169.1504);
   gren->SetPointError(6,0,4.108866);
   gren->SetPoint(7,234.8227,216.4445);
   gren->SetPointError(7,0,4.627485);
   gren->SetPoint(8,245.3345,235.0243);
   gren->SetPointError(8,0,4.849331);
   gren->SetPoint(9,255.7196,176.4697);
   gren->SetPointError(9,0,4.295114);
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,162.439,30.14955);
   gre->SetPointError(0,0,1.855835);
   gre->SetPoint(1,168.977,23.65631);
   gre->SetPointError(1,0,1.675563);
   gre->SetPoint(2,175.515,30.38314);
   gre->SetPointError(2,0,1.863785);
   gre->SetPoint(3,182.053,35.6962);
   gre->SetPointError(3,0,2.048769);
   gre->SetPoint(4,188.591,50.1265);
   gre->SetPointError(4,0,2.377748);
   gre->SetPoint(5,195.129,65.37014);
   gre->SetPointError(5,0,2.738621);
   gre->SetPoint(6,201.667,78.77185);
   gre->SetPointError(6,0,2.988652);
   gre->SetPoint(7,208.205,99.71242);
   gre->SetPointError(7,0,3.320505);
   gre->SetPoint(8,214.743,138.8065);
   gre->SetPointError(8,0,3.901811);
   gre->SetPoint(9,221.281,150.0297);
   gre->SetPointError(9,0,4.104653);
   gre->SetPoint(10,227.819,183.1867);
   gre->SetPointError(10,0,4.45163);
   gre->SetPoint(11,234.357,216.1984);
   gre->SetPointError(11,0,4.808343);
   gre->SetPoint(12,240.895,240.2063);
   gre->SetPointError(12,0,5.079338);
   gre->SetPoint(13,247.433,229.3351);
   gre->SetPointError(13,0,4.987248);
   gre->SetPoint(14,253.971,185.1582);
   gre->SetPointError(14,0,4.521175);   
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,162.0365,29.77847);
   gre->SetPointError(0,0,1.597734);
   gre->SetPoint(1,172.7095,34.74437);
   gre->SetPointError(1,0,1.745344);
   gre->SetPoint(2,183.3825,59.04967);
   gre->SetPointError(2,0,2.125886);
   gre->SetPoint(3,194.0555,92.5225);
   gre->SetPointError(3,0,2.561969);
   gre->SetPoint(4,204.7285,139.0018);
   gre->SetPointError(4,0,3.11741);
   gre->SetPoint(5,215.4015,180.1962);
   gre->SetPointError(5,0,3.47904);
   gre->SetPoint(6,226.0745,220.028);
   gre->SetPointError(6,0,3.831785);
   gre->SetPoint(7,236.7475,215.0951);
   gre->SetPointError(7,0,3.797671);
   gre->SetPoint(8,247.4205,148.9672);
   gre->SetPointError(8,0,3.254193);
   gre->SetPoint(9,258.0935,72.92949);
   gre->SetPointError(9,0,2.27366);
   gre->Draw("sp");*/
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(3,165,26.74016);
   gre->SetPointError(3,0,0.7583567);
   gre->SetPoint(4,175,27.95577);
   gre->SetPointError(4,0,0.790282);
   gre->SetPoint(5,185,45.61687);
   gre->SetPointError(5,0,0.9661885);
   gre->SetPoint(6,195,70.12462);
   gre->SetPointError(6,0,1.155987);
   gre->SetPoint(7,205,102.0398);
   gre->SetPointError(7,0,1.368409);
   gre->SetPoint(8,215,138.3438);
   gre->SetPointError(8,0,1.585118);
   gre->SetPoint(9,225,176.863);
   gre->SetPointError(9,0,1.786597);
   gre->SetPoint(10,235,221.0903);
   gre->SetPointError(10,0,1.991207);
   gre->SetPoint(11,245,237.0168);
   gre->SetPointError(11,0,2.093003);
   gre->Draw("sp");
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_20_25_180");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   gre->SetPoint(3,165,32.85259);
   gre->SetPointError(3,0,0.8321652);
   gre->SetPoint(4,175,40.13459);
   gre->SetPointError(4,0,0.9204055);
   gre->SetPoint(5,185,65.88909);
   gre->SetPointError(5,0,1.131003);
   gre->SetPoint(6,195,95.23673);
   gre->SetPointError(6,0,1.338772);
   gre->SetPoint(7,205,138.6485);
   gre->SetPointError(7,0,1.595124);
   gre->SetPoint(8,215,178.5731);
   gre->SetPointError(8,0,1.797407);
   gre->SetPoint(9,225,221.3619);
   gre->SetPointError(9,0,1.978946);
   gre->SetPoint(10,235,239.7705);
   gre->SetPointError(10,0,2.019907);
   gre->SetPoint(11,245,153.8016);
   gre->SetPointError(11,0,1.783797);
   gre->Draw("sp");
   TF1 *phspSC_20_25_180 = new TF1("phspSC_20_25_180","pol2",13,280);
   phspSC_20_25_180->SetFillColor(19);
   phspSC_20_25_180->SetFillStyle(0);
   phspSC_20_25_180->SetLineWidth(2);
   phspSC_20_25_180->SetParameter(0,-0.0264674);
   phspSC_20_25_180->SetParError(0,0);
   phspSC_20_25_180->SetParLimits(0,0,0);
   phspSC_20_25_180->SetParameter(1,0.000900597);
   phspSC_20_25_180->SetParError(1,0);
   phspSC_20_25_180->SetParLimits(1,0,0);
   phspSC_20_25_180->SetParameter(2,-1.5913e-06);
   phspSC_20_25_180->SetParError(2,0);
   phspSC_20_25_180->SetParLimits(2,0,0);
   phspSC_20_25_180->Draw("same");
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
   
   TH1 *hisT11 = new TH2D("hisT11","",100,150,250,20,-0.57,0.57);
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
   gre->SetName("gr_T11_18");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.162209);
   gre->SetPointError(0,0,0.0477532);
   gre->SetPoint(1,170,-0.130436);
   gre->SetPointError(1,0,0.0424858);
   gre->SetPoint(2,180,-0.276964);
   gre->SetPointError(2,0,0.0293999);
   gre->SetPoint(3,190,-0.283065);
   gre->SetPointError(3,0,0.0247682);
   gre->SetPoint(4,200,-0.194822);
   gre->SetPointError(4,0,0.0216557);
   gre->SetPoint(5,210,-0.260592);
   gre->SetPointError(5,0,0.0182157);
   gre->SetPoint(6,220,-0.291798);
   gre->SetPointError(6,0,0.0162608);
   gre->SetPoint(7,230,-0.271027);
   gre->SetPointError(7,0,0.0160581);
   gre->SetPoint(8,240,-0.283181);
   gre->SetPointError(8,0,0.0180505);
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
   
   TH1 *hisT20 = new TH2D("hisT20","",100,150,250,20,-0.57,0.57);
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
   gre->SetName("gr_T20_18");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.172599);
   gre->SetPointError(0,0,0.0719586);
   gre->SetPoint(1,170,-0.147323);
   gre->SetPointError(1,0,0.0593878);
   gre->SetPoint(2,180,-0.152665);
   gre->SetPointError(2,0,0.04859);
   gre->SetPoint(3,190,-0.243883);
   gre->SetPointError(3,0,0.0381591);
   gre->SetPoint(4,200,-0.337799);
   gre->SetPointError(4,0,0.0301903);
   gre->SetPoint(5,210,-0.481435);
   gre->SetPointError(5,0,0.0246608);
   gre->SetPoint(6,220,-0.473291);
   gre->SetPointError(6,0,0.0224412);
   gre->SetPoint(7,230,-0.498025);
   gre->SetPointError(7,0,0.0218671);
   gre->SetPoint(8,240,-0.557338);
   gre->SetPointError(8,0,0.0233686);
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
   
   TH1 *hisT22 = new TH2D("hisT22","",100,150,250,20,-0.57,0.57);
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
   gre->SetName("gr_T22_18");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.0950785);
   gre->SetPointError(0,0,0.0423134);
   gre->SetPoint(1,170,-0.133506);
   gre->SetPointError(1,0,0.0329446);
   gre->SetPoint(2,180,-0.152195);
   gre->SetPointError(2,0,0.0271561);
   gre->SetPoint(3,190,-0.0895294);
   gre->SetPointError(3,0,0.0218826);
   gre->SetPoint(4,200,-0.030896);
   gre->SetPointError(4,0,0.0172184);
   gre->SetPoint(5,210,-0.0331747);
   gre->SetPointError(5,0,0.0141594);
   gre->SetPoint(6,220,-0.0293499);
   gre->SetPointError(6,0,0.0130154);
   gre->SetPoint(7,230,-0.0368534);
   gre->SetPointError(7,0,0.0127045);
   gre->SetPoint(8,240,-0.046189);
   gre->SetPointError(8,0,0.013404);
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
   
   TH1 *hisCro = new TH2D("hisCro","",90,160,250,2000,1,2000);
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
   gre->SetName("gr_Cro_19");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160+5,0.0352288*1000);
   gre->SetPointError(0,0,0.00163909);
   gre->SetPoint(1,170+5,0.0432617*1000);
   gre->SetPointError(1,0,0.00181066);
   gre->SetPoint(2,180+5,0.053404*1000);
   gre->SetPointError(2,0,0.00200581);
   gre->SetPoint(3,190+5,0.0766528*1000);
   gre->SetPointError(3,0,0.00238983);
   gre->SetPoint(4,200+5,0.0924946*1000);
   gre->SetPointError(4,0,0.00262659);
   gre->SetPoint(5,210+5,0.113085*1000);
   gre->SetPointError(5,0,0.00289111);
   gre->SetPoint(6,220+5,0.124271*1000);
   gre->SetPointError(6,0,0.00303592);
   gre->SetPoint(7,230+5,0.116368*1000);
   gre->SetPointError(7,0,0.0029355);
   gre->SetPoint(8,240+5,0.101747*1000);
   gre->SetPointError(8,0,0.00274542);
   gre->Draw("sp");
   /*   TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_20_25_160");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,162.728,51.26891);
   gren->SetPointError(0,0,2.351603);
   gren->SetPoint(1,172.9639,40.99983);
   gren->SetPointError(1,0,2.198122);
   gren->SetPoint(2,183.1997,48.87279);
   gren->SetPointError(2,0,2.351073);
   gren->SetPoint(3,193.556,72.14937);
   gren->SetPointError(3,0,2.795283);
   gren->SetPoint(4,203.7919,95.42596);
   gren->SetPointError(4,0,3.169731);
   gren->SetPoint(5,214.0277,125.2063);
   gren->SetPointError(5,0,3.583781);
   gren->SetPoint(6,224.384,152.2482);
   gren->SetPointError(6,0,3.923396);
   gren->SetPoint(7,234.6199,158.0673);
   gren->SetPointError(7,0,3.981302);
   gren->SetPoint(8,244.8557,165.598);
   gren->SetPointError(8,0,4.089722);
   gren->SetPoint(9,255.212,148.1406);
   gren->SetPointError(9,0,4.034302);
   gren->Draw("samep");
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,162.849,55.96805);
   gre->SetPointError(0,0,2.148961);
   gre->SetPoint(1,173.367,52.17627);
   gre->SetPointError(1,0,2.156706);
   gre->SetPoint(3,194.403,112.8514);
   gre->SetPointError(3,0,2.879621);
   gre->SetPoint(4,204.921,138.5271);
   gre->SetPointError(4,0,3.191605);
   gre->SetPoint(5,215.439,161.827);
   gre->SetPointError(5,0,3.348696);
   gre->SetPoint(6,225.957,170.409);
   gre->SetPointError(6,0,3.40338);
   gre->SetPoint(7,236.475,159.2552);
   gre->SetPointError(7,0,3.305434);
   gre->SetPoint(8,246.993,110.2051);
   gre->SetPointError(8,0,2.935984);
   gre->SetPoint(9,257.511,73.67296);
   gre->SetPointError(9,0,2.47336);
   gre->Draw("sp");*/
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_20_25_160");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(3,165,48.77587);
   gre->SetPointError(3,0,0.9974207);
   gre->SetPoint(4,175,42.26106);
   gre->SetPointError(4,0,0.9654362);
   gre->SetPoint(5,185,55.98001);
   gre->SetPointError(5,0,1.090646);
   gre->SetPoint(6,195,77.9784);
   gre->SetPointError(6,0,1.252415);
   gre->SetPoint(7,205,106.4626);
   gre->SetPointError(7,0,1.431844);
   gre->SetPoint(8,215,129.3559);
   gre->SetPointError(8,0,1.548616);
   gre->SetPoint(9,225,144.3443);
   gre->SetPointError(9,0,1.625791);
   gre->SetPoint(10,235,155.7722);
   gre->SetPointError(10,0,1.698802);
   gre->SetPoint(11,245,137.7249);
   gre->SetPointError(11,0,1.712463);
   gre->Draw("sp");
   TF1 *phspSC_20_25_160 = new TF1("phspSC_20_25_160","pol2",13,280);
   phspSC_20_25_160->SetFillColor(19);
   phspSC_20_25_160->SetFillStyle(0);
   phspSC_20_25_160->SetLineWidth(2);
   phspSC_20_25_160->SetParameter(0,-0.128176);
   phspSC_20_25_160->SetParError(0,0);
   phspSC_20_25_160->SetParLimits(0,0,0);
   phspSC_20_25_160->SetParameter(1,0.00190434);
   phspSC_20_25_160->SetParError(1,0);
   phspSC_20_25_160->SetParLimits(1,0,0);
   phspSC_20_25_160->SetParameter(2,-3.8423e-06);
   phspSC_20_25_160->SetParError(2,0);
   phspSC_20_25_160->SetParLimits(2,0,0);
   phspSC_20_25_160->Draw("same");
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
   
   TH1 *hisT11 = new TH2D("hisT11","",90,160,250,20,-0.57,0.57);
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
   gre->SetName("gr_T11_19");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.124344);
   gre->SetPointError(0,0,0.0392246);
   gre->SetPoint(1,170,-0.186926);
   gre->SetPointError(1,0,0.0345333);
   gre->SetPoint(2,180,-0.193876);
   gre->SetPointError(2,0,0.0300264);
   gre->SetPoint(3,190,-0.223622);
   gre->SetPointError(3,0,0.0254902);
   gre->SetPoint(4,200,-0.214253);
   gre->SetPointError(4,0,0.022518);
   gre->SetPoint(5,210,-0.210099);
   gre->SetPointError(5,0,0.0213649);
   gre->SetPoint(6,220,-0.306744);
   gre->SetPointError(6,0,0.0202347);
   gre->SetPoint(7,230,-0.252935);
   gre->SetPointError(7,0,0.021475);
   gre->SetPoint(8,240,-0.193357);
   gre->SetPointError(8,0,0.0246563);
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
   
   TH1 *hisT20 = new TH2D("hisT20","",90,160,250,20,-0.57,0.57);
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
   gre->SetName("gr_T20_19");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.157982);
   gre->SetPointError(0,0,0.0595008);
   gre->SetPoint(1,170,-0.0463009);
   gre->SetPointError(1,0,0.0526843);
   gre->SetPoint(2,180,-0.0801989);
   gre->SetPointError(2,0,0.0462367);
   gre->SetPoint(3,190,-0.256696);
   gre->SetPointError(3,0,0.0362234);
   gre->SetPoint(4,200,-0.286936);
   gre->SetPointError(4,0,0.0319871);
   gre->SetPoint(5,210,-0.428429);
   gre->SetPointError(5,0,0.0278463);
   gre->SetPoint(6,220,-0.419283);
   gre->SetPointError(6,0,0.0271219);
   gre->SetPoint(7,230,-0.443812);
   gre->SetPointError(7,0,0.0273095);
   gre->SetPoint(8,240,-0.452447);
   gre->SetPointError(8,0,0.0302183);
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
   
   TH1 *hisT22 = new TH2D("hisT22","",90,160,250,20,-0.57,0.57);
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
   gre->SetName("gr_T22_19");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.128841);
   gre->SetPointError(0,0,0.0350203);
   gre->SetPoint(1,170,-0.0818196);
   gre->SetPointError(1,0,0.029896);
   gre->SetPoint(2,180,-0.107126);
   gre->SetPointError(2,0,0.0269395);
   gre->SetPoint(3,190,-0.101071);
   gre->SetPointError(3,0,0.0219531);
   gre->SetPoint(4,200,-0.0696727);
   gre->SetPointError(4,0,0.0186008);
   gre->SetPoint(5,210,-0.0748912);
   gre->SetPointError(5,0,0.0160806);
   gre->SetPoint(6,220,-0.0277053);
   gre->SetPointError(6,0,0.0157024);
   gre->SetPoint(7,230,-0.0380544);
   gre->SetPointError(7,0,0.0159708);
   gre->SetPoint(8,240,-0.0035927);
   gre->SetPointError(8,0,0.0177625);
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
   
   TH1 *hisCro = new TH2D("hisCro","",90,160,250,2000,1,2000);
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
   gre->SetName("gr_Cro_20");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160+5,0.0307076*1000);
   gre->SetPointError(0,0,0.00151789);
   gre->SetPoint(1,170+5,0.0268119*1000);
   gre->SetPointError(1,0,0.00142133);
   gre->SetPoint(2,180+5,0.0235703*1000);
   gre->SetPointError(2,0,0.00131999);
   gre->SetPoint(3,190+5,0.0289327*1000);
   gre->SetPointError(3,0,0.0014705);
   gre->SetPoint(4,200+5,0.0298846*1000);
   gre->SetPointError(4,0,0.00149041);
   gre->SetPoint(5,210+5,0.0274586*1000);
   gre->SetPointError(5,0,0.00142804);
   gre->SetPoint(6,220+5,0.0279591*1000);
   gre->SetPointError(6,0,0.00143957);
   gre->SetPoint(7,230+5,0.0276544*1000);
   gre->SetPointError(7,0,0.0014241);
   gre->SetPoint(8,240+5,0.0313674*1000);
   gre->SetPointError(8,0,0.00150257);
   gre->Draw("sp");
/*      TGraphErrors *gren = new TGraphErrors(10);
   gren->SetName("gr_crsection_20_25_140");
   gren->SetTitle("");
   gren->SetFillColor(1);
   gren->SetLineColor(2);
   gren->SetMarkerColor(2);
   gren->SetMarkerStyle(26);
   gren->SetPoint(0,159.835,45.06282);
   gren->SetPointError(0,0,2.24954);
   gren->SetPoint(1,169.7102,28.9073);
   gren->SetPointError(1,0,1.952654);
   gren->SetPoint(2,179.5853,25.49597);
   gren->SetPointError(2,0,1.899557);
   gren->SetPoint(3,189.3442,28.19929);
   gren->SetPointError(3,0,1.950373);
   gren->SetPoint(4,199.2194,32.83354);
   gren->SetPointError(4,0,1.987414);
   gren->SetPoint(5,209.0945,34.89321);
   gren->SetPointError(5,0,2.022883);
   gren->SetPoint(6,218.9696,39.46309);
   gren->SetPointError(6,0,2.08831);
   gren->SetPoint(7,228.7285,37.2747);
   gren->SetPointError(7,0,2.027397);
   gren->SetPoint(8,238.6037,38.11144);
   gren->SetPointError(8,0,2.10002);
   gren->SetPoint(9,248.4788,45.70646);
   gren->SetPointError(9,0,2.502705);
   gren->Draw("samep");*/
   /*TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("gr_crsection_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(5);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,160.0355,46.85143);
   gre->SetPointError(0,0,2.063534);
   gre->SetPoint(1,170.1265,42.5232);
   gre->SetPointError(1,0,2.406068);
   gre->SetPoint(2,180.2175,45.07629);
   gre->SetPointError(2,0,2.318658);
   gre->SetPoint(3,190.3085,40.97187);
   gre->SetPointError(3,0,2.205082);
   gre->SetPoint(4,200.3995,45.93918);
   gre->SetPointError(4,0,2.213043);
   gre->SetPoint(5,210.4905,45.53378);
   gre->SetPointError(5,0,1.986006);
   gre->SetPoint(6,220.5815,44.06776);
   gre->SetPointError(6,0,1.848242);
   gre->SetPoint(7,230.6725,40.01032);
   gre->SetPointError(7,0,1.828706);
   gre->SetPoint(8,240.7635,28.18999);
   gre->SetPointError(8,0,1.782641);
   gre->SetPoint(9,250.8545,38.30603);
   gre->SetPointError(9,0,1.758519);
   gre->Draw("sp");*/
   TGraphErrors *gre = new TGraphErrors(15);
   gre->SetName("gr_crsection_20_25_140");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(26);
   gre->SetPoint(3,165,37.86434);
   gre->SetPointError(3,0,0.908308);
//   gre->SetPoint(4,175,-0.6508787);
//   gre->SetPointError(4,0,-0.02001001);
   gre->SetPoint(5,185,26.54363);
   gre->SetPointError(5,0,0.8654332);
//   gre->SetPoint(6,195,-0.5656362);
//   gre->SetPointError(6,0,-0.01524669);
   gre->SetPoint(7,205,35.56285);
   gre->SetPointError(7,0,0.9058202);
   gre->SetPoint(8,215,38.73766);
   gre->SetPointError(8,0,0.9102169);
   gre->SetPoint(9,225,35.36275);
   gre->SetPointError(9,0,0.878241);
   gre->SetPoint(10,235,37.19646);
   gre->SetPointError(10,0,0.8780749);
   gre->SetPoint(11,245,25.55149);
   gre->SetPointError(11,0,0.9188093);
   gre->Draw("sp");
   TF1 *phspSC_20_25_140 = new TF1("phspSC_20_25_140","pol2",13,280);
   phspSC_20_25_140->SetFillColor(19);
   phspSC_20_25_140->SetFillStyle(0);
   phspSC_20_25_140->SetLineWidth(2);
   phspSC_20_25_140->SetParameter(0,0.00236993);
   phspSC_20_25_140->SetParError(0,0);
   phspSC_20_25_140->SetParLimits(0,0,0);
   phspSC_20_25_140->SetParameter(1,0.000601773);
   phspSC_20_25_140->SetParError(1,0);
   phspSC_20_25_140->SetParLimits(1,0,0);
   phspSC_20_25_140->SetParameter(2,-8.18113e-07);
   phspSC_20_25_140->SetParError(2,0);
   phspSC_20_25_140->SetParLimits(2,0,0);
   phspSC_20_25_140->Draw("same");
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
   
   TH1 *hisT11 = new TH2D("hisT11","",90,160,250,20,-0.57,0.57);
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
   gre->SetName("gr_T11_20");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.118344);
   gre->SetPointError(0,0,0.0419179);
   gre->SetPoint(1,170,-0.241132);
   gre->SetPointError(1,0,0.0423418);
   gre->SetPoint(2,180,-0.151783);
   gre->SetPointError(2,0,0.044625);
   gre->SetPoint(3,190,-0.191827);
   gre->SetPointError(3,0,0.0428793);
   gre->SetPoint(4,200,-0.195934);
   gre->SetPointError(4,0,0.0423344);
   gre->SetPoint(5,210,-0.227022);
   gre->SetPointError(5,0,0.0402218);
   gre->SetPoint(6,220,-0.20415);
   gre->SetPointError(6,0,0.0430243);
   gre->SetPoint(7,230,-0.160653);
   gre->SetPointError(7,0,0.0442287);
   gre->SetPoint(8,240,-0.134527);
   gre->SetPointError(8,0,0.0483558);
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
   
   TH1 *hisT20 = new TH2D("hisT20","",90,160,250,20,-0.57,0.57);
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
   gre->SetName("gr_T20_20");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,0.073254);
   gre->SetPointError(0,0,0.0663473);
   gre->SetPoint(1,170,-0.0416627);
   gre->SetPointError(1,0,0.0668841);
   gre->SetPoint(2,180,-0.168671);
   gre->SetPointError(2,0,0.0647681);
   gre->SetPoint(3,190,-0.227123);
   gre->SetPointError(3,0,0.0596002);
   gre->SetPoint(4,200,-0.1996);
   gre->SetPointError(4,0,0.0599692);
   gre->SetPoint(5,210,-0.118793);
   gre->SetPointError(5,0,0.0625753);
   gre->SetPoint(6,220,-0.360743);
   gre->SetPointError(6,0,0.0582013);
   gre->SetPoint(7,230,-0.23875);
   gre->SetPointError(7,0,0.0611743);
   gre->SetPoint(8,240,-0.353383);
   gre->SetPointError(8,0,0.0589474);
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
   
   TH1 *hisT22 = new TH2D("hisT22","",90,160,250,20,-0.57,0.57);
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
   gre->SetName("gr_T22_20");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineStyle(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.9);
   gre->SetPoint(0,160,-0.0117905);
   gre->SetPointError(0,0,0.0374752);
   gre->SetPoint(1,170,-0.0329643);
   gre->SetPointError(1,0,0.0390845);
   gre->SetPoint(2,180,-0.0165107);
   gre->SetPointError(2,0,0.0377321);
   gre->SetPoint(3,190,-0.021379);
   gre->SetPointError(3,0,0.033498);
   gre->SetPoint(4,200,-0.0321633);
   gre->SetPointError(4,0,0.0351073);
   gre->SetPoint(5,210,-0.0714022);
   gre->SetPointError(5,0,0.0348648);
   gre->SetPoint(6,220,-0.11314);
   gre->SetPointError(6,0,0.0319612);
   gre->SetPoint(7,230,-0.0099408);
   gre->SetPointError(7,0,0.0345819);
   gre->SetPoint(8,240,0.0236287);
   gre->SetPointError(8,0,0.0361177);
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
   canvas_6->cd();
   canvas_6->Modified();
   canvas_6->cd();
   canvas_6->SetSelected(canvas_6);
}
