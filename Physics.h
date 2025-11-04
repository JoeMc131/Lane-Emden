
#ifndef PHYSICS_H
#define PHYSICS_H

#include "constants.h"
#include "vector"
#include<iostream>
#include"Polytrope.h"

using namespace std;
using namespace constants;


vector<double> Pressure(double xi_R, double R, double n, vector<double> rho);

vector<double> Temperature(vector<double> P, vector<double> rho);

double central_density(double M, double R, double xi_R, double dtheta);

vector<double> Density(Polytrope p);

#endif