// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
//class BankCustomer {
//	BankCustomer(const BankCustomer& A){};
//	BankCustomer operator= (BankCustomer A) {};
//	bool operator== (BankCustomer A) {};
//	BankCustomer operator+ (BankCustomer A) {};
//
//};
int main()
{
    std::cout << "Hello World!\n"; 
}

class IObject {
public:
	IObject(const IObject& o) {

	}
	IObject() {

	}
	virtual ~IObject() {

	}
};
class Vehicle : IObject {

	int mMaxPassengers;
	float mMaxSpeed;
	float mMaxWeight; 
	bool LandVehicle;
public:
	int get_mMaxPassengers() { return mMaxPassengers; }
	float get_mMaxSpeed() { return mMaxSpeed; }
	float get_mMaxWeight() { return mMaxWeight; }
	bool isLandVehicle() { return mMaxWeight; }
	Vehicle(const Vehicle& o) {

	}
	Vehicle(int mMaxPassengers, float mMaxSpeed, float mMaxWeight) {
		this->mMaxPassengers = mMaxPassengers;
		this->mMaxSpeed = mMaxSpeed;
		this->mMaxWeight = mMaxWeight;
	}
	virtual ~Vehicle() {

	}
};

class  Car : public Vehicle {

public:
	Car(const Car& o) {

	}
	Car() :Vehicle(int mMaxPassengers, float mMaxSpeed, float mMaxWeight) {
		Vehicle::isLandVehicle = true;
	}
	virtual ~Car() {

	}
};
class Plane : public Vehicle {
public:
	Plane(const Plane& o) {

	}
	Plane() :Vehicle(int mMaxPassengers, float mMaxSpeed, float mMaxWeight) {
		Vehicle::isLandVehicle = false;
	}
	virtual ~Plane() {

	}
};