#pragma once
//헤더파일 중복 선언 방지, 다른 컴파일러에서 사용될 수 있는지 확인이 필요

#include <iostream>
#include <windows.h>
#include <cctype>

using namespace std;

void			exam011();
void			exam011_1();
void			exam011_2();
void			exam011_3();
void			exam011_4();

void			exam012();
void			exam012_1(int* num1, int* num2);
void			exam012_1(char* num1, char* num2);
void			exam012_1(double* num1, double* num2);

void			exam013();
int				exam013_1(int n1);
int				exam013_1(int n1, int n2);
int				exam013_1(int n1, int n2, int n3);

void			exam021();
void			exam021_1_plus(int& n1);
void			exam021_1_reverse(int& n1);
int				exam021_2();
void			exam021_3(int* (&n1), int* (&n2));

void			exam023();

void			exam031();

void			exam032();

void			exam041();

void			exam042();

void			exam043();

void			exam051();

int				main111();

int				FunOverloding(int num);
int				FunOverloding(char str);
int				FunOverloding(int num1, int num2);
int				main112();

int				DefaultFunc(int num = 5);
int				main113();

inline int		SQUARE(int x);
int				main114();

int				main115();

int				CheckMoney(int money);
void			MakeBank(int i);
void			AddMoney();
void			MinusMoney();
void			CheckInfo();
int				main116();

int				main121();

int				main122();

void			Swap(int num1, int num2);
int				*AddAddr(int* str);
void			ReSwap(int& abc, int& def);
int				&ReturnRef(int& num);
int				ReturnAddRef(int& num);
int				main123();

int				main124();

int				main125();

int				main231();

int				main232();

int				main233();


int				main241();

int				main242();

int				main243();

int				main244();

int				main251();

int				main252();

int				main253();

int				main261();

int				main262();

int				main263();

int				main371();

int				main372();

int				main373();

int				main374();
