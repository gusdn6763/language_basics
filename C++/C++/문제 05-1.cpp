#pragma once

#include <iostream>
#include "Util.h"

using namespace std;

enum {
	CLERK,
	SENIOR,
	ASSIST,
	MANAGER
};

class NameCard1
{
private:
	char* name;
	char* company;
	char* phone_number;
	int pos;
public:
	NameCard1(const char* name, const char* company, const char* phone_number, int pos)
	{
		this->name = new char[strlen(name) + 1];
		ft_strcpy(this->name, name);;

		this->company = new char[strlen(company) + 1];
		ft_strcpy(this->company, company);;

		this->phone_number = new char[strlen(phone_number) + 1];
		ft_strcpy(this->phone_number, phone_number);;

		this->pos = pos;
	}
	NameCard1(const NameCard1& copy)
	{
		this->name = new char[strlen(copy.name) + 1];
		ft_strcpy(this->name, copy.name);;

		this->company = new char[strlen(copy.company) + 1];
		ft_strcpy(this->company, copy.company);;

		this->phone_number = new char[strlen(copy.phone_number) + 1];
		ft_strcpy(this->phone_number, copy.phone_number);;

		this->pos = copy.pos;
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
	~NameCard1()
	{
		delete[]name;
		delete[]company;
		delete[]phone_number;
	}
};

void exam051()
{
	cout << "문제1" << endl << endl;
	NameCard1 manClerk("Lee", "ABCEng", "010-1111-2222", CLERK);
	NameCard1 copy1 = manClerk;
	manClerk.ShowNameCardInfo();
	copy1.ShowNameCardInfo();
}