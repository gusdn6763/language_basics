#include <iostream>

//�Ű����� �ڷ��� �Ǵ� ������ �޶����  
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

	std::cout << "���Է�";
	std::cin >> num;

	std::cout << FunOverloding(num) << std::endl;
	std::cout << FunOverloding(str) << std::endl;
	std::cout << FunOverloding(num, num);
	return 0;
}