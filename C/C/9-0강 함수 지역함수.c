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

	/*		//����1
	int num1, num2, num3;
		scanf("%d %d %d", &num1, &num2, &num3);
		printf("����ū��:%d\n����������:%d", big(num1, num2, num3), small(num1, num2, num3));
	*/

	/*

	int num;
	scanf("%d", &num);
	if (num == 0)
	{
		int num = 10;  //if�� �ȿ����� num��10 -> ����� �Լ��������� �ʱ�ȭ
	}
	printf("%d", num);

	*/
		return 0;
}