#pragma once

#include <iostream>

using namespace std;

class Calculator
{
private:
	int num1;
	int num2;
	int add_count;
	int div_count;
	int min_count;
	int mul_count;
public:
	void Init();
	void ShowOpCount();
	float Add(float num1, float num2);
	float Div(float num1, float num2);
	float Min(float num1, float num2);
	float Mul(float num1, float num2);
};

class Printer
{
private:
	const char* str;
public:
	void SetString(const char* str);
	void ShowString();
};
