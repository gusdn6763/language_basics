#include <iostream>

using namespace std;

void exam021_1_plus(int &n1)
{
	n1++;
}

void exam021_1_reverse(int &n1)
{
	n1 *= -1;
}

int exam021_2()
{
	cout << "�����Ǿ��ִ� �޸� �����̿��� �ϴϱ�" << endl;
	return (1);
}

void exam021_3(int *(&n1), int *(&n2))
{
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void exam021()
{
	int num1 = 10;
	cout << "����1" << endl << endl;
	exam021_1_plus(num1);
	cout << num1 << endl;
	exam021_1_reverse(num1);
	cout << num1 << endl;

	cout << "����2" << endl << endl;
	exam021_2();

	cout << "����3" << endl << endl;
	int num2 = 5;
	int num3 = 10;
	int* ptr1 = &num2;
	int* ptr2 = &num3;
	exam021_3(ptr1, ptr2);
	cout << *ptr1 << endl << *ptr2 << endl;
}