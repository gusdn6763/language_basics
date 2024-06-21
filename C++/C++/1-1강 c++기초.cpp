#include <iostream>


int main111()
{
	int num;
	char str[100];
	std::cout << "Hello World!\n";
	std::cout << "Hello World!" << std::endl;
	std::cout << "값, 문자열 입력(스페이스, 탭, 엔터로 구분함) :";
	std::cin  >> num, str;     //scanf
	std::cout << "입력한 숫자:" << num << std::endl;
	std::cout << "입력한 문자열" << str << std::endl;
	return 0;
}