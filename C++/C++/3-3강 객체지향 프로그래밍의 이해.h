#pragma once

#include <iostream>

using namespace std;

class FruitSell
{
private:
	int applePrice;											//사과 가격
	int appleNum;											//현재 사과 갯수
	int currentMoney;										//현재 돈
public:
	void InitMembers(int price, int num, int money);		//초기 정보
	int SaleApples(int money);								//사과판매
	void ShowSalesResult();									//현재 정보
};

class FruitBuy
{
private:
	int currentMoney;									//현재 돈
	int appleNum;										//현재 사과 갯수
public:
	void InitMembers(int money);						//초기 정보
	void BuyApples(FruitSell &seller, int money);		//사과 구매
	void ShowBuyResult();								//구매자 정보
};

