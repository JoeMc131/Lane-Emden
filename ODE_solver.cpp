#include <math.h>
#include <vector>

using namespace std;

vector<double> Euler_first_order(double y_0, function<double(double, double)> f, double dx, double x, double x_max){
    
    vector<double> y = {y_0};
    double y_1;


    while(x<x_max){
        try{
            y_1 = y.back() + dx * f(x, y.back());
            x += dx;
        }
        catch(const std::exception& e){
            break;
        }
    }

    return y;

}