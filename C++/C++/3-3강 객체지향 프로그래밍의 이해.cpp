#include "3-3강 객체지향 프로그래밍의 이해.h"


void FruitSell::InitMembers(int price, int num, int money)
{
	applePrice = price;
	appleNum = num;
	currentMoney = money;
};

int FruitSell::SaleApples(int money)
{
	int num = money / applePrice;
	appleNum -= num;
	currentMoney += money;
	return num;
};

void FruitSell::ShowSalesResult()
{
	cout << "남은 사과: " << appleNum << endl;
	cout << "판매 수익: " << currentMoney << endl << endl;
};

void FruitBuy::InitMembers(int money)
{
	currentMoney = money;
	appleNum = 0;
};
void FruitBuy::BuyApples(FruitSell &seller, int money)
{
	appleNum += seller.SaleApples(money);
	currentMoney -= money;
};

void FruitBuy::ShowBuyResult()
{
	cout << "현재 잔액: " << currentMoney << endl;
	cout << "사과 개수: " << appleNum << endl << endl;
};

/// <summary>
/// 헤더파일을 보는것이 이해가 쉽다.
/// 객체 지향 프로그래밍이란 사물과 대상, 그에 따른 행동을 실체화 시키는 프로그래밍
/// ex) 사과장수 -> 사과 파는 행동(함수), 현재 돈, 사과갯수등의 정보(멤버변수)
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main233(void)
{
	FruitSell seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuy buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(seller, 2000);
	
	cout<<"과일 판매자의 현황"<<endl;
	seller.ShowSalesResult();
	cout<<"과일 구매자의 현황"<<endl;
	buyer.ShowBuyResult();
	return 0;
}
