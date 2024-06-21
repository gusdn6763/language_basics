#include "Util.h"

using namespace std;

typedef struct bank
{
	int id;
	char name[10];
	int money;
}bank;

bank peopleInfo[100];

int CheckMoney(int money)
{
	if (money < 0)
		while (money < 0)
			money = GetNumber("\n금액 다시입력:");
	return money;
}

void MakeBank(int i)
{
	cout << "\n[계좌개설]" << endl;
	peopleInfo[i].id = GetNumber("계좌ID:");
	cout << "이름";
	cin >> peopleInfo[i].name;
	peopleInfo[i].money = CheckMoney(GetNumber("입금액 : "));
}

void AddMoney()
{
	int id;
	cout << "[입금]" << endl;
	id = GetNumber("계좌ID : ");
	for (int i = 0; i < 100; i++)
	{
		if (id == peopleInfo[i].id)
		{
			peopleInfo[i].money += CheckMoney(GetNumber("입금액 : "));
			return ;
		}
	}
	cout << "없는 계좌입니다" << endl;
	Sleep(1000);
}

void MinusMoney()
{
	int id,save;
	cout << "[출금]" << endl;
	id = GetNumber("계좌ID : ");
	for (int i = 0; i < 100; i++)
		if (id == peopleInfo[i].id)
		{
			save = CheckMoney(GetNumber("출금액 : "));
			if (save > peopleInfo[i].id)
			{
				cout << "출금하려는 금액이 더 많습니다" << endl;
			}
			else
			{
				peopleInfo[i].money -= save;
			}
			cout << "잔액 : " << peopleInfo[i].money;
			Sleep(1000);
			break;
		}
	cout << "없는 계좌입니다" << endl;
	Sleep(1000);
}

void CheckInfo()
{
	int c;
	cout << "계좌정보\n" << "계좌ID:";
	cin >> c;
	for (int i = 0; i < 100; i++)
	{
		if (c == peopleInfo[i].id)
		{
			cout << "계좌id : " << peopleInfo[i].id << endl;
			cout << "계좌이름 : " <<peopleInfo[i].name <<endl;
			cout << "계좌 돈 : "<<peopleInfo[i].money << endl;
		}
	}
	cout << " " << endl;
}

int main116()
{
	int num, i = 0;
	while (1)
	{
		cout << "-----Menu------" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램종료" << endl;
		num = GetNumber("선택 : ");
		system("cls");
		if (num == 1)
			MakeBank(i++);
		else if (num == 2)
			AddMoney();
		else if (num == 3)
			MinusMoney();
		else if (num == 4)
			CheckInfo();
		else if (num == 5)
			break;
		num = 0;
	}
	return 0;
}