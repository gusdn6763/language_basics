#include <iostream>
#include "Util.h"

using namespace std;

class DeepCopyConstructor
{
	char* name;
	int age;
public:
	DeepCopyConstructor(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		ft_strcpy(name, myname);
		age = myage;
	}
	/// <summary>
	/// 디폴트로 복사 생성을 할시 문제가 된다. 멤버대 멤버의 복사만 이루어져 참조형식이 되어버린다.
	/// </summary>
	/// <param name="copy"></param>
	DeepCopyConstructor(const DeepCopyConstructor& copy)
		: age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		ft_strcpy(name, copy.name);
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << this << endl;
		cout << "나이: " << age << endl;
	}
	~DeepCopyConstructor()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

/// <summary>
/// 얕은 복사생성(디폴트 복사생성)의 문제점 ->
/// B클래스가 A클래스를 디폴트 복사생성으로 받을시 참조자 형식이기 때문에, A 또는 B를 삭제 할시 다른 클래스에서 소멸된 멤버 변수를 참조하게된다.
/// </summary>
/// <returns></returns>
int	main252()
{
	DeepCopyConstructor man1("Lee dong woo", 29);
	DeepCopyConstructor man2 = man1; 	// or DeepCopyConstructor man2(man1);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return (0);
}