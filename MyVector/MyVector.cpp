// MyVector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<double> student_marks;//没有size,没有内容
	int num_student;
	cout << "student number is :" << endl;
	cin >> num_student;

	student_marks.resize(num_student);

	for (vector<double>::size_type i = 0; i < num_student; i++) {
		//遍历vector<double>时候使用size_type类型更加安全
		//遍历string时候也同理string::size_type类型更加安全

		cout << "输入学生成绩  #" << i << endl;
		cin >> student_marks[i];
	}
	cout << "///////////////////" << endl;

	for (vector<double>::iterator it = student_marks.begin();
		it != student_marks.end(); it++
		) {
		cout << *it << endl;
	}
	return 0;
}

