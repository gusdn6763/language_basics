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
	printf("num1 , num2 : %p %p num의 주소값\n", &num1, &num2);
	printf("ptr1 , ptr2 : %p %p 포인터의 주소값\n\n", &ptr1, &ptr2);

	Swap(&ptr1, &ptr2);
	printf("num1  , num2 : %d  %d\n", num1, num2);
	printf("*ptr1 , *ptr2 : %d %d\n", *ptr1, *ptr2);
	printf("num1 , num2 : %p %p num의 주소값\n", &num1, &num2);
	printf("ptr1 , ptr2 : %p %p 포인터의 주소값\n\n", &ptr1, &ptr2);

	
		//ex) ptr의 포인터의 주소값은 변하지 않고 ptr안에 저장되어 있는 num의 주소위치가 바뀜
	
	return 0;
}

