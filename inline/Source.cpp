#include <iostream>
using namespace std;

//inline ��������� ����������� �������� ��� �������� � ������� �������
// ���������� ��������� ����������, �������� �������� � � �.

//inline ������������� ������������ � ��������� � ������� �������� 

inline int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a = Sum(3, 5);
	cout << a << endl;
}