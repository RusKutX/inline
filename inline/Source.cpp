#include <iostream>
using namespace std;

//inline ��������� ����������� �������� ��� �������� � ������� �������
// ���������� ��������� ����������, �������� �������� � � �.

//inline ������������� ������������ � ��������� � ������� �������� 

inline int cum(int a, int b)
{
	return a + b;
}

int main()
{
	double a = cum(10, 5);
	cout << a << endl;
}