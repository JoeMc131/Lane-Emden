#include<vector>
#include<iostream>

using namespace std;


vector<double> Euler_first_order(double y_0, function<double(double, double)> f, double dx, double x, double x_max);