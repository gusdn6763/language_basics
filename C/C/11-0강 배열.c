int main11()
{
	int arr[5];   // arr[0]  arr[1]	arr[2]	arr[3]	arr[4]
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int sum = 0, small = 0, big = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 입력:", i+1);
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
		if (big < arr[i])
		{
			big = arr[i];
		}
		if (small > arr[i])
		{
			small = arr[i];
		}
	}

	printf("총합%d\n큰값:%d\n작은값:%d", sum, big, small);
	return 0;
}