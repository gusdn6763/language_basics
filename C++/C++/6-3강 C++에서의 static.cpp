#include <iostream>

using namespace std;

class GlobalValueClass
{
private:
	static int num1;					//Ŭ���� ������� �Ҹ�, ���� �̸��� Ŭ�������� ���� �Ѱ��� ������
	const static int num2 = 10;			//const�� ����� ����� ���ÿ� �ʱ�ȭ ������
public:
	GlobalValueClass()
	{
		num1++;
		cout << num1 << "��° GlobalValueClass ��ü" << endl;
	}
	static void Add(int n)	// Ŭ������ �̸��� ���ؼ� ȣ���� ������, ���� �̸��� ��� Ŭ������ ������, static ����Ȱ͸� ȣ�Ⱑ��
	{
		num1 += n;
	}
};

int GlobalValueClass::num1 = 0;

int main263(void)
{
	GlobalValueClass one;
	GlobalValueClass two;

	return 0;
}