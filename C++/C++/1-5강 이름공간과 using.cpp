#include <iostream>

using namespace std;	 //std��� �̸������ȿ� ����� ���� �̸�����(std) ����

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

	using namespace Worst; //Worst ����
	using Worst::fun;;  //Worst::fun �� fun���� ���  
	cout<<fun(1);
	::num++;			//�������� ����
	return 0;
}