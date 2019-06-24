// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<cstring>

using namespace std;

struct Date
{
	int year, mouth, day;
	Date(int year = 1000, int mouth = 1, int day = 1) {
		this->year = year;
		this->mouth = mouth;
		this->day = day;


	}

	void print() {
		cout << year << '-' << mouth << '-' << day << endl;
	}
};

int main()
{
	/*
	double d = 3.14;
	double *dp;

	dp = &d;
	*dp = 233;

	cout << "*dp= " << *dp << endl;
	cout << "dp= " << dp << endl;

	dp = new double;
	cout << "dp= " << dp << endl;
	*/

	Date date(1997, 7, 1);
	date.print();
}
