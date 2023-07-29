#ifndef TRUCK_CPP
#define TRUCK_CPP

#include "Truck.h"
#include "Vehicle.h"
#include<iostream>
#include<string>

using namespace std;

Truck::Truck(string manufacturer, int yearBuilt, int twoCapac) : towCapac(twoCapac), Vehicle(manufacturer, yearBuilt) {
	}

int Truck::getTowCapac() { return towCapac; }

void Truck::setTowCapac(int towCapac) {
	this->towCapac = towCapac;
}

void Truck::displayInfo() {

	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCapac << endl;
}
#endif
