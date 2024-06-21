#pragma once

#include <cstring>
#include <unordered_map>
#include <vector>
#include <string>

namespace Simulate
{
	class Bank;
	class People;

	typedef struct Account
	{
		int			id = 0;
		int			Money = 0;
		string		password;
	}				Account;		//����

	class			People
	{
	public:
		People(string name, int money = 0) : name(name), currentMoney(money)
		{
		}
		~People()
		{
			cout << "ĳ���� ������";
		}
		void		GoBank(Bank& bank);			//�������� ����.
		void		Working();					//���� �Ѵ�.
		void		ShowMyInfo();				//�̸��� ���� ���Ѵ�.
		string		TellName();					//�̸��� �˷��ش�.
	private:
		string		name;						//�̸�
		int			currentMoney;				//���� ��
	};

	class			Bank
	{
	private:
		string bankName;						//���� �̸�
		int bankCount = -1;						//���� ��ȣ
	public:
		Bank()
		{
			bankName = "";
		}
		Bank(string name, int count) : bankName(name), bankCount(count)
		{
		}
		string		BankName();																	//���� �̸�
		void		MakeAccount(People *currentPeople);											//����� ���¸� �����.
		bool		FindAccount(People *currentPeople);											//���¸� ã�´�.
		int			CheckMoney(int money);														//���� Ȯ���Ѵ�.
		int			DepositAndWithdrawal(People *currentPeople, bool moneyComp, int &money);	//���¿� ������ �õ��Ѵ�.
		bool		CheckPassword(People* currentPeople);										//������ ��й�ȣ�� Ȯ���Ѵ�.
		void		ShowInfo(People *currentPeople);											//������ ������ �����ش�.
	private:
		unordered_map<string, Account> *account = new unordered_map<string, Account>;			//����
	};

	void	ShowChooseNum(const char* str);
	int		main245();
}