int main12()
{
	int*pnum1;
	int num1 = 5, num2 = 6;
	pnum1 = &num1;   //pnum1�� num�� �ּҰ��� ����/-;/p; 
	printf("%p\n", pnum1);
	printf("%p\n", &num1);		////&  �ǿ�����(num1)�� �ּҰ��� ��ȯ(����)
	printf("%d\n\n", num1);
	*pnum1 -= 1;	//�޸𸮰� �ȿ��ִ� ������  *�� �ǹ̴� ������ ����pnum1�� ����Ű�� �޸� �������� ��(( ����num1�� ��))
	printf("%d\n", num1);
	printf("%p\n", pnum1);    //�޸� ��ġ�� ����������
	pnum1 -= 1;		////int���̱� ������ �޸𸮰� 4����Ʈ ���̰� ���� ->�޸� ���� ��ġ�� ����
	printf("%d\n", num1);
	printf("%p\n", pnum1);
	return 0;  //������ �������� -> �޸𸮰��� �����ϱ� ���ؼ�
}