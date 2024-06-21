
/*
int putchar(int c);					 // 여기로 전달된 문자정보를 (stdout라 불리는 스트림으로 전송) 모니터로 출력
int fputc(int c,file *stream);		 // 파일을 대상으로 스트림을 지정 할수 있음. 파일에 출력
*/


/*
int getchar(void);			 // (stdin이라 불리는 표준 스트림으로부터 문자열)키보드 값을 받음
int fgetc(file* stream);	 // 입력받을 스트림을 지정 할 수있음. 파일의 문자값 입력받음
*/

#include<stdio.h>
/*
int main21()
{
	int ch1, ch2;
	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);


	return 0;
}
*/


int main21()
{
	int ch1;
	while (1)
	{
		
		ch1 = getchar();
		putchar(ch1);
		if (ch1 == EOF)
		{
			break;
		}
	}

	return 0;
}