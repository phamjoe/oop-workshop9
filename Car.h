#include <iostream>
#include "Vehicle.h"

class Car: public Vehicle{

	double speed;
	int seats;

public:
	Car();
	Car(double, int);
	void accelerate();
	void brake();
	void display(std::ostream&) const;

};