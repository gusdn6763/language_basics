#include <iostream>
#include "Util.h"

using namespace std;

class DeepCopyConstructorExample2
{
private:
	int num;
public:
	DeepCopyConstructorExample2(int n) : num(n)
	{  }
	DeepCopyConstructorExample2(const DeepCopyConstructorExample2& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFuncObj2(DeepCopyConstructorExample2 ob)
{
	ob.ShowData();
}

class DeepCopyConstructorExample3
{
private:
	int num;
public:
	DeepCopyConstructorExample3(int n) : num(n)
	{ }
	DeepCopyConstructorExample3(const DeepCopyConstructorExample3& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	DeepCopyConstructorExample3& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

DeepCopyConstructorExample3 SimpleFuncObj3(DeepCopyConstructorExample3 ob)
{
	cout << "return ����" << endl;
	return ob;					//2��° ���� ������ ���� -> �ӽð�ü�� ��������� ȣ��
}

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) :num(n) {
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) :num(copy.num) {
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple() {
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "Param ADR: " << &ob << endl;
	return ob;
}

/// <summary>
/// 1. ���� ��ü�� �̿��� ���ο� ��ü�� �ʱ�ȭ �ϴ� ���
/// 2. ��ü�� ���ڷ� �����ϴ� ���
/// 3. ���������� ��ü�� ��ȯ���� ������
/// </summary>
/// <returns></returns>
int	main253()
{
	DeepCopyConstructorExample2 obj1(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj2(obj1);					//2.�� ��ü obj�� ���ڷ� �����ϰ��ִ�. SimpleFuncObj�Լ��� �Ű����� ob�� obj�� ���޹����鼭 ��������ڰ� ����ȴ�
	cout << "�Լ�ȣ�� ��" << endl;

	DeepCopyConstructorExample3 obj2(7);
	SimpleFuncObj3(obj2).AddNum(5).AddNum(5).ShowData();		//�ӽ� ��ü�̱⶧���� obj ��ü�� �ٸ� ���� ������ �Ҹ��
	obj2.ShowData();

	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;

	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;

	return (0);
}

/*
SoSimple Ŭ���� ��°�
New Object: 002AFCCC		Sosimple obj ���� (SoSimple obj(7))
New Copy obj: 002AFBB4		�Ű������� ��ü�� �����鼭 ��������� ���� (SoSimple SimpleFuncObj(SoSimple ob))
Param ADR: 002AFBB4			SoSimple SimpleFuncObj(SoSimple ob) �Լ� ����
New Copy obj: 002AFBE8		SoSimple SimpleFuncObj(SoSimple ob)�� ��ȯ�� �����ϸ鼭 �ӽ� ��ü ����
Destroy obj: 002AFBB4		�Ű������� ���� ���� ������ �Ҹ�
Destroy obj: 002AFBE8		��ȯ������ ������ �ӽ� ��ü �Ҹ�
							cout << endl;
New Copy obj: 002AFBB4		�Ű������� ��ü�� �����鼭 ��������� ���� (SoSimple SimpleFuncObj(SoSimple ob))
Param ADR: 002AFBB4			SoSimple SimpleFuncObj(SoSimple ob) �Լ� ����
New Copy obj: 002AFCC0		SoSimple SimpleFuncObj(SoSimple ob)�� ��ȯ�� �����ϸ鼭 �ӽ� ��ü ����
Destroy obj: 002AFBB4		�Ű������� ���� ���� ������ �Ҹ�
Return Obj 002AFCC0			&tempRef�� �ּҰ� ���� -> 002AFCC0 �ӽð�ü�� �ּҰ� -> ob�� ��ȯ�����Ƿ�
Destroy obj: 002AFCC0		SoSimple tempRef �Ҹ�
Destroy obj: 002AFCCC		SoSimple obj(7) �Ҹ�
*/