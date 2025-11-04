
#include <iostream>
#include "User_IO.h"
#include"Polytrope.h"
#include"fstream"

using namespace std;


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

    return M;
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
}