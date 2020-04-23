#pragma once
#include<string>
#include<iostream>

using namespace std;

class MotorVehicle {
public:
	MotorVehicle();
    explicit MotorVehicle(string make, 
		string fuel, 
		int manyear,
		string color, 
		int capacity);

	void setMake(string make);
	void setFuelType(string fuel);
	void setYearOfManufacture(int mayear);
	void setColor(string color);
	void setEngineCapacity(int capacity);

	string getMake() const;
	string getFuelType ()const;
	int getYearOfManufacture ()const;
	string getColor()const;
	int getEngineCapacity()const;

	void displayCarDetails()const;


private:

	string make;
	string fuelType;
	int yearOfManufacture{0};
	string color;
	int engineCapaticity{0};

};
