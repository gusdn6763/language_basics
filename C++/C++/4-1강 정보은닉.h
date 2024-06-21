#pragma once

#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int xpos, int ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	Rectangle(const Point& ul, const Point& lr);
	bool ChangeMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};