#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void removebsm(char arr[])
{
	int save = strlen(arr);
	arr[save-1] = 0;
}


int main213()
{
	/*
	char arr[100];
	printf("���Է�:");
	ClearLineFromReadBuffer();     // 21,2 �Է� �� �Է¹��ۿ� \n ����
	fgets(arr, sizeof(arr), stdin);
	printf("���ڿ��� ����:%d\n",strlen(arr));   //���ڿ��� ���̰� ��ȯ ->�Է°�+\n�� 
	removebsm(arr);
	printf("���ڿ��� ����:%d", strlen(arr));
	*/

	/*
	char str1[10] = "abcde";
	char str2[10];
	char str3[3];

	strcpy(str2, str1);    //str1 ���ڿ��� str2 �� ����
	puts(str2);

	strncpy(str3, str1, sizeof(str3));  //str1�� ���ڿ��� str3 �� ũ�⸸ŭ ����
	puts(str3);      //�ι��ڰ� ���Ե��� �ʾ� �̻��� �������� ���

	strncpy(str3, str1, sizeof(str3)-1);   //str3 ũ���� -1��ŭ ���� 
	str3[sizeof(str3) - 1] = 0;   //�� ������ ������� �������� �ι��� ����
	puts(str3);
	*/


	/*
	char str1[10] = "abcd";
	char str2[10] = "efghi";
	char str3[10] = "12345";
	char str4[10] = "67890";

	strcat(str1, str2);     //str1 �ڿ� str2�� �����̱�, str1 �ι��ڿ� ù����
	puts(str1);

	strncat(str3, str4, 4);      //str3 �ڿ� str4�� 4��ŭ �����̱�
	puts(str3);
	*/
	return 0;
}
