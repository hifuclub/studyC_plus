
// My_share_ptr.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <memory.h>

class MyObject {
public:
	MyObject(int id) :m_id(id) 
	{
		std::cout << "init obj" << m_id << std::endl;
	}
	~MyObject()
	{
		std::cout << "byebye" << m_id << std::endl;
	}
	int id() { return m_id; }
private:
	int m_id;
};

static void interfaceOfSharedPtr();

int main()
{
	std::cout << "Hello World!\n";
	interfaceOfSharedPtr();


}

void interfaceOfSharedPtr() {
	std::shared_ptr<MyObject> null;
	std::shared_ptr<MyObject> obj1(new MyObject(1));
	std::shared_ptr<MyObject> obj2(obj1);
	std::cout << obj1.use_count() << std::endl;
	std::cout << obj2.use_count() << std::endl;
	std::cout << "obj1==null" << std::endl;
	obj1 = null;
	std::cout << obj1.use_count() << std::endl;
	std::cout << obj2.use_count() << std::endl;
	std::cout << "obj2==null" << std::endl;
	obj2 = null;
	std::cout << obj1.use_count() << std::endl;
	std::cout << obj2.use_count() << std::endl;
}




