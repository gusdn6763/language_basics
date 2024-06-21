
int gugu(int num1,int num2);
int jungsu(int num1);

int test2()       //문제2
{
	int num1, num2;
	printf( "값입력:");
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

int test3()   //문제3
{
	int num1, num2, i;
	printf("최대공약수 2개입력:");
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


int test4(void)       //문제4 ?
{
	int cream = 500, shimp = 700, co = 400;
	int money, save, i, j, k;
	printf("현재 금액 : ");
	scanf_s("%d", &money);
	for (;;)
	{
		if (money < 1600)
		{
			printf("금액이 너무 작습니다\n다시입력:");
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
					printf("크림:%d개, 새우:%d개, 콜라:%d개, 금액,:%d, 남은잔돈:%d\n", i, j, k, (i * cream) + (j * shimp) + (co * k),save);
				}
			}
		}
	}
	return 0;
}
int test5()         //문제5
{
	int i,j, count, sosu = 2;
	printf("소수출력 할 갯수:");
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

int test6()       //문제6
{
	int num1 = 0, num2 = 0 , num3;
	printf("초입력:");
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
int test8()       //문제8
{
	int num;
	printf("정수입력:");
	scanf("%d", &num);
	jungsu(num);
	printf("2의제곱%d \n", jungsu(num));
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