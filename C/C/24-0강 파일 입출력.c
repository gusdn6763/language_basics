#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//  C:\Users\sejong\source\repos\Project1\Project1
// /r 읽기   /w 쓰기   /a 파일끝 덧붙이기   /r+ /w+ /a+ 기능추가   /t 운영체제 개행 자동 변환
int main24()
{
	/*
	FILE * fp=fopen("data.txt","wt");                       
	if (fp == NULL)
	{
		puts("오픈실패");
		return -1;
	}
	fputc('1', fp);
	fputs("asdsad", fp);
	fclose(fp);
	*/

	/*
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	while (fgetc(fp) != EOF)
	{
		printf("%c \n", fgetc(fp));		
	}
	fclose(fp);
	*/

	FILE* a123 = fopen("123.txt", "rt");
	FILE* b456 = fopen("456.txt", "wt");
	int c;

	if (a123 == NULL || b456 == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	while ((c=fgetc(a123)) != EOF)
	{
		fputc(c,b456);
	}

	if (feof(a123) != 0)
	{
		printf("복사 성공");
	}
	else
	{
		printf("복사 실패");
	}

	fclose(a123);
	fclose(b456);



	/*
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일복사 완료");
				break;
			}
			else
				puts("파일복사 실패");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
	*/
	return 0;
}