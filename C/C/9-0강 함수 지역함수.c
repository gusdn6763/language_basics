int ADD(int num1,int num2)
{
	return num1 + num2;
}


int big(int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			return num1;
		}
		else if (num3 > num1)
		{
			return num3;
		}
	}
	else if (num2 > num1)
	{
		if (num2 > num3)
		{
			return num2;
		}
		else
		{
			return num3;
		}
	}
	else if (num3 > num2)
	{
		if (num3 > num1)
		{
			return num3;
		}
		else
			return num1;
	}
}

int small(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		if (num1 < num3)
		{
			return num1;
		}
		else
		{
			return num3;
		}
	}
	else if (num2 < num1)
	{
		if (num2 < num3)
		{
			return num2;
		}
		else
		{
			return num3;
		}
	}
	else if (num3 < num2)
	{
		if (num3 < num1)
		{
			return num3;
		}
		else
			return num1;
	}
}


int main9()
{


	/*
	int num;
	num = printf("1234567\n");
	printf("%d %d %d", num, sizeof(num),ADD(3,4));
	*/

	/*		//문제1
	int num1, num2, num3;
		scanf("%d %d %d", &num1, &num2, &num3);
		printf("가장큰수:%d\n가장작은수:%d", big(num1, num2, num3), small(num1, num2, num3));
	*/

	/*

	int num;
	scanf("%d", &num);
	if (num == 0)
	{
		int num = 10;  //if문 안에서만 num값10 -> 선언된 함수내에서만 초기화
	}
	printf("%d", num);

	*/
		return 0;
}