#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;


Vehicle::Vehicle() {
	make = "COP3503";
	model = "Rust Bucket";
	year = 1900;
	price = 0.0;
	mileage = 0;
}

Vehicle::Vehicle(string _make, string _model, unsigned int _year, double _price, unsigned int _mileage) {
	make = _make;
	model = _model;
	year = _year;
	price = _price;
	mileage = _mileage;
}

void Vehicle::Display() const {
	cout << year << " " << make << " " << model << " $" << price << " " << mileage << endl;
}

string Vehicle::GetYearMakeModel() {
	string name = to_string(year) + " " + make + " " + model;
	return name;
}

double Vehicle::GetPrice() {
	return price;
}