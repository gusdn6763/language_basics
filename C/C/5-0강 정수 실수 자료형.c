int main5()
{
	char num1;  //1바이트 크기 -128 ~ +127
	short num2; //2바이트 크기 -32,768  ~  +32,767
	int num3;   //4바이트 크기 -2,147,483,648 ~
	printf("char바이트크기:%zd\n", sizeof(num1));
	printf("short바이트크기:%zd\n",sizeof(num2));
	printf("int바이트 크기:%zd\n", sizeof(num3));
	printf("char+short:%zd",sizeof(num1 + num2));
	//int가 가장 연산하기에 적합하기에 값을 더하면 int로 바꾸어서 연산한다.
	//unsigned  ->+- 기준사라짐-> 2배수칸큼  표현가능

	//float num4; //실수형 4바이트 크기
	double num5; //실수형 8바이트 크기
	printf("반지름입력:");
	scanf("%lf", &num5);
	num5 = num5 * num5 * 3.14;
	printf("넓이:%f", num5);

	return 0;
}