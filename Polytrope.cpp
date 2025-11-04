#include<iostream>
#include<math.h>
#include "constants.h"
#include<vector>
#include"ODE_solver.h"

using namespace std;
using namespace CONSTANTS;


vector<double> dy_dx(double xi, vector<double> y, double n){

    double beta, theta = y[0], y[1];

    return {-(2*beta)/xi - pow(theta, n), beta};
}

class Polytrope{
public:
    double index;
    double mass;
    vector<double> beta;
    vector<double> theta;
    vector<double> pressure;
    vector<double> temperature;
    vector<double> density;
    vector<double> y_0;


    Polytrope(double n, double M){
        mass = M;
        index = n;

        y_0 = {0, 1};

        vector<vector<double>> y = Euler(&dy_dx, y_0, 0, 10, 0.001, index);
    }
};