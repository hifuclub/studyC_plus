#include "pch.h"
#include "myadd.h"
#include <iostream>


//explicit
class ExplicitTestA {
public:
	ExplicitTestA(int) { std::cout << "testA01"<<std::endl; }
	ExplicitTestA(int,int) { std::cout << "testA02"<<std::endl; }
	operator int() const { return 22; }
};
class ExplicitTestB {
public:
	explicit ExplicitTestB(int) { std::cout << "testB01" << std::endl; }
	explicit ExplicitTestB(int, int) { std::cout << "testB02" << std::endl; }
	explicit operator int() const { return 33; }
};




int main()
{
    std::cout << "Hello World!\n"; 
	
	
	//explicit
	ExplicitTestA explicitTestA01 = { 1,4 };//等效A a = A(1,4);
	ExplicitTestA explicitTestA02 = 1;
	//会报编译错误
	//ExplicitTestB explicitTestB02 = 1;//1无法被自动转成ExplicitTestB
	ExplicitTestB explicitTestB01(2);
	int a01 = explicitTestA01;
	int b01 = static_cast<int>(explicitTestB01);
	std::cout << a01 << "     " << b01 << std::endl;

	ExplicitTestA explicitTestA03 = 5;
	ExplicitTestA explicitTestA04 = (ExplicitTestA)5;
	//ExplicitTestB explicitTestB03 = 5;
	ExplicitTestB explicitTestB04 = (ExplicitTestB)5;


	//
	std::cout << myAdd1(2, 4)<< std::endl;
	//extern const float pi = 3.1415f;//编译错误不允许对外部变量的局部声明使用初始值设定项

	std::cout << pi << std::endl;
	return 0;
}






