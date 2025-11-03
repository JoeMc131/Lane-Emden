#include<iostream>
#include<math.h>
#include "constants.h"
#include<vector>

using namespace std;
using namespace CONSTANTS;

class Polytrope{
public:
    double index;
    vector<double> xi;
    vector<double> theta;
    vector<double> pressure;
    vector<double> temperature;
    vector<double> density;
};