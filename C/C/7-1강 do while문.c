int main71()
{
	int result=0, num1 = 0;
	do
	{
		result += num1;
		num1 += 2;
	} while (num1 <= 100);
	printf("%d",result);
	return 0;
}