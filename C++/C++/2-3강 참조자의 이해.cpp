#include <iostream>

using namespace std;


/// <summary>
/// 참조자란 메모리 공간에 여러개의 이름을 붙여주는것이다. 새로 선언된 변수앞에 등장하면 참조자라는 의미
/// </summary>
/// <returns></returns>
int main122()
{
	int num = 1;
	int &num1 = num;

	int *ptr = &num;
	int *(&ptr1) = ptr;

	cout << num << endl;
	cout << num1 << endl;

	cout << &num << endl;
	cout << &num1 << endl;

	cout << endl <<"포인터 주소값" << endl;

	cout << &ptr << endl;
	cout << &ptr1 << endl;
	return 0;
}