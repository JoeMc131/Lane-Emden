#include<iostream>
#include<math.h>
#include "constants.h"
#include<vector>

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


    Polytrope(double n, double M){
        mass = M;
        index = n;

    }
};