
#ifndef PHYSICS_H
#define PHYSICS_H

#include "constants.h"
#include "vector"
#include<iostream>

using namespace std;
using namespace constants;


vector<double> Pressure(double xi_R, double R, double n, vector<double> rho);

vector<double> Temperature(vector<double> P, vector<double> rho);

#endif