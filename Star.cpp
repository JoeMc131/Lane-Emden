#include"iostream"
#include"Physics.h"
#include"Polytrope.h"
#include"ODE_solver.h"
#include"User_IO.h"

using namespace std;

int main(){

    // Commence User input and output
    double n, M;

    n = Input_index();
    M = Input_Mass();

    Polytrope p = Polytrope(n, M);

    

    return 0;
}