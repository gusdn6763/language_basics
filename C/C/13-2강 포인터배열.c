void bubble(int arr[]);




int main132()
{
	int arr1[3] = { 1,2,3 };
	bubble(arr1);

		int num1 = 10, num2 = 20, num3 = 30;
		int* arr[3] = { &num1, &num2, &num3 };   //각각의 메모리공간의 주소값

		printf("%d  %p\n", *arr[0],&arr[0]);  //메모리 공간안에 있는 데이터값  // 메모리 공간의 주소값
		printf("%d \n", *arr[1]);
		printf("%d \n", *arr[2]);
	const char*strarr[3] = {"ABC","DEF","GHI"};
		return 0;
}

void bubble(int arr[])
{

}