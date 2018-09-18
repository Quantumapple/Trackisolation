#ifndef fitting_points_h
#define fitting_points_h

double gen_Pt[56] ={}, point[56] = {}, error[56] = {};
int points = 56;
void set_arrary(){

gen_Pt[0] = 2;      point[0] = 0.0304735;     error[0] = 0.00920443;
gen_Pt[1] = 2.1;    point[1] = 0.0284953;     error[1] = 0.00836461;
gen_Pt[2] = 2.2;    point[2] = 0.0257695;     error[2] = 0.00846683;
//gen_Pt[3] = 2.3;    point[3] = 0.0450528;     error[3] = 0.00504974;
//gen_Pt[3] = 2.4;    point[3] = 0.208958;     error[3] = 0.0254527;
//gen_Pt[5] = 2.5;    point[5] = 100.796;     error[5] = 0.005;
//gen_Pt[4] = 2.6;    point[4] = 0.0508712;     error[4] = 0.005;
//gen_Pt[5] = 2.7;    point[5] = 0.0677618;     error[5] = 0.005;
//gen_Pt[6] = 2.8;    point[6] = 0.0554341;     error[6] = 0.005;
//gen_Pt[7] = 2.9;    point[7] = 0.0370135;     error[7] = 0.00504038;
gen_Pt[3] = 3;      point[3] = 0.0206492;     error[3] = 0.00618344;
gen_Pt[4] = 3.2;    point[4] = 0.0177927;     error[4] = 0.00479596;
gen_Pt[5] = 3.4;    point[5] = 0.0163557;     error[5] = 0.00557422;
gen_Pt[6] = 3.6;    point[6] = 0.015944;      error[6] = 0.00417824;
gen_Pt[7] = 3.8;    point[7] = 0.0139733;     error[7] = 0.00475442;
gen_Pt[8] = 4;      point[8] = 0.0157878;     error[8] = 0.00422754;
gen_Pt[9] = 4.2;    point[9] = 0.0142678;     error[9] = 0.00397039;
gen_Pt[10] = 4.4;   point[10] = 0.0137349;     error[10] = 0.00368795;
gen_Pt[11] = 4.6;   point[11] = 0.0130097;     error[11] = 0.0034679;
gen_Pt[12] = 4.8;   point[12] = 0.0121777;     error[12] = 0.00474796;
gen_Pt[13] = 5;     point[13] = 0.0118446;     error[13] = 0.00374206;
gen_Pt[14] = 5.2;   point[14] = 0.0119183;     error[14] = 0.00100386;
gen_Pt[15] = 5.4;   point[15] = 0.0104497;     error[15] = 0.00397544;
gen_Pt[16] = 5.6;   point[16] = 0.0108374;     error[16] = 0.00333278;
gen_Pt[17] = 5.8;   point[17] = 0.00887137;    error[17] = 0.000474018;
//gen_Pt[25] = 6;     point[25] = 0.00973976;     error[25] = 0.00267791;
gen_Pt[18] = 6.5;   point[18] = 0.00887645;    error[18] = 0.00261679;
gen_Pt[19] = 7;     point[19] = 0.00857006;    error[19] = 0.00215609;
//gen_Pt[28] = 7.5;   point[28] = 0.0052667;     error[28] = 0.000189009;
gen_Pt[20] = 8;     point[20] = 0.00701129;    error[20] = 0.00192529;
gen_Pt[21] = 9;     point[21] = 0.0064812;     error[21] = 0.00170224;
gen_Pt[22] = 10;    point[22] = 0.00575206;    error[22] = 0.00144332;
gen_Pt[23] = 11;    point[23] = 0.00534565;    error[23] = 0.00141596;
gen_Pt[24] = 12;    point[24] = 0.00491372;    error[24] = 0.00125554;
gen_Pt[25] = 13;    point[25] = 0.00451459;    error[25] = 0.00118658;
gen_Pt[26] = 14;    point[26] = 0.00450648;    error[26] = 0.00108661;
gen_Pt[27] = 15;    point[27] = 0.00394323;    error[27] = 0.00107564;
gen_Pt[28] = 16;    point[28] = 0.00363319;    error[28] = 0.00102926;
gen_Pt[29] = 17;    point[29] = 0.0034316;     error[29] = 0.000964925;
gen_Pt[30] = 18;    point[30] = 0.00328049;    error[30] = 0.000924451;
gen_Pt[31] = 19;    point[31] = 0.00304982;    error[31] = 0.000900148;
gen_Pt[32] = 20;    point[32] = 0.00287263;    error[32] = 0.000801406;
gen_Pt[33] = 22;    point[33] = 0.00260037;    error[33] = 0.000773925;
gen_Pt[34] = 24;    point[34] = 0.00243047;    error[34] = 0.000687486;
gen_Pt[35] = 26;    point[35] = 0.00222134;    error[35] = 0.000665659;
gen_Pt[36] = 28;    point[36] = 0.00203837;    error[36] = 0.000625245;
gen_Pt[37] = 30;    point[37] = 0.00196948;    error[37] = 0.000563276;
gen_Pt[38] = 32;    point[38] = 0.0017927;     error[38] = 0.000568413;
gen_Pt[39] = 34;    point[39] = 0.00171686;    error[39] = 0.000537282;
gen_Pt[40] = 36;    point[40] = 0.00182843;    error[40] = 0.000447372;
gen_Pt[41] = 38;    point[41] = 0.00155183;    error[41] = 0.000497353;
gen_Pt[42] = 40;    point[42] = 0.00146335;    error[42] = 0.000474575;
gen_Pt[43] = 42;    point[43] = 0.00138962;    error[43] = 0.000484258;
gen_Pt[44] = 44;    point[44] = 0.00134562;    error[44] = 0.000451956;
gen_Pt[45] = 46;    point[45] = 0.00126651;    error[45] = 0.000454065;
gen_Pt[46] = 48;    point[46] = 0.0011847;     error[46] = 2.11831e-05;
gen_Pt[47] = 50;    point[47] = 0.00115271;    error[47] = 0.00038734;
gen_Pt[48] = 55;    point[48] = 0.00105638;    error[48] = 0.000368199;
gen_Pt[49] = 60;    point[49] = 0.000964205;   error[49] = 0.000357007;
gen_Pt[50] = 65;    point[50] = 0.000899571;   error[50] = 0.00033281;
gen_Pt[51] = 70;    point[51] = 0.000823787;   error[51] = 0.000320462;
gen_Pt[52] = 75;    point[52] = 0.000780131;   error[52] = 0.000322401;
//gen_Pt[62] = 80;    point[62] = 0.0105727;     error[62] = 0.0976989;
gen_Pt[53] = 85;    point[53] = 0.000601622;   error[53] = 3.05989e-05;
gen_Pt[54] = 90;    point[54] = 0.000654176;   error[54] = 0.000295154;
gen_Pt[55] = 95;    point[55] = 0.000616336;   error[55] = 0.000285196;
}
#endif
