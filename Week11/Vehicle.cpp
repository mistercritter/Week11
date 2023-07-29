#ifndef VEHICLE_CPP
#define VEHICLE_CPP

#include<iostream>
#include<string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string manufacturer, int yearBuilt) {
	this->manufacturer = manufacturer;
	this->yearBuilt = yearBuilt;
}

string Vehicle::getManufacturer() { return manufacturer; }

void Vehicle::setManufacturer(string manufacturer) {
	this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() { return yearBuilt; }

void Vehicle::setYearBuilt(int yearBuilt) {
	this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << endl
		<< "Manufacturer: " << manufacturer << endl
		<< "Year Built: " << yearBuilt << endl;
}

#endif
