#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void ClearLineFromReadBuffer();    //외부에 함수가 선언 및 정의됨

#include "1-0강 기초.c"
#include "3-0강 변수와 연산자.c"
#include "4-0강 데이터 표현방식.c"
#include "5-0강 정수 실수 자료형.c"
#include "5-1강 자료형 변환.c"
#include "5-2강 아스키 코드.c"
#include "5-3강 상수.c"
#include "6강 scanf함수와 printf함수.c"
#include "7-0강 while문.c"
#include "7-1강 do while문.c"
#include "7-2강 for문.c"
#include "8-0강 if문.c"
#include "8-1강 continue문 break문.c"
#include "8-2강 switch문.c"
#include "9-0강 함수 지역함수.c"
#include "9-1강 전역함수 static함수.c"
#include "9-2강 재귀함수.c"
#include "10강 도전 프로그래밍2.c"
#include "11-0강 배열.c"
#include "11-1강 문자열.c"
#include "12강 포인터.c"
#include "13-0강 포인터와 배열.c"
#include "13-1강 포인터와 문자열.c"
#include "13-2강 포인터배열.c"
#include "14-0강 포인터와 함수.c"
#include "15강 도전 프로그래밍.c"
#include "16강 다차원 배열.c"
#include "17강 포인터의 포인터.c"
#include "18강 다차원 배열과 포인터.c"
#include "19강 함수 포인터와 void포인터.c"
#include "20강 도전 프로그래밍3.c"
#include "21-0강 문자 단위 입출력 련함수.c"
#include "21-1강 문자열 단위 입출력 함수.c"
#include "21-2강 입출력 버퍼.c"
#include "21-3강 문자열 관련함수.c"
#include "22-0강 구조체.c"
#include "22-1강 구조체 배열.c"
#include "22-2강 구조체 포인터.c"
#include "23-0강 구조체와 typedef 선언.c"
#include "23-1강 구조체 함수.c"
#include "23-2강 공용체.c"
#include "23-3강 구조체 포인터.c"
#include "23-4강 열거형.c"
#include "24-0강 파일 입출력.c"
#include "26-0강 매크로와 선행처리기.c"
#include "26-1강 조건부 컴파일.c"
#include "26-2강 매크로의 매개변수 치환.c"

int main()
{
	int chooseChapter = 0;

	printf("챕터입력:");

	scanf_s("%d", &chooseChapter);

	if (chooseChapter == 1)
	{
		main1();
	}
	else if (chooseChapter == 3)
	{
		main3();
	}
	else if (chooseChapter == 4)
	{
		main4();
	}
	else if (chooseChapter == 5)
	{
		int chooseChapterNumber;
		printf("값입력:");
		scanf_s("%d", &chooseChapterNumber);
		if (chooseChapterNumber == 0)
		{
			main5();
		}
		if (chooseChapterNumber == 1)
		{
			main51();
		}
		if (chooseChapterNumber == 2)
		{
			main52();
		}
		if (chooseChapterNumber == 3)
		{
			main53();
		}
	}
	else if (chooseChapter == 6)
	{
		main6();
	}
	else if (chooseChapter == 7)
	{
		int chooseChapterNumber;
		printf("값입력:");
		scanf_s("%d", &chooseChapterNumber);
		if (chooseChapterNumber == 0)
		{
			main7();
		}
		if (chooseChapterNumber == 1)
		{
			main71();
		}
		if (chooseChapterNumber == 2)
		{
			main72();
		}
	}
	else if (chooseChapter == 8)
	{
		int chooseChapterNumber;
		printf("값입력:");
		scanf_s("%d", &chooseChapterNumber);
		if (chooseChapterNumber == 0)
		{
			main8();
		}
		if (chooseChapterNumber == 1)
		{
			main81();
		}
		if (chooseChapterNumber == 2)
		{
			main82();
		}
	}
	else if (chooseChapter == 9)
	{
		int chooseChapterNumber;
		printf("값입력:");
		scanf_s("%d", &chooseChapterNumber);
		if (chooseChapterNumber == 0)
		{
			main9();
		}
		if (chooseChapterNumber == 1)
		{
			main91();
		}
		if (chooseChapterNumber == 2)
		{
			main92();
		}
	}
	else if (chooseChapter == 10)
	{
		int chooseChapterNumber;
		printf("값입력:");
		scanf_s("%d", &chooseChapterNumber);
		if (chooseChapterNumber == 2)
		{
			test2();
		}
		if (chooseChapterNumber == 3)
		{
			test3();
		}
		if (chooseChapterNumber == 4)
		{
			test4();
		}
		if (chooseChapterNumber == 5)
		{
			test5();
		}
		if (chooseChapterNumber == 6)
		{
			test6();
		}
		if (chooseChapterNumber == 8)
		{
			test8();
		}
	}
	else if (chooseChapter == 11)
	{
		int chooseChapterNumber;
		printf("값입력:");
		scanf_s("%d", &chooseChapterNumber);
		if (chooseChapterNumber == 0)
		{
			main11();
		}
		if (chooseChapterNumber == 1)
		{
			main111();
		}
	}
	else if (chooseChapter == 12)
	{
		main12();
	}
	else if (chooseChapter == 13)
		{
			int chooseChapterNumber;
			printf("값입력:");
			scanf_s("%d", &chooseChapterNumber);
			if (chooseChapterNumber == 0)
			{
				main13();
			}
			if (chooseChapterNumber == 1)
			{
				main131();
			}
			if (chooseChapterNumber == 2)
			{
				main132();
			}
		}
	else if (chooseChapter == 14)
		{
			main14();
		}
	else if (chooseChapter == 15)
		{
			main15();
		}
	else if (chooseChapter == 16)
		{
			main16();
		}
	else if (chooseChapter == 17)
		{
			main17();
		}
	else if (chooseChapter == 18)
		{
			main18();
		}
	else if (chooseChapter == 19)
		{
			main19();
		}
	else if (chooseChapter == 20)
		{
			int chooseChapterNumber;
			printf("값입력:");
			scanf_s("%d", &chooseChapterNumber);
			if (chooseChapterNumber == 1)
			{
				test31();
			}
			if (chooseChapterNumber == 2)
			{
				test32();
			}
			if (chooseChapterNumber == 4)
			{
				test34();
			}
			if (chooseChapterNumber == 5)
			{
				test35();
			}
		}
	else if (chooseChapter == 21)
		{
			int chooseChapterNumber;
			printf("값입력:");
			scanf_s("%d", &chooseChapterNumber);
			if (chooseChapterNumber == 0)
			{
				main21();
			}
			if (chooseChapterNumber == 1)
			{
				main211();
			}
			if (chooseChapterNumber == 2)
			{
				main212();
			}
			if (chooseChapterNumber == 3)
			{
				main213();
			}
		}
	else if (chooseChapter == 22)
		{
			int chooseChapterNumber;
			printf("값입력:");
			scanf_s("%d", &chooseChapterNumber);
			if (chooseChapterNumber == 0)
			{
				main22();
			}
			if (chooseChapterNumber == 1)
			{
				main221();
			}
			if (chooseChapterNumber == 2)
			{
				main222();
			}
		}
	else if (chooseChapter == 23)
		{
			int chooseChapterNumber;

			printf("값입력:");

			scanf_s("%d", &chooseChapterNumber);
			if (chooseChapterNumber == 0)
			{
				main23();
			}
			if (chooseChapterNumber == 1)
			{
				main231();
			}
			if (chooseChapterNumber == 2)
			{
				main232();
			}

			if (chooseChapterNumber == 3)
			{
				main233();
			}
		}
	else if (chooseChapter == 24)
		{
			main24();
		}
}