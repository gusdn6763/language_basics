#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void ClearLineFromReadBuffer();    //�ܺο� �Լ��� ���� �� ���ǵ�

#include "1-0�� ����.c"
#include "3-0�� ������ ������.c"
#include "4-0�� ������ ǥ�����.c"
#include "5-0�� ���� �Ǽ� �ڷ���.c"
#include "5-1�� �ڷ��� ��ȯ.c"
#include "5-2�� �ƽ�Ű �ڵ�.c"
#include "5-3�� ���.c"
#include "6�� scanf�Լ��� printf�Լ�.c"
#include "7-0�� while��.c"
#include "7-1�� do while��.c"
#include "7-2�� for��.c"
#include "8-0�� if��.c"
#include "8-1�� continue�� break��.c"
#include "8-2�� switch��.c"
#include "9-0�� �Լ� �����Լ�.c"
#include "9-1�� �����Լ� static�Լ�.c"
#include "9-2�� ����Լ�.c"
#include "10�� ���� ���α׷���2.c"
#include "11-0�� �迭.c"
#include "11-1�� ���ڿ�.c"
#include "12�� ������.c"
#include "13-0�� �����Ϳ� �迭.c"
#include "13-1�� �����Ϳ� ���ڿ�.c"
#include "13-2�� �����͹迭.c"
#include "14-0�� �����Ϳ� �Լ�.c"
#include "15�� ���� ���α׷���.c"
#include "16�� ������ �迭.c"
#include "17�� �������� ������.c"
#include "18�� ������ �迭�� ������.c"
#include "19�� �Լ� �����Ϳ� void������.c"
#include "20�� ���� ���α׷���3.c"
#include "21-0�� ���� ���� ����� ���Լ�.c"
#include "21-1�� ���ڿ� ���� ����� �Լ�.c"
#include "21-2�� ����� ����.c"
#include "21-3�� ���ڿ� �����Լ�.c"
#include "22-0�� ����ü.c"
#include "22-1�� ����ü �迭.c"
#include "22-2�� ����ü ������.c"
#include "23-0�� ����ü�� typedef ����.c"
#include "23-1�� ����ü �Լ�.c"
#include "23-2�� ����ü.c"
#include "23-3�� ����ü ������.c"
#include "23-4�� ������.c"
#include "24-0�� ���� �����.c"
#include "26-0�� ��ũ�ο� ����ó����.c"
#include "26-1�� ���Ǻ� ������.c"
#include "26-2�� ��ũ���� �Ű����� ġȯ.c"

int main()
{
	int chooseChapter = 0;

	printf("é���Է�:");

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
		printf("���Է�:");
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
		printf("���Է�:");
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
		printf("���Է�:");
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
		printf("���Է�:");
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
		printf("���Է�:");
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
		printf("���Է�:");
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
			printf("���Է�:");
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
			printf("���Է�:");
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
			printf("���Է�:");
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
			printf("���Է�:");
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

			printf("���Է�:");

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