int main3()
{
	int num1 = 1, num2 = -1, num3 = 10;  //변수 선언 및 저장
	double num4 = 0;					 //실수형 연산자
	printf("num3++:%d \n", num3++);		 //num++는 선문장 후연산  10
	printf("++num3:%d \n\n", ++num3);	     //++num는 선연산 후문장  12
	// a+=b   ==  a=a+b		

	//부호 변경
	num1 = -num1, num2 = -num2;
	printf("%d %d",num1,num2);

	//  논리연산자  && -> and   || -> or  ! -> not

	scanf("%d", &num1);
	return 0;
}