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
			money = GetNumber("\n�ݾ� �ٽ��Է�:");
	return money;
}

void MakeBank(int i)
{
	cout << "\n[���°���]" << endl;
	peopleInfo[i].id = GetNumber("����ID:");
	cout << "�̸�";
	cin >> peopleInfo[i].name;
	peopleInfo[i].money = CheckMoney(GetNumber("�Աݾ� : "));
}

void AddMoney()
{
	int id;
	cout << "[�Ա�]" << endl;
	id = GetNumber("����ID : ");
	for (int i = 0; i < 100; i++)
	{
		if (id == peopleInfo[i].id)
		{
			peopleInfo[i].money += CheckMoney(GetNumber("�Աݾ� : "));
			return ;
		}
	}
	cout << "���� �����Դϴ�" << endl;
	Sleep(1000);
}

void MinusMoney()
{
	int id,save;
	cout << "[���]" << endl;
	id = GetNumber("����ID : ");
	for (int i = 0; i < 100; i++)
		if (id == peopleInfo[i].id)
		{
			save = CheckMoney(GetNumber("��ݾ� : "));
			if (save > peopleInfo[i].id)
			{
				cout << "����Ϸ��� �ݾ��� �� �����ϴ�" << endl;
			}
			else
			{
				peopleInfo[i].money -= save;
			}
			cout << "�ܾ� : " << peopleInfo[i].money;
			Sleep(1000);
			break;
		}
	cout << "���� �����Դϴ�" << endl;
	Sleep(1000);
}

void CheckInfo()
{
	int c;
	cout << "��������\n" << "����ID:";
	cin >> c;
	for (int i = 0; i < 100; i++)
	{
		if (c == peopleInfo[i].id)
		{
			cout << "����id : " << peopleInfo[i].id << endl;
			cout << "�����̸� : " <<peopleInfo[i].name <<endl;
			cout << "���� �� : "<<peopleInfo[i].money << endl;
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
		cout << "1. ���°���" << endl;
		cout << "2. �Ա�" << endl;
		cout << "3. ���" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷�����" << endl;
		num = GetNumber("���� : ");
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