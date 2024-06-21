#include <iostream>

using namespace std;

class GlobalValueClass
{
private:
	static int num1;					//클래스 변수라고도 불림, 같은 이름의 클래스여도 오직 한개만 생성됨
	const static int num2 = 10;			//const로 선언시 선언과 동시에 초기화 가능함
public:
	GlobalValueClass()
	{
		num1++;
		cout << num1 << "번째 GlobalValueClass 객체" << endl;
	}
	static void Add(int n)	// 클래스의 이름을 통해서 호출이 가능함, 같은 이름의 모든 클래스가 공유함, static 선언된것만 호출가능
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