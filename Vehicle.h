#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

class Vehicle{

public:

	virtual void accelerate() = 0;
	virtual void brake() = 0;
	virtual void display(std::ostream&) const = 0;




};
	void drive(Vehicle&);
	void show(Vehicle&);
#endif