int main8()
{
	/*  //���� ������

	int num1, result;
	printf("���Է�:");
	scanf("%d ", &num1);
	result = num1 > num1*-1 ? num1 : num1*-1;
	printf("%d",  num1);

	*/

	/*             //����1
	int i = 1;
	for (; i < 100;i++)
	{
		if (i%7==0 || i%9==0)
		{
			printf("%d ", i);
		}
	}
	*/

	/*       //����2
	int num1, num2, result, result1;
	scanf("%d %d", &num1, &num2);
	result = num1 > num2 ? num1 : num2;
	result1 = num1 < num2 ? num1 : num2;
	printf("%d-%d=%d", result,result1 ,result - result1);
	*/

	/*       //����4
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		result = num1 - num2;
		printf("%d-%d=%d", num1, num2, result);
	}
	else if (num1 < num2)
	{
		result = num2 - num1;
		printf("%d-%d=%d", num2, num1, result);
	}
	*/

	        //����3
	int num1, num2, num3, result;

	printf("�����Է�:");
	scanf("%d", &num1);
	printf("\n�����Է�:");
	scanf("%d", &num2);
	printf("\n�����Է�:");
	scanf("%d", &num3);
	result = num1 + num2 + num3 / 3;
	if (result >= 90)
	{
		printf("A");
	}
	else if (result >= 80)
	{
		printf("B");
	}
	else if (result >= 70)
	{
		printf("C");
	}
	else if (result >= 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	printf("%d", result);
	

	return 0;
}