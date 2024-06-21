#include <iostream>

using namespace std;

void Swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int *AddAddr(int* str)
{
	return str + 1;
}

void ReSwap(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int	&ReturnRef(int &num)	
{
	num++;
	return num;
}

int ReturnAddRef(int &num)
{
	num++;
	return num;
}

/// <summary>
/// �����ڸ� ���� ���������� ������
/// </summary>
/// <returns></returns>
int main123()
{
	int num1 = 10;
	int num2 = 20;

	Swap(num1,num2);    //call-by-value
	cout << "call-by-value " << endl;
	cout << num1 << endl;
	cout << num2 << endl << endl;

	AddAddr(&num1);  //call-by-value   //�ܺο� ����� ������ �����ϴ°��� �ƴ� �ּҰ��� ������Ŵ

	ReSwap(num1, num2);   //call-by-reference   �����ڸ� �̿�
	cout << "call-by-reference " << endl;
	cout << num1 << endl;
	cout << num2 << endl << endl;

	int &num3 = ReturnRef(num1);	//num3 == num1
	cout << num1 << endl;
	cout << num3 << endl << endl;

	ReturnAddRef(num1);		//ReturnRef�� ������ -> ��ȯ���� �ٸ��� -> ������ ������ ���� ���� �� ����.		
	cout << num1 << endl;

	//const int num3 = 20;
	//const int &ref3 = num3;

	return 0;
}

