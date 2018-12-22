// OOP244 Workshop 9: Virtual Functions
// File w9.cpp
// Version 1.0
// Date 2015/03/18
// Author Franz Newland
// Description
// This file demonstrates virtual functions
/////////////////////////////////////////////////////
#include <iostream>
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"
int main()
{
Car volkswagen(0,5);
Motorbike harley(10, true);
drive(volkswagen);
drive(harley);
show(volkswagen);
show(harley);

}
