#include <iostream>

using namespace std;

class Pos
{
private:
	int xpos;
	int ypos;
public:
	Pos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void AddPos(int num)
	{
		xpos += num;
		ypos += num;
	}
	void ShowPos()
	{
		cout << xpos << endl << ypos << endl;
	}
};

class SimpleClass
{
private:
	 Pos pos;
	 const int num;
public:
	SimpleClass(int x , int y, int n = 0)				//생성자
		:pos(x, y), num(n)								//멤버 이니셜라이저 ->pos의 멤버변수 넣을때
	{
		pos.AddPos(n);
	}

	void ShowNum()
	{
		pos.ShowPos();
	}
	~SimpleClass()
	{
		cout << "종료!" << endl;
	}
};

/// <summary>
/// 생성자와 소멸자 및 멤버 이니셜라이저(생성자 안에 생성자를 넣을경우)에 관한 파트, const로 선언해도 이니셜라이저로 할당이 가능하다.
/// 객체 소멸시 소멸자 실행
/// </summary>
/// <returns></returns>
int main243()
{
	SimpleClass simpleClass(5, 5);

	simpleClass.ShowNum();

	return 0;
}

