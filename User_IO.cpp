
#include <iostream>
#include "User_IO.h"
#include"Polytrope.h"
#include"fstream"
#include"constants.h"

using namespace std;
using namespace constants;

double Input_index(){
    
    double index;
    
    cout << "Please input the index n: ";
    cin >> index;

    cout << endl;

    return index;
}

double Input_Mass(){
    double M;

    cout << "Please input the mass (solar masses): ";
    cin >> M;
    cout << endl;

    M *= solar_mass;

    return M;
}

double Input_Radius(){
    double R;

    cout << "Please input the radius (solar radii): ";
    cin >> R;
    cout << endl;

    R *= solar_radius;

    return R;
}

void OutputData(Polytrope p, string filename){
    ofstream output_file;

    output_file.open("data/" + filename);

    output_file << "xi,theta,dtheta_dxi,r,density,pressure,Temperature" << endl;

    for(int i = 0; i<p.beta.size(); i++){
        output_file << p.xi[i] << ","
                    << p.theta[i] << "," 
                    << p.beta[i] << ","
                    << p.r[i] << ","
                    << p.density[i] << ","
                    << p.pressure[i] << ","
                    << p.temperature[i] << endl;
    }

    output_file.close();
}