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
	cout << "return 이전" << endl;
	return ob;					//2번째 복사 생성자 실행 -> 임시객체의 복사생성자 호출
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
/// 1. 기존 객체를 이용해 새로운 객체를 초기화 하는 경우
/// 2. 객체를 인자로 전달하는 경우
/// 3. 참조형으로 객체를 반환하지 않을시
/// </summary>
/// <returns></returns>
int	main253()
{
	DeepCopyConstructorExample2 obj1(7);
	cout << "함수호출 전" << endl;
	SimpleFuncObj2(obj1);					//2.번 객체 obj를 인자로 전달하고있다. SimpleFuncObj함수의 매개변수 ob가 obj를 전달받으면서 복사생성자가 실행된다
	cout << "함수호출 후" << endl;

	DeepCopyConstructorExample3 obj2(7);
	SimpleFuncObj3(obj2).AddNum(5).AddNum(5).ShowData();		//임시 객체이기때문에 obj 객체와 다른 값을 가지고 소멸됨
	obj2.ShowData();

	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;

	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;

	return (0);
}

/*
SoSimple 클래스 출력값
New Object: 002AFCCC		Sosimple obj 생성 (SoSimple obj(7))
New Copy obj: 002AFBB4		매개변수로 객체를 받으면서 복사생성자 실행 (SoSimple SimpleFuncObj(SoSimple ob))
Param ADR: 002AFBB4			SoSimple SimpleFuncObj(SoSimple ob) 함수 실행
New Copy obj: 002AFBE8		SoSimple SimpleFuncObj(SoSimple ob)의 반환값 실행하면서 임시 객체 생성
Destroy obj: 002AFBB4		매개변수로 받은 복사 생성자 소멸
Destroy obj: 002AFBE8		반환값으로 생성된 임시 객체 소멸
							cout << endl;
New Copy obj: 002AFBB4		매개변수로 객체를 받으면서 복사생성자 실행 (SoSimple SimpleFuncObj(SoSimple ob))
Param ADR: 002AFBB4			SoSimple SimpleFuncObj(SoSimple ob) 함수 실행
New Copy obj: 002AFCC0		SoSimple SimpleFuncObj(SoSimple ob)의 반환값 실행하면서 임시 객체 생성
Destroy obj: 002AFBB4		매개변수로 받은 복사 생성자 소멸
Return Obj 002AFCC0			&tempRef의 주소값 실행 -> 002AFCC0 임시객체의 주소값 -> ob를 반환했으므로
Destroy obj: 002AFCC0		SoSimple tempRef 소멸
Destroy obj: 002AFCCC		SoSimple obj(7) 소멸
*/