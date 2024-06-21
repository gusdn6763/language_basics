#include<stdio.h>
void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}

int main212()
{
	fflush(stdin);   //입력버퍼 지우기 불가  ->원래 출력버퍼를 지우기위해 만든 함수여서 이렇게 사용불가
	fflush(stdout);  //출력버퍼 지우기
	char arr[7];
	ClearLineFromReadBuffer();    //0강에서 21,2 값을 입력 후 \n이 입력 버퍼에 있나봄,  입력버퍼에 있는 \n을 찾을때까지 지우기
	fgets(arr, sizeof(arr), stdin);
	printf("Read: %s \n", arr);

	return 0;
}