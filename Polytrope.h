
#ifndef POLYTROPE_H
#define POLYTROPE_H

#include<iostream>
#include<math.h>
#include "constants.h"
#include<vector>
#include"ODE_solver.h"

using namespace std;

vector<double> dy_dx(double xi, vector<double> y, double n);

class Polytrope{
    double index;
    double mass;
    vector<double> beta;
    vector<double> theta;
    vector<double> pressure;
    vector<double> temperature;
    vector<double> density;
    vector<double> y_0;
public:

    Polytrope(double n, double M);
};
#endif