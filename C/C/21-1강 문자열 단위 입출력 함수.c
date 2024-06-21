#include <stdio.h>


/*
int puts(char c);					  //문자열 출력
int fputs(char c, file* stream);    //문자열 출력, 스트림 지정,\n 개행이 이루어지지 않음

int gets(char c);						//문자열 출력
int fgets(char[c],int n,file * stream); //n의 크기만큼, 문자열 출력,  스트림 지정,  공백도 받고 \n도 문자열로 받음,문자열 크기 초과시 할경우 다음 함수 출력할시 초과한 문자열 출력
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