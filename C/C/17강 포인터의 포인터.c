/*

int main17()
{
	int num = 10;
	int *ptr1 = &num;
	int** ptr2 = &ptr1;
	printf("%p\n", &num);
	printf("%p   %d \n\n", ptr1,ptr1);

	printf("%p\n", &ptr1);
	printf("%p\n\n", ptr2);

	printf("%p\n", &ptr2);
	return 0;
}






*/

void Swap(int** dp1, int** dp2) {
	int* temp = *dp1;
	printf("dp1:%p \n*dp1:%p \n**dp1:%d \n\n", dp1, *dp1,**dp1);
	*dp1 = *dp2;
	*dp2 = temp;
}

int main17()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("num1  , num2 : %d  %d\n", num1, num2);
	printf("*ptr1 , *ptr2 : %d %d\n", *ptr1, *ptr2);
	printf("num1 , num2 : %p %p num�� �ּҰ�\n", &num1, &num2);
	printf("ptr1 , ptr2 : %p %p �������� �ּҰ�\n\n", &ptr1, &ptr2);

	Swap(&ptr1, &ptr2);
	printf("num1  , num2 : %d  %d\n", num1, num2);
	printf("*ptr1 , *ptr2 : %d %d\n", *ptr1, *ptr2);
	printf("num1 , num2 : %p %p num�� �ּҰ�\n", &num1, &num2);
	printf("ptr1 , ptr2 : %p %p �������� �ּҰ�\n\n", &ptr1, &ptr2);

	
		//ex) ptr�� �������� �ּҰ��� ������ �ʰ� ptr�ȿ� ����Ǿ� �ִ� num�� �ּ���ġ�� �ٲ�
	
	return 0;
}

