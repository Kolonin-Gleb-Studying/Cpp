#include "Functions.h"


void enter(short int* colsmatixSize)
{
    cout << "������ ������� �� ����� ���� > 100 � <= 0" << endl;
    cout << "������� ������� ���������� ������� ����� �����: ";
    cin >> *colsmatixSize;
}

void check(short int* matixSize)
{
    while (*matixSize <= 0 || *matixSize > 100)
    {
        cout << "������������ ������ �������!" << endl;
        enter(matixSize);
    }
}

void enter(int* Min_number, int* Max_number)
{
    cout << "������� ����� �����, �� �������� ����� �������������� ��������� �����: ";
    cin >> *Min_number;

    cout << endl;

    cout << "������� ����� �����, �� �������� ����� �������������� ��������� �����: " << endl;
    cout << "�������� ����� �� ����� �������������� ";
    cin >> *Max_number;
}

void check(int* Min_number, int* Max_number)
{
    while (*Min_number >= *Max_number)
    {
        cout << "����������� ����� �� ����� ���� >= ������������� �����! " << endl;
        cout << "������� ����� ������!" << endl;
        enter(Min_number, Max_number);
    }
}
