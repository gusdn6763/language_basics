#include <iostream>

//기본적으로 설정되어 있는 값

int DefaultFunc(int num = 5)
{
	return num;
}

int DefaultFunc(int num, int num1, int num2 = 5)
{
	return num + num1 + num2;
}

int main113()
{
	int num = 1, num1 = 2;
	std::cout << DefaultFunc() << "\n" << DefaultFunc(num, num1);
	return 0;
}