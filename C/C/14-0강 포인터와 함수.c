/*
int simple(int num)
{
	num += 1;
	return num;
}
int main14()
{
	int age = 13;
	simple(age);   //age에 저장된 값이 전달되는것이 아닌 매개변수(서로 연결시기는 수)에 복사되는것
	printf("%d %d", age, simple(age));
	return 0;
}
*/

				//함수에 주소값을 전달 받음 ->주소값안에 있는 데이터도 받음  ++주소위치 변경
int arrpoint(int*point)
{
	int i = 0;
	for (; i < 3; i++)
	{
		printf("주소값 변경전:%d %p\n", point[i], &point[i]);
	}
	point++;
	for (int i = 0; i < 3; i++)
	{
		printf("주소값 변경후:%d %p\n",point[i],&point[i] );
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
int arrpoint(int*point)		//주소값 안의 데이터만 변경 -->  함수안에서만 이루어진것이 아닌 메모리 위치에서 변경이 이루어 졌으니 값이 변경됨
{
	int i = 0;
	for (; i < 3; i++)
	{
		printf("주소값안의 데이터 변경전:%d %p\n", point[i], &point[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		point[i]++;
		printf("주소값안의 데이터 변경후:%d %p\n", point[i], &point[i]);
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