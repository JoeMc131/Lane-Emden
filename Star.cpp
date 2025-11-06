#include"iostream"
#include"Physics.h"
#include"Polytrope.h"
#include"ODE_solver.h"
#include"User_IO.h"

using namespace std;

int main(){

    // Commence User input and output
    double n, M, R;

    n = Input_index();
    M = Input_Mass();
    R = Input_Radius();

    Polytrope p = Polytrope(n, M, R);

    p.density = Density(p);
    p.pressure = Pressure(p.xi.back(), R, n, p.density);
    p.temperature = Temperature(p.pressure, p.density);

    OutputData(p, "test_star.csv");

    return 0;
}