#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



struct worker
{
	char name[20];
	char num[20];
} man;

struct test
{
	int a;
	char b[10];
};

int main22()
{
	struct test test = { 1,"123" };


	printf("��ȣ �Է�: ");
	scanf("%s", man.num);

	printf("�ֹ�:%s", man.num);
	return 0;
}