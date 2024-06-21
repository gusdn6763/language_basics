#include <iostream>
//매크로 함수의 쓰기 어려운 단점을 함수로 변경


inline int SQUARE(int x)
{
	return x * x;
}
//  #define SQUARE(X)   ((X)*(X)  //매크로 함수와 동일

int main114()
{
	std::cout << SQUARE(5) << std::endl;
	//std::cout << SQUARE(3.5) << std::endl;
	return 0;
}