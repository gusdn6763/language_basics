int main13()			//�迭���� �޸��ּҰ��� ������ �ּҰ� ������ �Ұ����ϴ� ->������
{
	/*
	int arr[3] = { 2,4,8 };
	int*ptr = arr;
	printf("%p\n", arr[0]);  
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	*arr += 100;	//arr[0] += 100;
	printf("%d\n", arr[0]);
	printf("%d\n", ptr[0]);		//�����͵� �迭�� ��밡��
	printf("%d\n", *ptr);
	ptr += 1;	//ptr++;				//�迭�� �޸� ������� ���� ����Ǵ� �޸� ���� ��ġ�� �����ϸ� [0]���� [1]�� ���� int���̴� 4��ŭ �̵�
	printf("%d\n", *ptr);  //  2 ->4  //arr[0] -> arr[1]
	printf("%d\n", *(ptr+1));  //arr[1+1]
	*/

	
	int arr[] = { 1,2,3,4,5 };
	int*ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
		*ptr+=2;  //  * -> �ּҰ��� �� ���� ->arr[0]
		ptr++;   //������ ���� arr[0]�� ���� -> int���̶� 4����Ʈ�� �̵� ->�迭�� ������� ������ -> arr[0] ->arr[1]�� �ּҰ����� �̵�zx
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