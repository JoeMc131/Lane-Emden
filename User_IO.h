

#include <iostream>
#include"Polytrope.h"
#include"fstream"
#include"Polytrope.h"

#ifndef USER_IO_H
#define USER_IO_H

double Input_index();

double Input_Mass();

double Input_Radius();

void OutputData(Polytrope p, string filename);

#endif