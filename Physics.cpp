




#include <iostream>
#include <math.h>
#include "constants.h"
#include <vector>
#include "ODE_solver.h"
#include "Physics.h"


using namespace std;
using namespace constants;

vector<double> Pressure(double xi_R, double R, double n, vector<double> rho){
    /*
        calculates the pressure profile of the polytrope
    */

    double a = ((4*PI*G)/(n + 1)) * (R/xi_R) * (R/xi_R);

    vector<double> P = {};

    for(int i = 0; i<rho.size(); i++){
        P.push_back(a * rho[i] * rho[i]);
    }
    return P;
}

vector<double> Temperature(vector<double> P, vector<double> rho){

    vector<double> T = {};
    double a;

    for (int i = 0; i < rho.size(); i++){
        a = (P[i] * mu * m_H)/(rho[i]*k_B);
        T.push_back(a);
    }

    return T;
}

vector<double> Density()