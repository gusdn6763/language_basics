/*
int simple(int num)
{
	num += 1;
	return num;
}
int main14()
{
	int age = 13;
	simple(age);   //age�� ����� ���� ���޵Ǵ°��� �ƴ� �Ű�����(���� ����ñ�� ��)�� ����Ǵ°�
	printf("%d %d", age, simple(age));
	return 0;
}
*/

				//�Լ��� �ּҰ��� ���� ���� ->�ּҰ��ȿ� �ִ� �����͵� ����  ++�ּ���ġ ����
int arrpoint(int*point)
{
	int i = 0;
	for (; i < 3; i++)
	{
		printf("�ּҰ� ������:%d %p\n", point[i], &point[i]);
	}
	point++;
	for (int i = 0; i < 3; i++)
	{
		printf("�ּҰ� ������:%d %p\n",point[i],&point[i] );
	}
	return *point;
}
int main14()
{
	int arr[] = { 1,2,3,4 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d %p\n",arr[i],&arr[i]);
	}
	arrpoint(arr);
	return 0;
}


/*
int swap(int *ptr3, int *ptr4)
{
	int temp = *ptr3;
	*ptr3 = *ptr4;
	*ptr4 = temp;
	return 0;
}


int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1, *ptr2 = &num2;
	printf("%d %d", *ptr1, *ptr2);
	swap(&num1, &num2);
	printf("\n%d %d", *ptr1, *ptr2);
	return 0;
}
*/

/*
int arrpoint(int*point)		//�ּҰ� ���� �����͸� ���� -->  �Լ��ȿ����� �̷�������� �ƴ� �޸� ��ġ���� ������ �̷�� ������ ���� �����
{
	int i = 0;
	for (; i < 3; i++)
	{
		printf("�ּҰ����� ������ ������:%d %p\n", point[i], &point[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		point[i]++;
		printf("�ּҰ����� ������ ������:%d %p\n", point[i], &point[i]);
	}
	return *point;
}
int main14()
{
	int arr[] = { 1,2,3 };
	for (int i = 0; i < 3; i++)
	{
		printf("%d %p\n", arr[i], &arr[i]);
	}
	arrpoint(arr);
	for (int i = 0; i < 3; i++)
	{
		printf("%d %p\n", arr[i], &arr[i]);
	}
	return 0;
}

*/