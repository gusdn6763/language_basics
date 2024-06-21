int main7()
{
	/*
	int num1 = 0;
	while (num1 < 3)
	{
		printf("%d  ",num1);
		num1++;
	}
	return 0;
	*/


	/*   //巩力1
	int num;
	scanf("%d", &num);
	while (num>0)
	{
		printf("Hello World!\n");
		num--;

	}
	return 0;
	*/

	/*   //巩力2
	int num1, num2 = 1;
	scanf("%d", &num1);
	while (num2 <= num1)
	{
		printf("%d\n", 3 * num2);
		num2++;
	}
	return 0;
	*/

	/*    //巩力3
	int num1 = 1, result = 0;
	while (num1 != 0)
	{
		scanf("%d", &num1);
		result += num1;
	}
	printf("%d", result);
	return 0;
	*/

	/*     //巩力4
	int num1 = 0, num2 = 9;
	scanf("%d",&num1);
	while (num2 > 0)
	{
		printf("%dx%d=%d",num1,num2,num1*num2);
		num2--;
	}
	*/

	/*    //巩力5
	int num1, num2,result=0,save1=0;
	scanf("%d", &num1);
	while (num1 > 0)
	{
		save1 = num1;
		scanf("%d", &num2);
		result += num2;
		num1--;
	}
	printf("%f", (double)result / save1);
	return 0;
	*/

	int num1 = 0, num2 = 0;
	while (num2 < 5)
	{
		num1 = num2;
		while (num1 > 0)
		{
			printf("o");
			num1--;
		}
		printf("*\n");
		num2++;
	}

	return 0;
}
