#include<iostream>
#include<math.h>
#include "constants.h"
#include<vector>
#include"ODE_solver.h"
#include "Polytrope.h"

using namespace std;
using namespace constants;


vector<double> dy_dx(double xi, vector<double> y, double n){

    double beta = y[0];
    double theta = y[1];

    return {-(2*beta)/xi - pow(theta, n), beta};
}

Polytrope::Polytrope(double n, double M){
    mass = M;
    index = n;

    y_0 = {0, 1};

    vector<vector<double>> y = Euler(y_0, 0., 10, 0.001, index);
}