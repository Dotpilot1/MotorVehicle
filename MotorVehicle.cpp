#include "MotorVehicle.h"


MotorVehicle::MotorVehicle():make{""},
fuelType{""},yearOfManufacture{0},
color{""},engineCapaticity{0}
{
}

MotorVehicle::MotorVehicle(string make, string fuel, int manyear, string color, int capacity)
{
	setMake(make);
	setFuelType(fuel);
	setYearOfManufacture(manyear);
	setColor(color);
	setEngineCapacity(capacity);
}

 void MotorVehicle::setMake(string _make)
{
	 make = _make;
	// TODO: return deyimini buraya ekleyin
}

 void MotorVehicle::setFuelType(string fuel)
{
	 fuelType = fuel;
	// TODO: return deyimini buraya ekleyin
}

 void MotorVehicle::setYearOfManufacture(int mayear)
{
	 yearOfManufacture = mayear;
	// TODO: return deyimini buraya ekleyin
}

 void MotorVehicle::setColor(string _color)
{
	 color = _color;
	// TODO: return deyimini buraya ekleyin
}

 void MotorVehicle::setEngineCapacity(int capacity)
{
	 engineCapaticity = capacity;
	 // TODO: return deyimini buraya ekleyin
}

string MotorVehicle::getMake() const
{
	return make;
}

string MotorVehicle::getFuelType() const
{
	return fuelType;
}

int MotorVehicle::getYearOfManufacture() const
{
	return yearOfManufacture;
}

string MotorVehicle::getColor() const
{
	return color;
}

int MotorVehicle::getEngineCapacity() const
{
	return engineCapaticity;
}

void MotorVehicle::displayCarDetails() const
{
	cout <<"Displaying Car Specialities:" << endl
		<< "Car Make: " << getMake() << endl
		<< "Car Fuel Type: " << getFuelType() << endl
		<< "Car Year Of Manufacture: " << getYearOfManufacture()<< endl
		<< "Car Color: " << getColor() << endl
		<< "Car Engine Capacity: " << getEngineCapacity() << endl;


}
