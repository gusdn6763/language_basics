#pragma once

#include <iostream>

using namespace std;

class FruitSell
{
private:
	int applePrice;											//��� ����
	int appleNum;											//���� ��� ����
	int currentMoney;										//���� ��
public:
	void InitMembers(int price, int num, int money);		//�ʱ� ����
	int SaleApples(int money);								//����Ǹ�
	void ShowSalesResult();									//���� ����
};

class FruitBuy
{
private:
	int currentMoney;									//���� ��
	int appleNum;										//���� ��� ����
public:
	void InitMembers(int money);						//�ʱ� ����
	void BuyApples(FruitSell &seller, int money);		//��� ����
	void ShowBuyResult();								//������ ����
};

