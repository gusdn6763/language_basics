int main13()			//배열또한 메모리주소값을 갖지만 주소값 변경이 불가능하다 ->포인터
{
	/*
	int arr[3] = { 2,4,8 };
	int*ptr = arr;
	printf("%p\n", arr[0]);  
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	*arr += 100;	//arr[0] += 100;
	printf("%d\n", arr[0]);
	printf("%d\n", ptr[0]);		//포인터도 배열로 사용가능
	printf("%d\n", *ptr);
	ptr += 1;	//ptr++;				//배열은 메모리 순서대로 값이 저장되니 메모리 공간 위치를 변경하면 [0]에서 [1]로 변경 int형이니 4만큼 이동
	printf("%d\n", *ptr);  //  2 ->4  //arr[0] -> arr[1]
	printf("%d\n", *(ptr+1));  //arr[1+1]
	*/

	
	int arr[] = { 1,2,3,4,5 };
	int*ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
		*ptr+=2;  //  * -> 주소값의 값 변경 ->arr[0]
		ptr++;   //포인터 값은 arr[0]에 저장 -> int형이라 4바이트씩 이동 ->배열은 순서대로 값저장 -> arr[0] ->arr[1]의 주소값으로 이동zx
		printf("%d\n", arr[i]);
	}
	
	/*
	int arr[] = { 1,2,3,4,5 };
	int*ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("%d", arr[i]);
	}
	*/
	return 0;
}