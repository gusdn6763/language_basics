int main72()
{
	int num1 = 0, num2 = 0, total = 0;
	printf("���Է�");
	scanf("%d %d", &num1, &num2);
	for (; num1 > num2;)
	{
		printf("�ι�° ���� �� Ŀ���մϴ�\n���Է�:");
		scanf("%d %d", &num1, &num2);
	}
	for (; num2 >= num1; num1++)
	{
		total += num1;
	}
	printf("%d", total);
	return 0;
}