#include <stdio.h>


/*
int puts(char c);					  //���ڿ� ���
int fputs(char c, file* stream);    //���ڿ� ���, ��Ʈ�� ����,\n ������ �̷������ ����

int gets(char c);						//���ڿ� ���
int fgets(char[c],int n,file * stream); //n�� ũ�⸸ŭ, ���ڿ� ���,  ��Ʈ�� ����,  ���鵵 �ް� \n�� ���ڿ��� ����,���ڿ� ũ�� �ʰ��� �Ұ�� ���� �Լ� ����ҽ� �ʰ��� ���ڿ� ���
*/

/*
int main211(void)
{
	char str[] = "Simple String";

	printf("1. puts test ------ \n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple String", stdout); printf("\n");

	printf("3. end of main ----\n");
	return 0;
}

*/

int main211(void)
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}