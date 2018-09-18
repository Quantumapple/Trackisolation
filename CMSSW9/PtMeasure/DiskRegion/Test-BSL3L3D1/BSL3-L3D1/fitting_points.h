#ifndef fitting_points_h
#define fitting_points_h

double gen_Pt[43] ={}, point[43] = {}, error[43] = {};
int points = 43;
void set_arrary(){

gen_Pt[0] = 2;      point[0] = 0.0454373;     error[0] = 0.00649144;
gen_Pt[1] = 2.4;    point[1] = 0.0332042;     error[1] = 0.00372792;
gen_Pt[2] = 2.8;    point[2] = 0.0294645;     error[2] = 0.00392075;
//gen_Pt[3] = 3.2;    point[3] = 0.0209389;     error[3] = 0.00451988;
gen_Pt[3] = 3.6;    point[3] = 0.024847;     error[3] = 0.0031916;
gen_Pt[4] = 4;      point[4] = 0.0268319;     error[4] = 0.00772318;
//gen_Pt[6] = 4.4;    point[6] = 0.00752381;     error[6] = 0.00760773;
//gen_Pt[7] = 4.8;    point[7] = 0.0146466;     error[7] = 0.00364763;
gen_Pt[5] = 5.2;    point[5] = 0.0160005;     error[5] = 0.00288303;
gen_Pt[6] = 5.6;    point[6] = 0.0174469;     error[6] = 0.00329018;
gen_Pt[7] = 6;     point[7] = 0.0138294;     error[7] = 0.00105535;
gen_Pt[8] = 6.5;   point[8] = 0.0128669;     error[8] = 9.04621e-05;
gen_Pt[9] = 7;     point[9] = 0.0119407;     error[9] = 0.00103295;
gen_Pt[10] = 7.5;   point[10] = 0.0109915;      error[10] = 6.7514e-05;
gen_Pt[11] = 8;     point[11] = 0.010095;       error[11] = 0.000738026;
gen_Pt[12] = 9;     point[12] = 0.00901178;     error[12] = 0.000154669;
gen_Pt[13] = 10;    point[13] = 0.00821189;     error[13] = 0.000604838;
gen_Pt[14] = 11;    point[14] = 0.00749462;     error[14] = 0.000612748;
gen_Pt[15] = 12;    point[15] = 0.00699601;     error[15] = 0.000155159;
gen_Pt[16] = 13;    point[16] = 0.00653524;     error[16] = 0.000512988;
gen_Pt[17] = 14;    point[17] = 0.00601111;     error[17] = 1.13523e-05;
//gen_Pt[21] = 15;    point[21] = 0.00359516;     error[21] = 1.63202e-05;
gen_Pt[18] = 16;    point[18] = 0.00507381;     error[18] = 0.000200307;
gen_Pt[19] = 17;    point[19] = 0.00529808;     error[19] = 5.07676e-05;
gen_Pt[20] = 18;    point[20] = 0.00466866;     error[20] = 0.000463777;
gen_Pt[21] = 19;    point[21] = 0.00433108;     error[21] = 0.000409651;
gen_Pt[22] = 20;    point[22] = 0.00415566;     error[22] = 0.0003115;
gen_Pt[23] = 22;    point[23] = 0.00379151;     error[23] = 1.29302e-05;
gen_Pt[24] = 24;    point[24] = 0.00346704;     error[24] = 0.000308165;
gen_Pt[25] = 26;    point[25] = 0.003207;       error[25] = 0.000326695;
gen_Pt[26] = 28;    point[26] = 0.003;          error[26] = 6.48563e-05;
gen_Pt[27] = 30;    point[27] = 0.00278924;     error[27] = 0.000303437;
gen_Pt[28] = 32;    point[28] = 0.00261326;     error[28] = 4.38449e-05;
gen_Pt[29] = 34;    point[29] = 0.00250163;     error[29] = 8.25458e-05;
gen_Pt[30] = 36;    point[30] = 0.0023396;      error[30] = 0.000274548;
gen_Pt[31] = 38;    point[31] = 0.00219777;     error[31] = 0.00027893;
//gen_Pt[36] = 40;    point[36] = 0.00473876;     error[36] = 0.00653493;
//gen_Pt[37] = 42;    point[37] = 0.001823;     error[37] = 1.96016e-05;
gen_Pt[32] = 44;    point[32] = 0.00189819;     error[32] = 0.000296667;
gen_Pt[33] = 46;    point[33] = 0.00181095;     error[33] = 0.000255629;
gen_Pt[34] = 48;    point[34] = 0.00173832;     error[34] = 0.000253234;
gen_Pt[35] = 50;    point[35] = 0.00164939;     error[35] = 0.000222836;
//gen_Pt[42] = 55;    point[42] = 0.0112692;     error[42] = 0.00314146;
//gen_Pt[43] = 60;    point[43] = 0.00850002;     error[43] = 0.097741;
gen_Pt[36] = 65;    point[36] = 0.00127367;     error[36] = 0.000197794;
gen_Pt[37] = 70;    point[37] = 0.00130419;     error[37] = 3.06621e-05;
gen_Pt[38] = 75;    point[38] = 0.00112967;     error[38] = 0.000192604;
gen_Pt[39] = 80;    point[39] = 0.00105791;     error[39] = 0.000189131;
gen_Pt[40] = 85;    point[40] = 0.00112166;     error[40] = 6.10302e-05;
gen_Pt[41] = 90;    point[41] = 0.000932799;    error[41] = 0.000185717;
gen_Pt[42] = 95;    point[42] = 0.000897319;    error[42] = 0.000190669;
}
#endif
