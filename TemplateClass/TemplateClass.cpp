#include "pch.h"
#include <iostream>

using namespace std;

template <class T, class TT>
T myAddFunction(T a, TT b) {
	T re;
	re = a + b;
	return re;
}

struct MyStruct01
{

};

int main()
{
	cout << myAddFunction(10.5, 20) << endl;
}
