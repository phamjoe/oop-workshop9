#include <iostream>
#include "Vehicle.h"

class Motorbike:public Vehicle{

	double speed;
	bool seats;

public:
	Motorbike();
	Motorbike(double, bool);
	void accelerate();
	void brake();
	void display(std::ostream&) const;

};
