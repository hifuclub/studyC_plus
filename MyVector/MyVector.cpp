// MyVector.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

//
/*
int main()
{
	std::vector<double> student_marks;//没有size,没有内容
	int num_student;
	std::cout << "student number is :" << std::endl;
	std::cin >> num_student;

	student_marks.resize(num_student);

	for (std::vector<double>::size_type i = 0; i < num_student; i++) {
		//遍历vector<double>时候使用size_type类型更加安全
		//遍历string时候也同理string::size_type类型更加安全

		std::cout << "输入学生成绩  #" << i << std::endl;
		std::cin >> student_marks[i];
	}
	std::cout << "///////////////////" << std::endl;

	for (std::vector<double>::iterator it = student_marks.begin();
		it != student_marks.end(); it++
		) {
		std::cout << *it << std::endl;
	}
	return 0;
}

*/

//19/06/27
int main() {
	std::vector<int> my_vector;
	my_vector.push_back(1);
	my_vector.push_back(11);
	my_vector.push_back(11);
	std::cout <<"size is "<< my_vector.size() <<"\ncapacity is "<< my_vector.capacity() <<std::endl;
	return 0;
}