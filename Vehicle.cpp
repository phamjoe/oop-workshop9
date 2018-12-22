#include "Vehicle.h"
#include <iostream>
#include <cstring>

void drive(Vehicle& v){
	v.accelerate();
	v.brake();
}
void show(Vehicle& v){
	v.display(std::cout);

}