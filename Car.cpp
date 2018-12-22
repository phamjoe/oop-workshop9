#include <iostream>
#include "Car.h"


Car::Car(){

	speed = 0;
	seats = 0;

}

Car::Car(double s, int seat){

	speed = s;
	seats = seat;

}

void Car::accelerate(){

	speed += 20;

}

void Car::brake(){

	speed -= 10;
}



void Car::display(std::ostream& os) const{

	os << "This car has " << seats << " seats and after acceleration and braking has a speed of " << speed << std::endl;

}



