void bubble(int arr[]);




int main132()
{
	int arr1[3] = { 1,2,3 };
	bubble(arr1);

		int num1 = 10, num2 = 20, num3 = 30;
		int* arr[3] = { &num1, &num2, &num3 };   //������ �޸𸮰����� �ּҰ�

		printf("%d  %p\n", *arr[0],&arr[0]);  //�޸� �����ȿ� �ִ� �����Ͱ�  // �޸� ������ �ּҰ�
		printf("%d \n", *arr[1]);
		printf("%d \n", *arr[2]);
	const char*strarr[3] = {"ABC","DEF","GHI"};
		return 0;
}

void bubble(int arr[])
{

}