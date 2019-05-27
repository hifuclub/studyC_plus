// DerivativeClass.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Employee {
	string name;
public:
	virtual void print();//虚函数,多态
	Employee(string name);
	string get_name() { return name; }
};

class Manager :public Employee {
	int level;
public:
	Manager(string name, int level);
	void print();
};

int main()
{
	Employee employee01("Li");
	Manager employee02("Wang",4);
/*
	employee01.print();
	employee02.print();*/

	////////////////////////////

	//Employee * employee03 = &employee01;
	//employee03->print();
	//Manager * employee04 = &employee02;
	//employee04->print();

	////////////////////////////
	Employee* employees[100]; int num = 0;
	employees[0] = &employee01;
	employees[1] = &employee02;

	employees[0]->print();
	employees[1]->print();//虚函数,多态


}

void Employee::print() {
	cout << "name is :" << name << endl;
}
Employee::Employee(string name) :name(name) {
}

void Manager::print() {
	Employee::print();
	cout << "\t" << "Level is :" << level << endl;//下面也能实现print();
	//cout << "name is :" << get_name() << "\t" << "Level is :" << level << endl;
}
Manager::Manager(string name,int level) : Employee(name),level(level) {
}

