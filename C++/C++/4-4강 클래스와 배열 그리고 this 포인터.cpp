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
/// �����ڰ� �����ϴ� �Լ����� �迭 �� �����͸� �����, 
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main244(void)
{ 
	int count;

	cout << "������ ���� �Է�";
	cin >> count;
	
	MyClass test[3] = { 3,3,3 };
	MyClass* test1 = new MyClass[count];

	for (int i = 0; i < count; i++)
	{
		test1[i] = *(new MyClass(1));
	}





	return 0;
}