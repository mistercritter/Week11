#ifndef CAR_CPP
#define CAR_CPP

#include<iostream>
#include "Vehicle.h"
#include "Car.h"
#include<string>

using namespace std;

Car::Car(string manufacturer, int yearBuilt, int numDoors) : numDoors(numDoors), Vehicle(manufacturer, yearBuilt) {
}

int Car::getNumDoors() { return numDoors;}

void Car::setNumDoors(int numDoors) {
	this->numDoors = numDoors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
		cout << "Doors: " << numDoors << endl;
}
#endif
