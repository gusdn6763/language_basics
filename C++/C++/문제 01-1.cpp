#include <iostream>
#include <string>

using namespace std;

void exam011_1()
{
	int num, tmp = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ���� �Է�";
		cin >> num;
		tmp += num;
	}
	cout << "�հ�" << tmp << endl;
}

void exam011_2()
{
	string name, phone_number;

	cout << "�̸��Է� : ";
	cin >> name;
	cout << "��ȭ��ȣ �Է� : ";
	cin >> phone_number;
	cout << endl << "�̸� : " << name << endl << "��ȭ��ȣ : " << phone_number << endl;
}

void exam011_3()
{
	int num;
	cout << "������ ��ȣ �Է� : ";
	cin >> num;
	for (int i = 1; i < 10; i++)
		cout << num << "x" << i << "=" << num * i << endl;
}

void exam011_4()
{
	int num;
	while (1)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է� : ";
		cin >> num;
		if (num == -1)
			break;
		cout << "�̹� �� �޿� : " << 50 + num * 0.12 << "����" << endl;
	}
}

void exam011()
{
	cout << "����1" << endl << endl;
	exam011_1();
	cout << "����2" << endl << endl;
	exam011_2();
	cout << "����3" << endl << endl;
	exam011_3();
	cout << "����4" << endl << endl;
	exam011_4();
}