int num1;		//���������� 0���� �ʱ�ȭ
void simple(void)
{
	static int num2 = 0;    //�����׷� ������� �޸𸮿� ����
	int num3 = 0;
	num2++;
	num3++;
	printf("static:%d  %d\n", num2, num3);
}

int main91()
{

	/*
	//register int num=0;      CPU�� ���� -> �߿��ϰ� ����� �����ϴ°��
	for (int i = 0; i < 3; i++)
	{
		simple();
	}
	*/
	return 0;
}