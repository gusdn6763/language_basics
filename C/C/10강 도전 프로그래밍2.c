
int gugu(int num1,int num2);
int jungsu(int num1);

int test2()       //����2
{
	int num1, num2;
	printf( "���Է�:");
	scanf_s("%d %d", &num1, &num2);
	gugu(num1, num2);
	return 0;
}
int gugu(int num1,int num2)	
{
	if (num1 > num2)
	{
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	num1 > num2 ? num1 : num2;
	for (; num1 <= num2;num1++)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%dx%d=%d\n", num1, i, num1*i);
		}
	}
	return 0;
}

int test3()   //����3
{
	int num1, num2, i;
	printf("�ִ����� 2���Է�:");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}

	for (i=num2-1;i>0;i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}


int test4(void)       //����4 ?
{
	int cream = 500, shimp = 700, co = 400;
	int money, save, i, j, k;
	printf("���� �ݾ� : ");
	scanf_s("%d", &money);
	for (;;)
	{
		if (money < 1600)
		{
			printf("�ݾ��� �ʹ� �۽��ϴ�\n�ٽ��Է�:");
			scanf("%d", &money);
		}
		else
		{
			break;
		}
	}
	save = money % 100;
	money = money / 100 * 100;
	for (i=0;money/cream>i;i++)
	{
		for (j = 0; money / shimp > j; j++)
		{
			for (k = 0; money / co > k; k++)
			{
				if ((i*cream)+(j*shimp)+(co*k) == money)
				{
					printf("ũ��:%d��, ����:%d��, �ݶ�:%d��, �ݾ�,:%d, �����ܵ�:%d\n", i, j, k, (i * cream) + (j * shimp) + (co * k),save);
				}
			}
		}
	}
	return 0;
}
int test5()         //����5
{
	int i,j, count, sosu = 2;
	printf("�Ҽ���� �� ����:");
	scanf_s("%d", &count);
	for (;count!=0;)
	{
		j = 0;
		for (i=1;i<=sosu;i++)
		{
			if (sosu%i==0)  //3 % 1
			{
				j++;
			}
		}
		if (j == 2)
		{
			printf("%d, ", sosu);
			count--;
		}
		sosu++;
	}
	return 0;
}

int test6()       //����6
{
	int num1 = 0, num2 = 0 , num3;
	printf("���Է�:");
	scanf("%d", &num3);
	for (; num3 >= 60; num3 -= 60)
	{
		num2++;
		if (num2 >= 60)
		{
			for (; num2 >= 60; num2 -=60)
			{
				num1++;
			}
		}

	}
	printf("H:%d m:%d s:%d", num1, num2, num3);
	return 0;
}
int test8()       //����8
{
	int num;
	printf("�����Է�:");
	scanf("%d", &num);
	jungsu(num);
	printf("2������%d \n", jungsu(num));
	return 0;
}
int jungsu(int num)
{
	if (num <= 0)
	{
		return 1;
	}
	else
		return 2 * jungsu(num - 1);



}