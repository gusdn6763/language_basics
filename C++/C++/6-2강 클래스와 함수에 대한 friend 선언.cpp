#include <iostream>
using namespace std;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;						//friend를 선언하지 않으면
public:
	Boy(int len) : height(len)
	{ }
};

class Girl
{
public:
	void ShowBoy(Boy boy)
	{
		cout << boy.height << endl;					//boy.height에 접근 할 수 없다.
	}
};

class Point;

class PointOP
{
public:
	Point PointAdd(const Point&, const Point&);
	PointOP(){}
	~PointOP()
	{
		cout << "복사 생성자 삭제됨(OP)" << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos)
	{
		cout << "객체 생성자 추가됨 : " << this << endl;
	}

	Point(const Point& pos) : x(pos.x), y(pos.y)
	{
		cout << "복사 생성자 추가됨 : " << this << endl;
	}
	~Point()
	{
		cout << "복사 생성자 삭제됨 : " << this << endl;
	}
	friend Point PointOP::PointAdd(const Point&, const Point&);	//PoineOP클래스의 PointAdd함수에게 private 접근을 허용한다(아래와 같은말)
	friend void ShowPointPos(const Point&);			//Point의 private멤버변수(point.x, point.y)에 접근이 가능함
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)  //frined 선언으로 멤버변수에 접근 가능
{
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);		
}

void ShowPointPos(const Point& pos)						//복사 생성자 추가됨
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}

void MakeCon(Point pos)						//복사 생성자 추가됨
{
	cout << "복사 생성자 나왔다 : " << &pos << endl;
}											//복사 생성자 삭제됨

int main262()
{
	Boy boy(170);
	Girl girl;
	girl.ShowBoy(boy);

	cout << endl;

	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	MakeCon(pos1);
	cout << endl;
	ShowPointPos(op.PointAdd(pos1, pos2));

	cout << endl;
	return 0;
}

/*
객체 생성자 추가됨 : 000000E2F27EF9D8
객체 생성자 추가됨 : 000000E2F27EF9F8
복사 생성자 추가됨 : 000000E2F27EFB78
복사 생성자 나왔다 : 000000E2F27EFB78
복사 생성자 삭제됨 : 000000E2F27EFB78

객체 생성자 추가됨 : 000000E2F27EFBB4
x: 3, y: 6
복사 생성자 삭제됨 : 000000E2F27EFBB4

복사 생성자 삭제됨(OP)
복사 생성자 삭제됨 : 000000E2F27EF9F8
복사 생성자 삭제됨 : 000000E2F27EF9D8
*/