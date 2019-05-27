// String.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string>

using namespace std;
typedef string String;

void myString() {
	string s1;//默认无参构造函数
	String s2("hello");//普通构造函数
	s1 = "Anatoliy";//赋值运算符
	string s3(s1);//拷贝构造函数 string s3 = s1;

	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;

	string s4("123456789abcdef", 10);//取前10个
	cout << "s4:" << s4 << endl;

	string s5(s4, 3, 8);//从第4个开始取8个
	cout << "s5:" << s5 << endl;

	string s6(15, '*');//15个*
	cout << "s6:" << s6 << endl;

	string s7(s4.begin(), s4.end() - 5);//s4的开始为头,迭代到s4结尾前五
	cout << "s7:" << s7 << endl;

	string s8 = s2 + ' ' + "world";//string+char+字符串
	cout << "s8:" << s8 << endl;

}

int main()
{
	myString();
	string hello = "hello";
	string world = "world";

	hello += world;

	cout << "///////////////////////" << endl;
	//循环
	for (int i = 0; i < hello.size(); i++) {
		cout << i << ' ' << hello[i] << endl;
	}
	//常量迭代器
	string::const_iterator cii;//常量迭代器,不能修改cii
	int ii = 0;
	for (cii = hello.begin(); cii < hello.end(); cii++) {
		cout << ii++ << ' ' << *cii << endl;
	}
	cout << "///////////////////////" << endl;

	//非常量迭代器
	string::iterator si;//可以修改c++
	ii = 0;
	for (si = hello.begin(); si < hello.end(); si++) {
		*si = 'a';
		cout << ii++ << ' ' << *si << endl;
	}
	return 0;
}


