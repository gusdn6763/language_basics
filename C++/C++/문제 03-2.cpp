#include "���� 03-2.h"

void Calculator::Init()
{
	add_count = 0;
	div_count = 0;
	min_count = 0;
	mul_count = 0;
}

void Calculator::ShowOpCount()
{
	cout << "���� : " << add_count << endl;
	cout << "���� : " << min_count << endl;
	cout << "���� : " << mul_count << endl;
	cout << "������ : " << div_count << endl;
}

float Calculator::Add(float num1, float num2)
{
	add_count++;
	return num1 + num2;
}

float Calculator::Div(float num1, float num2)
{
	div_count++;
	return num1 / num2;
}

float Calculator::Min(float num1, float num2)
{
	min_count++;
	return num1 - num2;
}

float Calculator::Mul(float num1, float num2)
{
	mul_count++;
	return num1 * num2;
}

void Printer::SetString(const char* str)
{
	this->str = str;
}

void Printer::ShowString()
{
	cout << str << endl;
}



void	exam032()
{
	Calculator cal;

	Printer print;

	print.SetString("Hello");
	print.ShowString();
	while (1)
	{
		int num;
		cout << "���� : 1 ���� : 2 ������ : 3 ���ϱ� : 4 ���� Ƚ�� : 5����� : 0" << endl;
		cin >> num;
		if (!num)
			break;

		float num1, num2;
		cout << "���� 2�� �Է�" << endl;
		cin >> num1 >> num2;
		if (num == 1)
			cal.Add(num1, num2);
		if (num == 2)
			cal.Min(num1, num2);
		if (num == 3)
			cal.Div(num1, num2);
		if (num == 4)
			cal.Mul(num1, num2);
		if (num == 5)
			cal.ShowOpCount();
	}
}