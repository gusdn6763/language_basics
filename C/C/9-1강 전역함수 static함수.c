int num1;		//전역변수는 0으로 초기화
void simple(void)
{
	static int num2 = 0;    //프러그램 종료까지 메모리에 저장
	int num3 = 0;
	num2++;
	num3++;
	printf("static:%d  %d\n", num2, num3);
}

int main91()
{

	/*
	//register int num=0;      CPU에 저장 -> 중요하고 빈번이 접근하는경우
	for (int i = 0; i < 3; i++)
	{
		simple();
	}
	*/
	return 0;
}