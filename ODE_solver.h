#include<vector>
#include<iostream>

using namespace std;


vector<vector<double>> Euler(function<double(double, vector<double>, double)> f, vector<double> y_0, double x_min, double x_max, double dx, double n = 0);