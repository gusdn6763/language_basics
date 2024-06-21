#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()
	{

	}

	MyClass(int n) : num(n)
	{

	}

private:
	int num;
};


/// <summary>
/// 생성자가 존재하는 함수에서 배열 및 포인터를 선언시, 
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main244(void)
{ 
	int count;

	cout << "생성할 갯수 입력";
	cin >> count;
	
	MyClass test[3] = { 3,3,3 };
	MyClass* test1 = new MyClass[count];

	for (int i = 0; i < count; i++)
	{
		test1[i] = *(new MyClass(1));
	}





	return 0;
}