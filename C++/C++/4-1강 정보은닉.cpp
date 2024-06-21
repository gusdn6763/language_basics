#include "4-1�� ��������.h"

Point::Point(int xpos, int ypos)
{
	if (!(SetX(xpos) && SetY(ypos)))
	{
		cout << "����Ʈ �Ҵ� ����" << endl;
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
		cout << "X : ��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos && ypos < 101)
	{
		cout << "Y : ��� ������ �� ����" << endl;
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
		cout << "�߸��� ��ġ���� ����" << endl;
		upLeft = Point(0, 0);
		lowRight = Point(0, 0);
	}

}

bool Rectangle::ChangeMembers(const Point& ul, const Point& lr)
{
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "�߸��� ��ġ���� ����" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ���: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << ']' << endl << endl;
}

/// <summary>
/// ���ѵ� ���ٹ������ ������ ����� �Ǽ��� ���� �߰��ص��� �ϴ°��� ��������, ���� �ڵ带 �ٲ� �������� ��������.
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
