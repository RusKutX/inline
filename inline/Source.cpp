#include <iostream>
using namespace std;

//inline позволяет компилятору обойтись без операция с поиском функций
// дальнейшей передачей аргументов, возврата значений и т д.

//inline рекомендуется использовать в маленьких и простых функциях 

inline int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a = Sum(3, 5);
	cout << a << endl;
}