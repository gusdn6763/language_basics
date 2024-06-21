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
/// 참조자를 통해 참조형식이 가능함
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

	AddAddr(&num1);  //call-by-value   //외부에 선언된 변수에 접근하는것이 아닌 주소값을 증가시킴

	ReSwap(num1, num2);   //call-by-reference   참조자를 이용
	cout << "call-by-reference " << endl;
	cout << num1 << endl;
	cout << num2 << endl << endl;

	int &num3 = ReturnRef(num1);	//num3 == num1
	cout << num1 << endl;
	cout << num3 << endl << endl;

	ReturnAddRef(num1);		//ReturnRef와 차이점 -> 반환값이 다르다 -> 참조자 변수에 값을 넣을 수 없다.		
	cout << num1 << endl;

	//const int num3 = 20;
	//const int &ref3 = num3;

	return 0;
}

