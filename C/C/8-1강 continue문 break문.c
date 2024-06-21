int main81()
{
	/*
	int num1 = 2, num2 = 1;
	for (;num1<10;num1+=2)
	{
		num2 = 1;
		for (; num1 >= num2;)
		{
			printf("%dx%d=%d\n", num1, num2, num1 * num2);
			num2++;
		}
	}
	return 0;
	*/

	int i = 1, j;
	for (; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		for (j = 1; j < 10; j++)
		{
			if (i < j)
			{
				break;
			}
			printf("%dx%d=%d\n", i, j, i * j);
		}
	}
	return 0;
}