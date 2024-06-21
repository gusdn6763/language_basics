#include <iostream>
#include <string>

using namespace std;

void exam011_1()
{
	int num, tmp = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정수 입력";
		cin >> num;
		tmp += num;
	}
	cout << "합계" << tmp << endl;
}

void exam011_2()
{
	string name, phone_number;

	cout << "이름입력 : ";
	cin >> name;
	cout << "전화번호 입력 : ";
	cin >> phone_number;
	cout << endl << "이름 : " << name << endl << "전화번호 : " << phone_number << endl;
}

void exam011_3()
{
	int num;
	cout << "구구단 번호 입력 : ";
	cin >> num;
	for (int i = 1; i < 10; i++)
		cout << num << "x" << i << "=" << num * i << endl;
}

void exam011_4()
{
	int num;
	while (1)
	{
		cout << "판매 금액을 만원 단위로 입력 : ";
		cin >> num;
		if (num == -1)
			break;
		cout << "이번 달 급여 : " << 50 + num * 0.12 << "만원" << endl;
	}
}

void exam011()
{
	cout << "문제1" << endl << endl;
	exam011_1();
	cout << "문제2" << endl << endl;
	exam011_2();
	cout << "문제3" << endl << endl;
	exam011_3();
	cout << "문제4" << endl << endl;
	exam011_4();
}