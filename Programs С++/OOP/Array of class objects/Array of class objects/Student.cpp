#include "Student.h"


		// ���������� ������������� ������ 

// ����������� ����������� ��������� ������������
Student::Student(string name = "Unnamed", int age = 0, int mark = 0)
{
	this->name = name;
	this->age = age;
	this->mark = mark;
	this->student_count++;
	this->student_id = student_count;
}

// ����������� �� ��������� (��� ����������)
Student::Student()
{
	name = "Unnamed";
	age = 0;
	mark = 0;
	student_count++;
	student_id = student_count;
}

		// ���������� ������� ������ 
void Student::get_student_info()
{
	cout << "��� �������: " << name << endl;
	cout << "������� �������: " << age << endl;
	cout << "������ �������: " << mark << endl;
	cout << "id �������: " << student_id << endl;
}