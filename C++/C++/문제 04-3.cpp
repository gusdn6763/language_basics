#pragma once

#include <iostream>
#include "Util.h"

using namespace std;

class ExamMakePoint
{
private:
	int xpos;
	int ypos;
public:
	ExamMakePoint(int x, int y) 
	{
		xpos = x;
		ypos = y;
	}

	void	ShowPointInfo()
	{
		cout << xpos << "  " << ypos << endl;
	}
};

class ExamMakerCircle
{
private:
	int rad;
	ExamMakePoint center;
public:
	ExamMakerCircle(int x, int y, int r): center(x,y)
	{
		rad = r;
	}
	void	ShowCircleInfo()
	{
		cout << "radius : " << rad << endl;
		center.ShowPointInfo();
	}
};

class ExamMakeRing
{
private:
	ExamMakerCircle circleIn;
	ExamMakerCircle circleOut;
public:
	ExamMakeRing(int x, int y, int r, int x1, int y1, int r1) : circleIn(x, y, r), circleOut(x1, y1, r1)
	{

	}
	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		circleIn.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		circleOut.ShowCircleInfo();
	}
};

enum {
	CLERK,
	SENIOR,
	ASSIST,
	MANAGER
}COMP_POS;

class NameCard
{
private:
	char *name;
	char *company;
	char *phone_number;
	int pos;
public:
	NameCard(const char* name, const char* company, const char* phone_number, int pos)
	{
		this->name = new char[strlen(name) + 1];
		ft_strcpy(this->name, name);;

		this->company = new char[strlen(company) + 1];
		ft_strcpy(this->company, company);;

		this->phone_number = new char[strlen(phone_number) + 1];
		ft_strcpy(this->phone_number, phone_number);;

		this->pos = pos;
	}
	void ShowNameCardInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "번호 : " << phone_number << endl;
		cout << "직급 :";
		if (pos == 0)
			cout << "사원" << endl;
		else if (pos == 1)
			cout << "주임" << endl;
		else if (pos == 2)
			cout << "대리" << endl;
		else
			cout << "과장" << endl;
	}
	~NameCard()
	{
		delete []name;
		delete []company;
		delete []phone_number;
		cout << "삭제됨";
	}
};

void exam043()
{
	cout << "문제1" << endl << endl;
	ExamMakeRing ring(1, 1, 4, 2, 2, 9);

	ring.ShowRingInfo();

	cout << "문제2" << endl << endl;
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", CLERK);
	manClerk.ShowNameCardInfo();
}