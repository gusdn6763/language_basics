#include <iostream>
//��ũ�� �Լ��� ���� ����� ������ �Լ��� ����


inline int SQUARE(int x)
{
	return x * x;
}
//  #define SQUARE(X)   ((X)*(X)  //��ũ�� �Լ��� ����

int main114()
{
	std::cout << SQUARE(5) << std::endl;
	//std::cout << SQUARE(3.5) << std::endl;
	return 0;
}