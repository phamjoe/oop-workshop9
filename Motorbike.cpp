#include <iostream>
#include "Motorbike.h"

Motorbike::Motorbike(){

	speed = 0;
	seats = false;	

}

Motorbike::Motorbike(double s, bool seat){

if(s == 0){
	speed = s;
	seats = seat;
}

else
*this = Motorbike();

}

void Motorbike::accelerate(){

	speed += 50;

}

void Motorbike::brake(){

	speed -= 20;
}



void Motorbike::display(std::ostream& os) const{

	os << "This motorbike is going " << speed << " after acceleration and braking and ";
	if (seats){
		os << "has a side car" << std::endl;;
	}

	else
		os << "does not have a side car" << std::endl;

}



