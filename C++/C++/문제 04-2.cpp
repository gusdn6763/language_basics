#pragma once

#include <iostream>

using namespace std;

class ExamPoint
{
private:
	int xpos;
	int ypos;
public:
	void	Init(int x, int y)
	{
		xpos += x;
		ypos += y;
	}

	void	ShowPointInfo()
	{
		cout << xpos << "  " << ypos << endl;
	}
};

class ExamCircle
{
private:
	int rad;
	ExamPoint center;
public:
	void Init(int x, int y, int r)
	{
		rad = r;
		center.Init(x, y);
	}
	void	ShowCircleInfo()
	{
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};



class ExamRing
{
private:
	ExamCircle circleIn;
	ExamCircle circleOut;
public:
	void Init(int x, int y, int r, int x1, int y1, int r1)
	{
		circleIn.Init(x, y, r);
		circleOut.Init(x1, y1, r1);
	}
	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		circleIn.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		circleOut.ShowCircleInfo();
	}
};

void exam042()
{
	cout << "¹®Á¦1" << endl << endl;
	ExamRing ring;

	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
}