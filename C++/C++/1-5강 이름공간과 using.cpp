#include <iostream>

using namespace std;	 //std라는 이름공간안에 기능을 쓸때 이름공간(std) 생략

namespace Best
{
	void fun1();
	int fun(int num)
	{
		return num;
	}
}

void Best::fun1()
{
	cout << "abc";
}

namespace Worst
{
	int fun(int num)
	{
		return num+1;
	}
}

int num = 1;

int main115()
{
	Best::fun1();
	cout<< Best::fun(5);
	cout<< Worst::fun(5);

	using namespace Worst; //Worst 생략
	using Worst::fun;;  //Worst::fun 을 fun으로 사용  
	cout<<fun(1);
	::num++;			//전역변수 접근
	return 0;
}