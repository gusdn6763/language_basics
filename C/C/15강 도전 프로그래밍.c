/*
int hole(int *arr)
{
	printf("\nȦ�����:");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1 || arr[i] == 1)
		{
			printf("%d, ", arr[i]);
		}
	}
	return 0;
}

int jax(int *arr)
{
	printf("\n¦�����");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d, ", arr[i]);
		}
	}
	return 0;
}


int main15()           //����1
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("�Է�:");
		scanf("%d", &arr[i]);
		if (arr[i] <= 0)
		{
			printf("�ٽ��Է�:");
			scanf("%d", &arr[i]);
		}
	}
	hole(arr);
	jax(arr);
	return 0;
}
*/

//����2 �� ǰ
//�迭�� �̵������� �� ����� ������ ����


// ����3, 5
void Sort(int *parem,int count)
{
	for (int i = 0; i < count-1; i++)
	{
		for (int j = 0;j< count - 1 - i; j++)
		{
			if (parem[j] > parem[j + 1])
			{
				int tmp = parem[j];
				parem[j] = parem[j + 1];
				parem[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d, ",parem[i]);
	}
}

int main15()        
{
	int num, arr1[10], arr2[10], i = 0, j = 0, k = 0;
	for (i=0; i < 10; i++)
	{
		printf("�Է�:");
		scanf("%d", &num);
		if (num <= 0)
		{
			printf("�ٽ��Է�:");
			scanf("%d", &num);
		}
		if (num % 2 == 1 || arr1[i] == 1)
		{
			arr1[k] = num;
			k++;
		}
		else
		{
			arr2[j] = num;
			j++;
		}
	}
	printf("�迭 ���");
	Sort(arr1, k);
	Sort(arr2, j);

	return 0;
}

/*
int DesSort(int* arr,int size)
{
	int i, j,temp;
	for (i=0;i<size-1;i++)
	{
		for (j=0;j<(size-1)-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 0;
}
int main15()
{
	int arr[7], i;
	for (i = 0; i < 7; i++)
	{
		printf("�Է�:");
		scanf("%d", &arr[i]);
	}
	DesSort(arr,sizeof(arr)/sizeof(int));
	for (i = 0; i < 7; i++)
	{
		printf(" %d", arr[i]);
	}
	return 0;
}
*/

