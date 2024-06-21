#include <iostream>
#include "Util.h"

using namespace std;

class CopyConstructor
{
public:
	int num1;
	int num2;
	CopyConstructor(int n1, int n2) : num1(n1), num2(n2)
	{
	}

	CopyConstructor(CopyConstructor &test) : num1(test.num1), num2(test.num2)
	{
		cout << "���� ������";
	}
	explicit CopyConstructor(int n1) : num1(n1)	//������ ��ȯ�� �߻����� �ʴ´� == ����Ʈ �����ڸ� �������� �ʴ´�.
	{
		num2 = 1;
	}

	void ShowInfo()
	{
		cout << num1 << "  " << num2 << endl;
	}

	void Add()
	{
		num1++;
		num2++;
	}
};

/// <summary>
/// ���� �����ڿ� ���� ����, explieit���� ������ ���� ������ C++ �ϸ�ũ
/// </summary>
/// <returns></returns>
int main251()
{
	CopyConstructor copyConstructor1(1,2);
	CopyConstructor copyConstructor2(copyConstructor1);
	copyConstructor1.Add();
	copyConstructor1.ShowInfo();
	copyConstructor2.ShowInfo();

	CopyConstructor copyConstructor3 = { 1, 2 };
	CopyConstructor copyConstructor4 = copyConstructor3;
	copyConstructor3.Add();
	copyConstructor3.ShowInfo();
	copyConstructor4.ShowInfo();

	CopyConstructor copyConstructor5(1);
	
	//CopyConstructor copyConstructor5 = { 1 };	����
	return 0;
}