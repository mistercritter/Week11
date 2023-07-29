#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include<string>

using namespace std;

class Truck : public Vehicle {
private:
	int towCapac;

public:
	Truck(string manufacturer, int yearBuilt, int towCapac);
	int getTowCapac();
	void setTowCapac(int towCapac);
	void displayInfo();
};

#endif

