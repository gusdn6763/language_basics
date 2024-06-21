#include <iostream>

using namespace std;

void exam012_1(int *num1, int *num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void exam012_1(char* num1, char* num2)
{
	char tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void exam012_1(double* num1, double* num2)
{
	double tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

void exam012()
{
	int num1 = 1, num2 = 2;
	char c1 = 'a', c2 = 'b';
	double d1 = 1.1f, d2 = 2.2f;

	cout << "¹®Á¦1" << endl << endl;
	exam012_1(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;
	exam012_1(&c1, &c2);
	cout << c1 << ' ' << c2 << endl;
	exam012_1(&d1, &d2);
	cout << d1 << ' ' << d2 << endl;
}