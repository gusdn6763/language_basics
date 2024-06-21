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
	printf("값입력:");
	ClearLineFromReadBuffer();     // 21,2 입력 후 입력버퍼에 \n 존재
	fgets(arr, sizeof(arr), stdin);
	printf("문자열의 길이:%d\n",strlen(arr));   //문자열의 길이값 반환 ->입력값+\n값 
	removebsm(arr);
	printf("문자열의 길이:%d", strlen(arr));
	*/

	/*
	char str1[10] = "abcde";
	char str2[10];
	char str3[3];

	strcpy(str2, str1);    //str1 문자열을 str2 에 복사
	puts(str2);

	strncpy(str3, str1, sizeof(str3));  //str1의 문자열을 str3 의 크기만큼 복사
	puts(str3);      //널문자가 포함되지 않아 이상한 영역까지 출력

	strncpy(str3, str1, sizeof(str3)-1);   //str3 크기의 -1만큼 복사 
	str3[sizeof(str3) - 1] = 0;   //맨 뒤쪽의 복사되지 않은곳의 널문자 삽입
	puts(str3);
	*/


	/*
	char str1[10] = "abcd";
	char str2[10] = "efghi";
	char str3[10] = "12345";
	char str4[10] = "67890";

	strcat(str1, str2);     //str1 뒤에 str2를 덧붙이기, str1 널문자에 첫붙임
	puts(str1);

	strncat(str3, str4, 4);      //str3 뒤에 str4를 4만큼 덧붙이기
	puts(str3);
	*/
	return 0;
}
