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
	}				Account;		//계좌

	class			People
	{
	public:
		People(string name, int money = 0) : name(name), currentMoney(money)
		{
		}
		~People()
		{
			cout << "캐릭터 삭제됨";
		}
		void		GoBank(Bank& bank);			//은행으로 간다.
		void		Working();					//일을 한다.
		void		ShowMyInfo();				//이름과 돈을 말한다.
		string		TellName();					//이름을 알려준다.
	private:
		string		name;						//이름
		int			currentMoney;				//현재 돈
	};

	class			Bank
	{
	private:
		string bankName;						//은행 이름
		int bankCount = -1;						//은행 번호
	public:
		Bank()
		{
			bankName = "";
		}
		Bank(string name, int count) : bankName(name), bankCount(count)
		{
		}
		string		BankName();																	//은행 이름
		void		MakeAccount(People *currentPeople);											//사람의 계좌를 만든다.
		bool		FindAccount(People *currentPeople);											//계좌를 찾는다.
		int			CheckMoney(int money);														//돈을 확인한다.
		int			DepositAndWithdrawal(People *currentPeople, bool moneyComp, int &money);	//계좌에 접근을 시도한다.
		bool		CheckPassword(People* currentPeople);										//계좌의 비밀번호를 확인한다.
		void		ShowInfo(People *currentPeople);											//계좌의 정보를 보여준다.
	private:
		unordered_map<string, Account> *account = new unordered_map<string, Account>;			//계좌
	};

	void	ShowChooseNum(const char* str);
	int		main245();
}