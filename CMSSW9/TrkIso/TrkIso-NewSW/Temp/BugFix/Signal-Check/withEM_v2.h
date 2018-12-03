#ifndef withEM_h
#define withEM_h

double SW_func2_deta_v2(double eget){

 double p[1] = {};

 p[0] = 0.;

 return p[0]*pow(eget,0);

}


double SW_func2_dphi_v2(int region, int nth, double eget){
 double p[4] = {};


if( region == 1 &&  nth == 0 ){
p[0] = -0.000885356;
p[1] = 0.842329;
p[2] = -1.00344;
p[3] = -5.31435;
}


if( region == 1 &&  nth == 1 ){
p[0] = -0.000889902;
p[1] = 0.858123;
p[2] = -1.01054;
p[3] = -5.69431;
}


if( region == 1 &&  nth == 2 ){
p[0] = -0.00146997;
p[1] = 0.8192;
p[2] = -0.990985;
p[3] = -11.3871;
}


if( region == 1 &&  nth == 3 ){
p[0] = -0.00089021;
p[1] = 0.814043;
p[2] = -1.00176;
p[3] = -12.2111;
}


if( region == 1 &&  nth == 4 ){
p[0] = -0.000559633;
p[1] = 1.22263;
p[2] = -1.09482;
p[3] = -0.66378;
}


if( region == 1 &&  nth == 5 ){
p[0] = 6.19909e-05;
p[1] = 1.18703;
p[2] = -1.10871;
p[3] = -0.706805;
}


if( region == 2 &&  nth == 0 ){
p[0] = 6.68974e-05;
p[1] = 1.22484;
p[2] = -1.10031;
p[3] = -0.675535;
}


if( region == 2 &&  nth == 1 ){
p[0] = -0.00107288;
p[1] = 0.779464;
p[2] = -0.982813;
p[3] = -9.2353;
}


if( region == 2 &&  nth == 2 ){
p[0] = 0.000667323;
p[1] = 2.08919;
p[2] = -0.82399;
p[3] = 0.143634;
}


if( region == 2 &&  nth == 3 ){
p[0] = -0.000874814;
p[1] = 0.763391;
p[2] = -0.986862;
p[3] = -60.4242;
}


if( region == 2 &&  nth == 4 ){
p[0] = 0.000985601;
p[1] = 1.37012;
p[2] = -1.15591;
p[3] = -0.617934;
}


if( region == 2 &&  nth == 5 ){
p[0] = 0.00532862;
p[1] = 0.703336;
p[2] = 0.0138175;
p[3] = 0.381133;
}


if( region == 3 &&  nth == 0 ){
p[0] = 0.000310939;
p[1] = 0.704919;
p[2] = -0.983922;
p[3] = -0.678206;
}


if( region == 3 &&  nth == 1 ){
p[0] = 0.000291222;
p[1] = 0.688442;
p[2] = -0.980965;
p[3] = -0.679918;
}


if( region == 3 &&  nth == 2 ){
p[0] = -0.00146587;
p[1] = 0.964046;
p[2] = -0.816614;
p[3] = -0.0166121;
}


if( region == 3 &&  nth == 3 ){
p[0] = 0.00476289;
p[1] = 0.30989;
p[2] = 0.248538;
p[3] = 0.384747;
}


if( region == 3 &&  nth == 4 ){
p[0] = -0.000222423;
p[1] = 0.443736;
p[2] = -0.886837;
p[3] = -13.9554;
}


if( region == 3 &&  nth == 5 ){
p[0] = 0.000508597;
p[1] = 0.652995;
p[2] = -0.98986;
p[3] = -0.682641;
}


if( region == 4 &&  nth == 0 ){
p[0] = 0.000828521;
p[1] = 0.575081;
p[2] = -1.02738;
p[3] = -0.613307;
}


if( region == 4 &&  nth == 1 ){
p[0] = 0.000402958;
p[1] = 0.356366;
p[2] = -0.919698;
p[3] = -18.1167;
}


if( region == 4 &&  nth == 2 ){
p[0] = 0.000273634;
p[1] = 0.361834;
p[2] = -0.923586;
p[3] = -4.79593;
}


if( region == 4 &&  nth == 3 ){
p[0] = 0.000656041;
p[1] = 0.52849;
p[2] = -1.02154;
p[3] = -0.634389;
}


if( region == 4 &&  nth == 4 ){
p[0] = 0.000479869;
p[1] = 0.5478;
p[2] = -1.02575;
p[3] = -0.612285;
}


if( region == 4 &&  nth == 5 ){
p[0] = 0.000590149;
p[1] = 0.588157;
p[2] = -1.04167;
p[3] = -0.498173;
}


if( region == 5 &&  nth == 0 ){
p[0] = 0.000426647;
p[1] = 0.37182;
p[2] = -1.04862;
p[3] = -0.666037;
}


if( region == 5 &&  nth == 1 ){
p[0] = 0.00104094;
p[1] = 0.439869;
p[2] = -0.453998;
p[3] = 0.254428;
}


if( region == 5 &&  nth == 2 ){
p[0] = 0.000462013;
p[1] = 0.385603;
p[2] = -1.06602;
p[3] = -0.681728;
}


if( region == 5 &&  nth == 3 ){
p[0] = 0.00186555;
p[1] = 0.283511;
p[2] = -0.152655;
p[3] = 0.334914;
}


if( region == 5 &&  nth == 4 ){
p[0] = 0.000591536;
p[1] = 0.260775;
p[2] = -1.00644;
p[3] = -4.68738;
}


if( region == 5 &&  nth == 5 ){
p[0] = 0.00183944;
p[1] = 0.23569;
p[2] = -0.0625587;
p[3] = 0.35134;
}


if( region == 6 &&  nth == 0 ){
p[0] = 0.00190981;
p[1] = 0.158779;
p[2] = 0.0661401;
p[3] = 0.39479;
}


if( region == 6 &&  nth == 1 ){
p[0] = 0.00070819;
p[1] = 0.563986;
p[2] = -1.07077;
p[3] = 0.00623131;
}


if( region == 6 &&  nth == 2 ){
p[0] = 0.000462593;
p[1] = 0.480308;
p[2] = -0.886936;
p[3] = 0.11067;
}


if( region == 6 &&  nth == 3 ){
p[0] = 0.000914018;
p[1] = 0.200631;
p[2] = -1.09285;
p[3] = -3.47511;
}


if( region == 6 &&  nth == 4 ){
p[0] = 0.000714238;
p[1] = 0.478039;
p[2] = -0.858823;
p[3] = 0.145198;
}


if( region == 6 &&  nth == 5 ){
p[0] = 0.00184367;
p[1] = 0.132498;
p[2] = 0.124773;
p[3] = 0.41008;
}





 return p[0]*pow(eget,0) + p[1]*pow(eget,p[2])*exp(-pow(eget,p[3]));

}

#endif
