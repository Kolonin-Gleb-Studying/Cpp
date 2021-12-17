#pragma once
// ������� ��������� ������� �� ����������

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int extern  gMinNumber, gMaxNumber;
int extern gCountOfNumbersAfterDot;

// ������� ��������� ������� ��� ����������� ������� ����������
void create(int** const matrix, const short* matrixSize);

// ������� ����������� 2� ������ ������ ���������� ������� � ��������� ���������
void fill(int** const matrix, const short* matrixSize);

// ������� ������������ ����� ����� ���������� ����� � ��������� ���������
// ��� ��������� ����������, � ������� ����� �������� ����� ����� ���������� ����� 
void generate(int* integerPartOfRN);

// ������� ������ 2� ������� �������
void show(int** const matrix, const short* matrixSize);

// ������� ������ 1 ������� �������
void show(int* const array, const short* arraySize);

// ������� �������� 2� ������� �������
void deleteMatrix(int** matrix, const short* matrixSize);

//
// �������������� �������
//

// �������, ���������������� ������ ������������� ��������� �������� ����� �������
void initArrayOfMultiplications(int** const matrix, int* const arrayOfMultiplications, const short* const matrixSize, const short* const arraySize);

// ������� ������������ ���������� �������� ����� � �������
short int countOddRowsInMatrix(const short* rows);

// ������� ��������� ����������� ��������� ������ �������
//int productNumbersInMatrixRow(int** const array2d, const int* rowNumber, short* colNumber);
int multiplicationOfElements(const int* const arrayRow, const short* const rowLength);

// ������� ���������� ������� ����� � �������� ��������� ������� 
// �� ����� ���� ������������� ����� ������������ � ����� ������ � ������� ������
// ���� �����, ������� �������� ������������ � ������� ����� � �������� ��������� ��� ���� � ���� �����,
// �� ��������� ������ ����� ����� �� ����� ��� ����
void changeSimpleNumbersAlongSideDiagonal(int** const matrix, const short* const matrixSize);

// ������� ������������ �������� �� ����� �������
bool isNumberSimple(int* const numberForCheck);

// ������� ������������ ������������ ����� � ������
int findMaxNumber(const int* const arrayRow, const short* const rowLength);

// ������� ��������� ����� ���� ����������� �����
int sumOfNumerals(int* const number);
