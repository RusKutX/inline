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
	float a = cum(3, 5);
	cout << a << endl;
}