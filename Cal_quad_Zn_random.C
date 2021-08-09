#include <iostream>
#include "TGraphErrors.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH1.h"
#include "TRandom.h"



float func(float x){

return 0.*x;

}

void Cal_Zn() {

gStyle->SetOptFit(1111);

TGraphErrors *gr0_0 = new TGraphErrors("Dat/Clover0_0.dat");gr0_0->SetTitle("Clover0_0");
TGraphErrors *gr0_1 = new TGraphErrors("Dat/Clover0_1.dat");gr0_1->SetTitle("Clover0_0");
TGraphErrors *gr0_2 = new TGraphErrors("Dat/Clover0_2.dat");gr0_2->SetTitle("Clover0_0");
TGraphErrors *gr0_3 = new TGraphErrors("Dat/Clover0_3.dat");gr0_3->SetTitle("Clover0_0");

TGraphErrors *gr1_0 = new TGraphErrors("Dat/Clover1_0.dat");gr1_0->SetTitle("Clover1_0");
TGraphErrors *gr1_1 = new TGraphErrors("Dat/Clover1_1.dat");gr1_1->SetTitle("Clover1_1");
TGraphErrors *gr1_2 = new TGraphErrors("Dat/Clover1_2.dat");gr1_2->SetTitle("Clover1_2");
TGraphErrors *gr1_3 = new TGraphErrors("Dat/Clover1_3.dat");gr1_3->SetTitle("Clover1_3");

TGraphErrors *gr2_0 = new TGraphErrors("Dat/Clover2_0.dat");gr2_0->SetTitle("Clover2_0");
TGraphErrors *gr2_1 = new TGraphErrors("Dat/Clover2_1.dat");gr2_1->SetTitle("Clover2_1");
TGraphErrors *gr2_2 = new TGraphErrors("Dat/Clover2_2.dat");gr2_2->SetTitle("Clover2_2");
TGraphErrors *gr2_3 = new TGraphErrors("Dat/Clover2_3.dat");gr2_3->SetTitle("Clover2_3");

TGraphErrors *gr3_0 = new TGraphErrors("Dat/Clover3_0.dat");gr3_0->SetTitle("Clover3_0");
TGraphErrors *gr3_1 = new TGraphErrors("Dat/Clover3_1.dat");gr3_1->SetTitle("Clover3_1");
TGraphErrors *gr3_2 = new TGraphErrors("Dat/Clover3_2.dat");gr3_2->SetTitle("Clover3_2");
TGraphErrors *gr3_3 = new TGraphErrors("Dat/Clover3_3.dat");gr3_3->SetTitle("Clover3_3");

TCanvas *Det0 = new TCanvas("Det0");Det0->Divide(2,2);
TCanvas *Det1 = new TCanvas("Det1");Det1->Divide(2,2);
TCanvas *Det2 = new TCanvas("Det2");Det2->Divide(2,2);
TCanvas *Det3 = new TCanvas("Det3");Det3->Divide(2,2);


TF1 *res = new TF1("res","func(x)", 0, 2700);

TF1 *f0_0 = new TF1("f0_0","[0]+[1]*x + [2]*x*x");
TF1 *f0_1 = new TF1("f0_1","[0]+[1]*x + [2]*x*x");
TF1 *f0_2 = new TF1("f0_2","[0]+[1]*x + [2]*x*x");
TF1 *f0_3 = new TF1("f0_3","[0]+[1]*x + [2]*x*x");

TF1 *f1_0 = new TF1("f1_0","[0]+[1]*x + [2]*x*x");
TF1 *f1_1 = new TF1("f1_1","[0]+[1]*x + [2]*x*x");
TF1 *f1_2 = new TF1("f1_2","[0]+[1]*x + [2]*x*x");
TF1 *f1_3 = new TF1("f1_3","[0]+[1]*x + [2]*x*x");

TF1 *f2_0 = new TF1("f2_0","[0]+[1]*x + [2]*x*x");
TF1 *f2_1 = new TF1("f2_1","[0]+[1]*x + [2]*x*x");
TF1 *f2_2 = new TF1("f2_2","[0]+[1]*x + [2]*x*x");
TF1 *f2_3 = new TF1("f2_3","[0]+[1]*x + [2]*x*x");

TF1 *f3_0 = new TF1("f3_0","[0]+[1]*x + [2]*x*x");
TF1 *f3_1 = new TF1("f3_1","[0]+[1]*x + [2]*x*x");
TF1 *f3_2 = new TF1("f3_2","[0]+[1]*x + [2]*x*x");
TF1 *f3_3 = new TF1("f3_3","[0]+[1]*x + [2]*x*x");




Det0->cd(1);
gr0_0->SetMarkerSize(1); gr0_0->SetMarkerStyle(); gr0_0->Draw("ap"); gr0_0->Fit("f0_0");
gr0_0->GetXaxis()->SetTitle("Energy [kev]"); gr0_0->GetYaxis()->SetTitle("[channels]");
Det0->cd(2);
gr0_1->SetMarkerSize(1); gr0_1->SetMarkerStyle(); gr0_1->Draw("ap"); gr0_1->Fit("f0_1");
gr0_1->GetXaxis()->SetTitle("Energy [kev]"); gr0_0->GetYaxis()->SetTitle("[channels]");
Det0->cd(3);
gr0_2->SetMarkerSize(1); gr0_2->SetMarkerStyle(); gr0_2->Draw("ap"); gr0_2->Fit("f0_2");
gr0_2->GetXaxis()->SetTitle("Energy [kev]"); gr0_0->GetYaxis()->SetTitle("[channels]");
Det0->cd(4); 
gr0_3->SetMarkerSize(1); gr0_3->SetMarkerStyle(); gr0_3->Draw("ap"); gr0_3->Fit("f0_3");
gr0_3->GetXaxis()->SetTitle("Energy [kev]"); gr0_0->GetYaxis()->SetTitle("[channels]");

Det1->cd(1);
gr1_0->SetMarkerSize(3); gr1_0->SetMarkerStyle(); gr1_0->Draw("ap"); gr1_0->Fit("f1_0");
gr1_0->GetXaxis()->SetTitle("Energy [kev]"); gr0_0->GetYaxis()->SetTitle("[channels]");
Det1->cd(2);
gr1_1->SetMarkerSize(3); gr1_1->SetMarkerStyle(); gr1_1->Draw("ap"); gr1_1->Fit("f1_1");
gr1_1->GetXaxis()->SetTitle("Energy [kev]"); gr1_1->GetYaxis()->SetTitle("[channels]");
Det1->cd(3);
gr1_2->SetMarkerSize(3); gr1_2->SetMarkerStyle(); gr1_2->Draw("ap"); gr1_2->Fit("f1_2");
gr1_2->GetXaxis()->SetTitle("Energy [kev]"); gr1_2->GetYaxis()->SetTitle("[channels]");
Det1->cd(4);
gr1_3->SetMarkerSize(3); gr1_3->SetMarkerStyle(); gr1_3->Draw("ap"); gr1_3->Fit("f1_3");
gr1_3->GetXaxis()->SetTitle("Energy [kev]"); gr1_3->GetYaxis()->SetTitle("[channels]");

Det2->cd(1);
gr2_0->SetMarkerSize(3); gr2_0->SetMarkerStyle(); gr2_0->Draw("ap"); gr2_0->Fit("f2_0");
gr2_0->GetXaxis()->SetTitle("Energy [kev]"); gr2_0->GetYaxis()->SetTitle("[channels]");
Det2->cd(2);
gr2_1->SetMarkerSize(3); gr2_1->SetMarkerStyle(); gr2_1->Draw("ap"); gr2_1->Fit("f2_1");
gr2_1->GetXaxis()->SetTitle("Energy [kev]"); gr2_1->GetYaxis()->SetTitle("[channels]");
Det2->cd(3);
gr2_2->SetMarkerSize(3); gr2_2->SetMarkerStyle(); gr2_2->Draw("ap"); gr2_2->Fit("f2_2");
gr2_2->GetXaxis()->SetTitle("Energy [kev]"); gr2_2->GetYaxis()->SetTitle("[channels]");
Det2->cd(4);
gr2_3->SetMarkerSize(3); gr2_3->SetMarkerStyle(); gr2_3->Draw("ap"); gr2_3->Fit("f2_3");
gr2_3->GetXaxis()->SetTitle("Energy [kev]"); gr2_3->GetYaxis()->SetTitle("[channels]");

Det3->cd(1);
gr3_0->SetMarkerSize(3); gr3_0->SetMarkerStyle(); gr3_0->Draw("ap"); gr3_0->Fit("f3_0");
gr3_0->GetXaxis()->SetTitle("Energy [kev]"); gr3_0->GetYaxis()->SetTitle("[channels]");
Det3->cd(2);
gr3_1->SetMarkerSize(3); gr3_1->SetMarkerStyle(); gr3_1->Draw("ap"); gr3_1->Fit("f3_1");
gr3_1->GetXaxis()->SetTitle("Energy [kev]"); gr3_1->GetYaxis()->SetTitle("[channels]");
Det3->cd(3);
gr3_2->SetMarkerSize(3); gr3_2->SetMarkerStyle(); gr3_2->Draw("ap"); gr3_2->Fit("f3_2");
gr3_2->GetXaxis()->SetTitle("Energy [kev]"); gr3_2->GetYaxis()->SetTitle("[channels]");
Det3->cd(4);
gr3_3->SetMarkerSize(3); gr3_3->SetMarkerStyle(); gr3_3->Draw("ap"); gr3_3->Fit("f3_3");
gr3_3->GetXaxis()->SetTitle("Energy [kev]"); gr3_3->GetYaxis()->SetTitle("[channels]");

Det0->SaveAs("PNG/Det0.png"); Det1->SaveAs("PNG/Det1.png"); Det2->SaveAs("PNG/Det2.png"); Det3->SaveAs("PNG/Det3.png");


TF1 * flist[16] = {f0_0, f0_1, f0_2, f0_3, f1_0, f1_1, f1_2, f1_3, f2_0, f2_1, f2_2, f2_3, f3_0, f3_1, f3_2, f3_3};


TFile *file1 = new TFile("prova_Zn.root");


std::cout<< "Test1"<<std::endl;


TH1F *h0_0, *h0_1, *h0_2, *h0_3, *h1_0, *h1_1, *h1_2, *h1_3, *h2_0, *h2_1, *h2_2, *h2_3, *h3_0, *h3_1, *h3_2, *h3_3;


TH1F * arr [16]= {h0_0, h0_1, h0_2, h0_3, h1_0, h1_1, h1_2, h1_3, h2_0, h2_1, h2_2, h2_3, h3_0, h3_1, h3_2, h3_3};


const char * mimmo [16] = {"OldHisto/h0_Clov1", "OldHisto/h1_Clov1", "OldHisto/h2_Clov1", "OldHisto/h3_Clov1", "OldHisto/h4_Clov2", "OldHisto/h5_Clov2", 
"OldHisto/h6_Clov2", "OldHisto/h7_Clov2", "OldHisto/h8_Clov3", "OldHisto/h9_Clov3", "OldHisto/h10_Clov3", "OldHisto/h11_Clov3", 
"OldHisto/h12_Clov4", "OldHisto/h13_Clov4", "OldHisto/h14_Clov4", "OldHisto/h15_Clov4"};


std::cout<< "Test2"<<std::endl;

for (int n = 0; n<16; n++){

file1->GetObject(mimmo[n], arr[n]);

}



TCanvas *A0 = new TCanvas("A0");

A0->cd();


for (int n = 0; n<16; n++){

file1->GetObject(mimmo[n], arr[n]);


arr[n]->Draw("same");

}



/*
file1->GetObject("OldHisto/h0_Clov1", h0_0);
file1->GetObject("OldHisto/h1_Clov1", h0_1);
file1->GetObject("OldHisto/h2_Clov1", h0_2);
file1->GetObject("OldHisto/h3_Clov1", h0_3);
file1->GetObject("OldHisto/h4_Clov2", h1_0);
file1->GetObject("OldHisto/h5_Clov2", h1_1);
file1->GetObject("OldHisto/h6_Clov2", h1_2);
file1->GetObject("OldHisto/h7_Clov2", h1_3);
file1->GetObject("OldHisto/h8_Clov3", h2_0);
file1->GetObject("OldHisto/h9_Clov3", h2_1);
file1->GetObject("OldHisto/h10_Clov3", h2_2);
file1->GetObject("OldHisto/h11_Clov3", h2_3);
file1->GetObject("OldHisto/h12_Clov4", h3_0);
file1->GetObject("OldHisto/h13_Clov4", h3_1);
file1->GetObject("OldHisto/h14_Clov4", h0_0);
file1->GetObject("OldHisto/h15_Clov4", h0_0);


//TDirectoryFile * f = (TDirectoryFile*)file1->Get("OldHisto");

//f->cd();

//TH1F *h0_0 = (TH1F*)file1->Get("h0_Clov1"); 
TH1F *h0_1 = (TH1F*)file1->Get("h1_Clov1");
TH1F *h0_2 = (TH1F*)file1->Get("h2_Clov1");
TH1F *h0_3 = (TH1F*)file1->Get("h3_Clov1");

TH1F *h1_0 = (TH1F*)file1->Get("h4_Clov2");
TH1F *h1_1 = (TH1F*)file1->Get("h5_Clov2");
TH1F *h1_2 = (TH1F*)file1->Get("h6_Clov2");
TH1F *h1_3 = (TH1F*)file1->Get("h7_Clov2");

TH1F *h2_0 = (TH1F*)file1->Get("h8_Clov3");
TH1F *h2_1 = (TH1F*)file1->Get("h9_Clov3");
TH1F *h2_2 = (TH1F*)file1->Get("h10_Clov3");
TH1F *h2_3 = (TH1F*)file1->Get("h11_Clov3");


TH1F *h3_0 = (TH1F*)file1->Get("h12_Clov4");
TH1F *h3_1 = (TH1F*)file1->Get("h13_Clov4");
TH1F *h3_2 = (TH1F*)file1->Get("h14_Clov4");
TH1F *h3_3 = (TH1F*)file1->Get("h15_Clov4");


*/







std::cout<< "Test3"<<std::endl;

TH1F *hClov_0_0 = new TH1F("hClov_0_0_","hClov_0_0_",16384,0,16384); Float_t Arr0_0[16384];
hClov_0_0->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_0_1 = new TH1F("hClov_0_1_","hClov_0_1_",16384,0,16384); Float_t Arr0_1[16384];
hClov_0_1->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_0_2 = new TH1F("hClov_0_2_","hClov_0_2_",16384,0,16384); Float_t Arr0_2[16384];
hClov_0_2->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_0_3 = new TH1F("hClov_0_3_","hClov_0_3_",16384,0,16384); Float_t Arr0_3[16384];
hClov_0_3->GetXaxis()->SetTitle("energy [kev]");

TH1F *hClov_1_0 = new TH1F("hClov_1_0_","hClov_1_0_",16384,0,16384); Float_t Arr1_0[16384];
hClov_1_0->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_1_1 = new TH1F("hClov_1_1_","hClov_1_1_",16384,0,16384); Float_t Arr1_1[16384];
hClov_1_1->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_1_2 = new TH1F("hClov_1_2_","hClov_1_2_",16384,0,16384); Float_t Arr1_2[16384];
hClov_1_2->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_1_3 = new TH1F("hClov_1_3_","hClov_1_3_",16384,0,16384); Float_t Arr1_3[16384];
hClov_1_3->GetXaxis()->SetTitle("energy [kev]");

TH1F *hClov_2_0 = new TH1F("hClov_2_0_","hClov_2_0_",16384,0,16384); Float_t Arr2_0[16384];
hClov_2_0->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_2_1 = new TH1F("hClov_2_1_","hClov_2_1_",16384,0,16384); Float_t Arr2_1[16384];
hClov_2_1->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_2_2 = new TH1F("hClov_2_2_","hClov_2_2_",16384,0,16384); Float_t Arr2_2[16384];
hClov_2_2->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_2_3 = new TH1F("hClov_2_3_","hClov_2_3_",16384,0,16384); Float_t Arr2_3[16384];
hClov_2_3->GetXaxis()->SetTitle("energy [kev]");

TH1F *hClov_3_0 = new TH1F("hClov_3_0_","hClov_3_0_",16384,0,16384); Float_t Arr3_0[16384];
hClov_3_0->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_3_1 = new TH1F("hClov_3_1_","hClov_3_1_",16384,0,16384); Float_t Arr3_1[16384];
hClov_3_1->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_3_2 = new TH1F("hClov_3_2_","hClov_3_2_",16384,0,16384); Float_t Arr3_2[16384];
hClov_3_2->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClov_3_3 = new TH1F("hClov_3_3_","hClov_3_3_",16384,0,16384); Float_t Arr3_3[16384];
hClov_3_3->GetXaxis()->SetTitle("energy [kev]");

TH1F *hClover_0 = new TH1F("hClover_0","hClov_0",16384,0,16384);
hClover_0->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClover_1 = new TH1F("hClover_1","hClov_1",16384,0,16384);
hClover_1->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClover_2 = new TH1F("hClover_2","hClov_2",16384,0,16384);
hClover_2->GetXaxis()->SetTitle("energy [kev]");
TH1F *hClover_3 = new TH1F("hClover_3","hClov_3",16384,0,16384);
hClover_3->GetXaxis()->SetTitle("energy [kev]");



std::cout<< "Test4"<<std::endl;


for (int i = 0; i < 16384; i++) {

Arr0_0[i] = arr[0]->GetBinContent(i); Arr0_1[i] = arr[1]->GetBinContent(i);

Arr0_2[i] = arr[2]->GetBinContent(i); Arr0_3[i] = arr[3]->GetBinContent(i);

Arr1_0[i] = arr[4]->GetBinContent(i); Arr1_1[i] = arr[5]->GetBinContent(i);
Arr1_2[i] = arr[6]->GetBinContent(i); Arr1_3[i] = arr[7]->GetBinContent(i);
Arr2_0[i] = arr[8]->GetBinContent(i); Arr2_1[i] = arr[9]->GetBinContent(i);
Arr2_2[i] = arr[10]->GetBinContent(i); Arr2_3[i] = arr[11]->GetBinContent(i);
Arr3_0[i] = arr[12]->GetBinContent(i); Arr3_1[i] = arr[13]->GetBinContent(i);
Arr3_2[i] = arr[14]->GetBinContent(i); Arr3_3[i] = arr[15]->GetBinContent(i);


}



std::cout<< "Test4.25"<<std::endl;

std::cout<< "Test4.5"<<std::endl;

for (int i = 0; i < 16384; i++) {

 	


Int_t bin0_0 = hClov_0_0->GetBin( (-f0_0->GetParameter(1) + sqrt(pow(f0_0->GetParameter(1) , 2) - 4*(f0_0->GetParameter(2))*(f0_0->GetParameter(2) - i )))/(2*(f0_0->GetParameter(2))));

//std::cout<< (-f0_0->GetParameter(1) + sqrt(pow(f0_0->GetParameter(1) , 2) - 4*(f0_0->GetParameter(2))*(f0_0->GetParameter(2) - i )))/(2*(f0_0->GetParameter(2)))<<std::endl;

Int_t bin0_1 = hClov_0_1->GetBin((-f0_1->GetParameter(1) + sqrt(pow(f0_1->GetParameter(1) , 2) - 4*(f0_1->GetParameter(2))*(f0_1->GetParameter(0) - i )))/(2*f0_1->GetParameter(2)));
Int_t bin0_2 = hClov_0_2->GetBin((-f0_2->GetParameter(1) + sqrt(pow(f0_2->GetParameter(1) , 2) - 4*(f0_2->GetParameter(2))*(f0_2->GetParameter(0) - i )))/(2*f0_2->GetParameter(2)));
Int_t bin0_3 = hClov_0_3->GetBin((-f0_3->GetParameter(1) + sqrt(pow(f0_3->GetParameter(1) , 2) - 4*(f0_3->GetParameter(2))*(f0_3->GetParameter(0) - i )))/(2*f0_3->GetParameter(2)));

Int_t bin1_0 = hClov_1_0->GetBin((-f1_0->GetParameter(1) + sqrt(pow(f1_0->GetParameter(1) , 2) - 4*(f1_0->GetParameter(2))*(f1_0->GetParameter(0) - i )))/(2*f1_0->GetParameter(2)));
Int_t bin1_1 = hClov_1_1->GetBin((-f1_1->GetParameter(1) + sqrt(pow(f1_1->GetParameter(1) , 2) - 4*(f1_1->GetParameter(2))*(f1_1->GetParameter(0) - i )))/(2*f1_1->GetParameter(2)));
Int_t bin1_2 = hClov_1_2->GetBin((-f1_2->GetParameter(1) + sqrt(pow(f1_2->GetParameter(1) , 2) - 4*(f1_2->GetParameter(2))*(f1_2->GetParameter(0) - i )))/(2*f1_2->GetParameter(2)));
Int_t bin1_3 = hClov_1_3->GetBin((-f1_3->GetParameter(1) + sqrt(pow(f1_3->GetParameter(1) , 2) - 4*(f1_3->GetParameter(2))*(f1_3->GetParameter(0) - i )))/(2*f1_3->GetParameter(2)));


Int_t bin2_0 = hClov_2_0->GetBin((-f2_0->GetParameter(1) + sqrt(pow(f2_0->GetParameter(1) , 2) - 4*(f2_0->GetParameter(2))*(f2_0->GetParameter(0) - i )))/(2*f2_0->GetParameter(2)));
Int_t bin2_1 = hClov_2_1->GetBin((-f2_1->GetParameter(1) + sqrt(pow(f2_1->GetParameter(1) , 2) - 4*(f2_1->GetParameter(2))*(f2_1->GetParameter(0) - i )))/(2*f2_1->GetParameter(2)));
Int_t bin2_2 = hClov_2_2->GetBin((-f2_2->GetParameter(1) + sqrt(pow(f2_2->GetParameter(1) , 2) - 4*(f2_2->GetParameter(2))*(f2_2->GetParameter(0) - i )))/(2*f2_2->GetParameter(2)));
Int_t bin2_3 = hClov_2_3->GetBin((-f2_3->GetParameter(1) + sqrt(pow(f2_3->GetParameter(1) , 2) - 4*(f2_3->GetParameter(2))*(f2_3->GetParameter(0) - i )))/(2*f2_3->GetParameter(2)));


Int_t bin3_0 = hClov_3_0->GetBin((-f3_0->GetParameter(1) + sqrt(pow(f3_0->GetParameter(1) , 2) - 4*(f3_0->GetParameter(2))*(f3_0->GetParameter(0) - i )))/(2*f3_0->GetParameter(2)));
Int_t bin3_1 = hClov_3_1->GetBin((-f3_1->GetParameter(1) + sqrt(pow(f3_1->GetParameter(1) , 2) - 4*(f3_1->GetParameter(2))*(f3_1->GetParameter(0) - i )))/(2*f3_1->GetParameter(2)));
Int_t bin3_2 = hClov_3_2->GetBin((-f3_2->GetParameter(1) + sqrt(pow(f3_2->GetParameter(1) , 2) - 4*(f3_2->GetParameter(2))*(f3_2->GetParameter(0) - i )))/(2*f3_2->GetParameter(2)));
Int_t bin3_3 = hClov_3_3->GetBin((-f3_3->GetParameter(1) + sqrt(pow(f3_3->GetParameter(1) , 2) - 4*(f3_3->GetParameter(2))*(f3_3->GetParameter(0) - i )))/(2*f3_3->GetParameter(2)));




for (int j = 0; j<Arr0_0[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin0_0 < 16384 && bin0_0 > 0) hClov_0_0->AddBinContent(bin0_0 + rand);}

for (int j = 0; j<Arr0_1[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin0_1 < 16384 && bin0_1 > 0) hClov_0_1->AddBinContent(bin0_1 + rand);}

for (int j = 0; j<Arr0_2[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin0_2 < 16384 && bin0_2 > 0) hClov_0_2->AddBinContent(bin0_2 + rand);}

for (int j = 0; j<Arr0_3[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin0_3 < 16384 && bin0_3 > 0) hClov_0_3->AddBinContent(bin0_3 + rand);}

for (int j = 0; j<Arr1_0[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin1_0 < 16384 && bin1_0 > 0) hClov_1_0->AddBinContent(bin1_0 + rand);}

for (int j = 0; j<Arr1_1[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin1_1 < 16384 && bin1_1 > 0) hClov_1_1->AddBinContent(bin1_1 + rand);}

for (int j = 0; j<Arr1_2[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin1_2 < 16384 && bin1_2 > 0) hClov_1_2->AddBinContent(bin1_2 + rand);}

for (int j = 0; j<Arr1_3[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin1_3 < 16384 && bin1_3 > 0) hClov_1_3->AddBinContent(bin1_3 + rand);}

for (int j = 0; j<Arr2_0[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin2_0 < 16384 && bin2_0 > 0) hClov_2_0->AddBinContent(bin2_0 + rand);}

for (int j = 0; j<Arr2_1[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin2_1 < 16384 && bin2_1 > 0) hClov_2_1->AddBinContent(bin2_1 + rand);}

for (int j = 0; j<Arr2_2[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin2_2 < 16384 && bin2_2 > 0) hClov_2_2->AddBinContent(bin2_2 + rand);}

for (int j = 0; j<Arr2_3[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin2_3 < 16384 && bin2_3 > 0) hClov_2_3->AddBinContent(bin2_3 + rand);}

for (int j = 0; j<Arr3_0[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin3_0 < 16384 && bin3_0 > 0) hClov_3_0->AddBinContent(bin3_0 + rand);}

for (int j = 0; j<Arr3_1[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin3_1 < 16384 && bin3_1 > 0) hClov_3_1->AddBinContent(bin3_1 + rand);}

for (int j = 0; j<Arr3_2[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin3_2 < 16384 && bin3_2 > 0) hClov_3_2->AddBinContent(bin3_2 + rand);}

for (int j = 0; j<Arr3_3[i]; j++){
Double_t rand = gRandom->Gaus(0,1);
if(bin3_3 < 16384 && bin3_3 > 0) hClov_3_3->AddBinContent(bin3_3 + rand);}


}



std::cout<< "Test5"<<std::endl;

hClover_0->Add(hClov_0_0); hClover_0->Add(hClov_0_1); hClover_0->Add(hClov_0_2); hClover_0->Add(hClov_0_3);

hClover_1->Add(hClov_1_0); hClover_0->Add(hClov_1_1); hClover_0->Add(hClov_1_2); hClover_0->Add(hClov_1_3);

hClover_2->Add(hClov_2_0); hClover_0->Add(hClov_2_1); hClover_0->Add(hClov_2_2); hClover_0->Add(hClov_2_3);
 
hClover_3->Add(hClov_3_0); hClover_0->Add(hClov_3_1); hClover_0->Add(hClov_3_2); hClover_0->Add(hClov_3_3);



std::cout<< "Test6"<<std::endl;


TFile *file1_out = new TFile("prova_Zn.root","RECREATE");
file1_out->cd();


std::cout<< "Test7"<<std::endl;

hClov_0_0->Write(); hClov_0_1->Write(); hClov_0_2->Write(); hClov_0_3->Write();
hClov_1_0->Write(); hClov_1_1->Write(); hClov_1_2->Write(); hClov_1_3->Write();
hClov_2_0->Write(); hClov_2_1->Write(); hClov_2_2->Write(); hClov_2_3->Write();
hClov_3_0->Write(); hClov_3_1->Write(); hClov_3_2->Write(); hClov_3_3->Write();

hClover_0->Write(); hClover_1->Write(); hClover_2->Write(); hClover_3->Write();



std::cout<< "Test8"<<std::endl;

TGraphErrors * gr0, * gr1, * gr2, * gr3, * gr4, * gr5, * gr6, * gr7, * gr8, * gr9, * gr10, * gr11, * gr12, * gr13, * gr14, * gr15;



TGraphErrors * list_terr[16] = {gr0, gr1, gr2, gr3, gr4, gr5, gr6, gr7, gr8, gr9, gr10, gr11, gr12, gr13, gr14, gr15};


const char * text_arr[16]= {"Dat/Clover0_0.dat", "Dat/Clover0_1.dat", "Dat/Clover0_2.dat", "Dat/Clover0_3.dat", "Dat/Clover1_0.dat", 
                    "Dat/Clover1_1.dat", "Dat/Clover1_2.dat", "Dat/Clover1_3.dat", "Dat/Clover2_0.dat", "Dat/Clover2_1.dat",
                    "Dat/Clover2_2.dat", "Dat/Clover2_3.dat", "Dat/Clover3_0.dat", "Dat/Clover3_1.dat", "Dat/Clover3_2.dat",
                    "Dat/Clover3_3.dat"};


std::cout<< "Test9"<<std::endl;


// CANVAS PER I RESIDUI
TCanvas *D0 = new TCanvas("D0");D0->Divide(2,2);
D0->SetTitle("Residuals");

TCanvas *D1 = new TCanvas("D1");D1->Divide(2,2);
D1->SetTitle("Residuals");

TCanvas *D2 = new TCanvas("D2");D2->Divide(2,2);
D2->SetTitle("Residuals");

TCanvas *D3 = new TCanvas("D3");D3->Divide(2,2);
D3->SetTitle("Residuals");


std::cout<< "Test10"<<std::endl;


// GRAFICO DEI RESIDUI

for(int i = 0; i<16; i++){

  list_terr[i] = new TGraphErrors(text_arr[i]); // parte da una copia del grafico originale

}

for(int w = 0; w<16; w++){


  for (int i=0; i<list_terr[w]->GetN(); i++) {
    double res = list_terr[w]->GetY()[i] - flist[w]->Eval(list_terr[w]->GetX()[i]); // residuo
    list_terr[w]->SetPoint(i,list_terr[w]->GetX()[i],res);
    double eresy = list_terr[w]->GetEY()[i]; // contributo delle Yi
    double eresx = flist[w]->Derivative(list_terr[w]->GetX()[i])*list_terr[w]->GetEX()[i]; // contrib. Xi (approx. 1 ordine)
    double eres = TMath::Sqrt(eresy*eresy+eresx*eresx);
    list_terr[w]->SetPointError(i,0,eres);
  
  }


}


for(int i = 0; i<16; i++){


std::cout<< "Test11"<<std::endl;


  list_terr[i]->SetName("gr");
  // formattazione del grafico con comandi testuali
  list_terr[i]->SetMarkerColor(4);
  list_terr[i]->SetMarkerStyle(20);
  list_terr[i]->SetTitle(text_arr[i]);
  list_terr[i]->GetXaxis()->SetTitle("Thickness [#mum]");
  list_terr[i]->GetXaxis()->SetTitleSize(0.04);
  list_terr[i]->GetXaxis()->CenterTitle();
  list_terr[i]->GetYaxis()->SetTitle("Counts");
  list_terr[i]->GetYaxis()->SetTitleSize(0.04);
  list_terr[i]->GetYaxis()->CenterTitle();
}

std::cout<< "Test12"<<std::endl;

for (int j = 0; j<4; j++){

D0->cd(j + 1);
list_terr[j]->SetMarkerSize(1); list_terr[j]->SetMarkerStyle(1); list_terr[j]->Draw("ap"); res->Draw("same");
list_terr[j]->GetXaxis()->SetTitle("Energy [kev]"); list_terr[j]->GetYaxis()->SetTitle("Channels");

}


for (int j = 4; j<8; j++){

D1->cd(j - 3);
list_terr[j]->SetMarkerSize(1); list_terr[j]->SetMarkerStyle(1); list_terr[j]->Draw("ap"); res->Draw("same");
list_terr[j]->GetXaxis()->SetTitle("Energy [kev]"); list_terr[j]->GetYaxis()->SetTitle("Channels");

}


for (int j = 8; j<12; j++){

D2->cd(j - 7);
list_terr[j]->SetMarkerSize(1); list_terr[j]->SetMarkerStyle(1); list_terr[j]->Draw("ap"); res->Draw("same");
list_terr[j]->GetXaxis()->SetTitle("Energy [kev]"); list_terr[j]->GetYaxis()->SetTitle("Channels");

}

for (int j = 12; j<16; j++){

D3->cd(j - 11);
list_terr[j]->SetMarkerSize(1); list_terr[j]->SetMarkerStyle(1); list_terr[j]->Draw("ap");res->Draw("same");
list_terr[j]->GetXaxis()->SetTitle("Energy [kev]"); list_terr[j]->GetYaxis()->SetTitle("Channels");

}


D0->SaveAs("PNG/res_D0.png"); D1->SaveAs("PNG/res_D1.png"); D2->SaveAs("PNG/res_D2.png"); D3->SaveAs("PNG/res_D3.png");

/*
D0->cd(2);
gr1->SetMarkerSize(1); gr1->SetMarkerStyle(1); gr1->Draw("ap"); 
gr1->GetXaxis()->SetTitle("Energy [kev]"); gr1->GetYaxis()->SetTitle("[channels]");
D0->cd(3);
gr2->SetMarkerSize(1); gr2->SetMarkerStyle(1); gr2->Draw("ap");
gr2->GetXaxis()->SetTitle("Energy [kev]"); gr2->GetYaxis()->SetTitle("[channels]");
D0->cd(4);
gr3->SetMarkerSize(1); gr3->SetMarkerStyle(1); gr3->Draw("ap"); 
gr3->GetXaxis()->SetTitle("Energy [kev]"); gr3->GetYaxis()->SetTitle("[channels]");

*/

std::cout<< "Test13"<<std::endl;


return; }