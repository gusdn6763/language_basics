#include <iostream>

//매개변수 자료형 또는 개수가 달라야함  
int FunOverloding(int num)
{
	return num + 1;
}

int FunOverloding(char str)
{
	return str;
}

int FunOverloding(int num1, int num2)
{
	return num1 + num2;
}

int main112()
{
	int num;
	char str = 'A';

	std::cout << "값입력";
	std::cin >> num;

	std::cout << FunOverloding(num) << std::endl;
	std::cout << FunOverloding(str) << std::endl;
	std::cout << FunOverloding(num, num);
	return 0;
}