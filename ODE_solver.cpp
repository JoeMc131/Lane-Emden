#include <math.h>
#include <vector>
#include "Polytrope.h"

using namespace std;

vector<vector<double>> Euler(vector<double> y_0, double x_min, double x_max, double dx, double n){
    
    vector<vector<double>> y;
    vector<double> current_y(y_0.size());

    for (int i = 0; i<y_0.size(); i++){
        y.push_back({y_0[i]});
    }

    double x = x_min;
    vector<double> y_temp;

    do{

        x += dx;
        y_temp = {};

        for(int i = 0; i<y_0.size(); i++){
            current_y[i] = y[i].back();
        }

        try{
            for (int i = 0; i<y_0.size();i++){
                y_temp.push_back(y[i].back() + dx*dy_dx(x, current_y, n, i));
            }
            for (int i = 0; i<y_0.size(); i++){
                y[i].push_back(y_temp[i]);
            }
        }
        catch(const std::exception& e){
            break;
        }   
    }while((x<x_max && y[1].back() > 0));
    return y;
}
