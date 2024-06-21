#include "4-1강 정보은닉.h"

Point::Point(int xpos, int ypos)
{
	if (!(SetX(xpos) && SetY(ypos)))
	{
		cout << "포인트 할당 실패" << endl;
		SetX(0);
		SetY(0);
	}
}

int Point::GetX() const { return x; }
int Point::GetY() const { return y; }

bool Point::SetX(int xpos)
{
	if (0 > xpos && xpos < 101)
	{
		cout << "X : 벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos && ypos < 101)
	{
		cout << "Y : 벗어난 범위의 값 전달" << endl;
		return false;
	}

	y = ypos;
	return true;
}

Rectangle::Rectangle(const Point& ul, const Point& lr) : upLeft(ul), lowRight(lr)
{
	if (!(ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()))
	{
		upLeft = ul;
		lowRight = lr;
	}
	else
	{
		cout << "잘못된 위치정보 전달" << endl;
		upLeft = Point(0, 0);
		lowRight = Point(0, 0);
	}

}

bool Rectangle::ChangeMembers(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}

/// <summary>
/// 재한된 접근방법으로 접근을 허용해 실수가 쉽게 발견해도록 하는것이 정보은닉, 현재 코드를 바꿔 안정성이 높아졌다.
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main241(void)
{
	Rectangle rectangle(Point(-1, 0), Point(2, 0));
	rectangle.ShowRecInfo();

	rectangle.ChangeMembers(Point(3, 3), Point(4, 4));
	rectangle.ShowRecInfo();

	return 0;
}
