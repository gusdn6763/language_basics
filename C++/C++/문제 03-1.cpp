#include <iostream>
#include "0강 선택.h"

using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void	MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point& pos)
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}

	void	ShowPosition()
	{
		cout << xpos << "  " << ypos << endl;
	}
};


void exam031()
{
	cout << "문제1" << endl << endl;
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
}