#include "¹®Á¦ 03-2.h"

void Calculator::Init()
{
	add_count = 0;
	div_count = 0;
	min_count = 0;
	mul_count = 0;
}

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À : " << add_count << endl;
	cout << "»¬¼À : " << min_count << endl;
	cout << "°ö¼À : " << mul_count << endl;
	cout << "³ª´°¼À : " << div_count << endl;
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
		cout << "µ¡¼À : 1 »¬»ù : 2 ³ª´©±â : 3 °öÇÏ±â : 4 ÇöÀç È½¼ö : 5³ª±â±â : 0" << endl;
		cin >> num;
		if (!num)
			break;

		float num1, num2;
		cout << "¼ýÀÚ 2°³ ÀÔ·Â" << endl;
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