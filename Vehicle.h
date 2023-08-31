#pragma once
#pragma once
#include <string>
using namespace std;

class Vehicle {
private:
	string make;   // (such as Mazda, Toyota, etc)
	string model;   //  (such as Mustang, Model S, F-150, etc)
	unsigned int year;
	double price;
	unsigned int mileage;
public:
	// default constructor, initializes variables to default values
	Vehicle();

	Vehicle(string _make, string _model, unsigned int _year, double _price, unsigned int _mileage);

	// Print out the vehicle's details in a single line
	// 1973 Ford Mustang &9500 113000
	void Display() const;

	// Create and return a string in the form of "YEAR MADE MODEL"
	// Example: "1970 Ford Mustang"
	string GetYearMakeModel();

	// Return the price 
	double GetPrice();
};