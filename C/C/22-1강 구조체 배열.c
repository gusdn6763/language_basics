

struct point
{
	int arr1;
	int arr2;
}arr[5];



int main221()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%dÀÇ ÁÂÇ¥ ÀÔ·Â:", i + 1);
		scanf("%d %d", &arr[i].arr1, &arr[i].arr2);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d %d\n", arr[i].arr1, arr[i].arr2);
	}

	return 0;
}