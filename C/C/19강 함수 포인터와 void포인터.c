void add(int a, int b)
{
	int add = a + b;
	printf("%d+%d=%d", a, b, add);
}

int choose(int n1, int n2, int (*cmp)(int num1, int num2)) 
{
	return cmp(n1, n2);
}
int match(int num1,int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else if (num2 < num1)
	{
		return num2;
	}
}

int main19()
{
	/*
	int num1 = 10, num2 = 20;
	int (*mainp)(int, int)=add;
	mainp(num1, num2);
	*/

	int num1, num2;
	printf("값입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d 와 %d 중에 큰값은 %d", num1, num2, choose(num1,num2,match));

	return 0;
}


/*
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if(age1>age2)
		return age1;
	else if(age1<age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if(age1<age2)
		return age1;
	else if(age1>age2)
		return age2;
	else
		return 0;
}

int main(void)
{
	int age1=20;
	int age2=30;
	int first;

	printf("입장순서 1 \n");
	first=WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);

	printf("입장순서 2 \n");
	first=WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);
	return 0;
}*/