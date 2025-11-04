
#ifndef ODE_SOLVER_H
#define ODE_SOLVER_H

#include<vector>
#include<iostream>
#include"Polytrope.h"

using namespace std;


vector<vector<double>> Euler(vector<double> y_0, double x_min, double x_max, double dx, double n);

#endif