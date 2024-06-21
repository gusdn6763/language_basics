int main72()
{
	int num1 = 0, num2 = 0, total = 0;
	printf("값입력");
	scanf("%d %d", &num1, &num2);
	for (; num1 > num2;)
	{
		printf("두번째 값이 더 커야합니다\n값입력:");
		scanf("%d %d", &num1, &num2);
	}
	for (; num2 >= num1; num1++)
	{
		total += num1;
	}
	printf("%d", total);
	return 0;
}