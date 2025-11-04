#include<iostream>
#include<math.h>
#include "constants.h"
#include<vector>
#include"ODE_solver.h"
#include "Polytrope.h"
#include"Physics.h"

using namespace std;
using namespace constants;


vector<double> dy_dx(double xi, vector<double> y, double n){

    double beta = y[0];
    double theta = y[1];

    return {-(2*beta)/xi - pow(theta, n), beta};
}

Polytrope::Polytrope(double n, double M, double R){

    mass = M;
    index = n;
    radius = R;

    y_0 = {0, 1};

    // Solve Euler equations to obtain (beta, theta)
    cout << "Solving Euler Equations.." << endl;
    vector<vector<double>> y = Euler(y_0, 0., 10, 0.001, index);
    cout << "Done!" << endl;

    // get xi
    xi.push_back(0);
    for(int i = 0; i<y[0].size(); i++){
        xi.push_back(xi.back() + 0.001);
    }

    beta = y[0];
    theta = y[1];
}

void Polytrope::PrintSummary(){
        cout << "n = " << index << ", M = " << mass << endl;
}