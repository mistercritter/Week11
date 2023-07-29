// Charles Ritter
// CIS 1202.5T1
// 07/29/23

#include<iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include<string>

using namespace std;

int main() {
	string manufacturer;
	int yearBuilt;
	int numDoors;
	int towCapac;

	cout << "Vehicle Program" << endl << endl;

	cout << "Vehicle: " << endl
		<< "Enter the Manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cin.ignore();

	cout << endl;

	Vehicle V(manufacturer, yearBuilt);
	V.displayInfo();

	cout << endl << "Car: " << endl
		 << "Enter the Manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cin.ignore();

	cout  << "Enter the number of doors: ";
	cin >> numDoors;
	cin.ignore();

	cout << endl;

	Car C(manufacturer, yearBuilt, numDoors);
	C.displayInfo();

	cout << endl << "Truck: " << endl
		<< "Enter the Manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> yearBuilt;
	cin.ignore();

	cout << "Enter the towing capacity: ";
	cin >> towCapac;
	cin.ignore();

	cout << endl;

	Truck T(manufacturer, yearBuilt, towCapac);
	T.displayInfo();

	return 0;
}