#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student // ������
{
	string name;
	int age;
	int mark;
	int student_id; // ����� �������

public:
	static int student_count; // ������� ��������

		// ��������� ������������� ������
	Student(); // ����������� �� ��������� (��� ����������)
	Student(string name, int age, int mark); // ����������� ����������� ��������� ������������

		// ��������� ������� ������
	void get_student_info();

};
