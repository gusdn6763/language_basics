int main3()
{
	int num1 = 1, num2 = -1, num3 = 10;  //���� ���� �� ����
	double num4 = 0;					 //�Ǽ��� ������
	printf("num3++:%d \n", num3++);		 //num++�� ������ �Ŀ���  10
	printf("++num3:%d \n\n", ++num3);	     //++num�� ������ �Ĺ���  12
	// a+=b   ==  a=a+b		

	//��ȣ ����
	num1 = -num1, num2 = -num2;
	printf("%d %d",num1,num2);

	//  ��������  && -> and   || -> or  ! -> not

	scanf("%d", &num1);
	return 0;
}