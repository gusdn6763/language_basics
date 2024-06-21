int recursive(int num)
{
	if (num < 0)
	{
		return 0;
	}
	printf("%d", num);
	recursive(num-1);
}


int main92()
{
	int num = 3;
	recursive(num);
	return 0;
}