#include <iostream>

using namespace std;


/// <summary>
/// �����ڶ� �޸� ������ �������� �̸��� �ٿ��ִ°��̴�. ���� ����� �����տ� �����ϸ� �����ڶ�� �ǹ�
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

	cout << endl <<"������ �ּҰ�" << endl;

	cout << &ptr << endl;
	cout << &ptr1 << endl;
	return 0;
}