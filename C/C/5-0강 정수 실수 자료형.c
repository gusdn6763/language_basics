int main5()
{
	char num1;  //1����Ʈ ũ�� -128 ~ +127
	short num2; //2����Ʈ ũ�� -32,768  ~  +32,767
	int num3;   //4����Ʈ ũ�� -2,147,483,648 ~
	printf("char����Ʈũ��:%zd\n", sizeof(num1));
	printf("short����Ʈũ��:%zd\n",sizeof(num2));
	printf("int����Ʈ ũ��:%zd\n", sizeof(num3));
	printf("char+short:%zd",sizeof(num1 + num2));
	//int�� ���� �����ϱ⿡ �����ϱ⿡ ���� ���ϸ� int�� �ٲپ �����Ѵ�.
	//unsigned  ->+- ���ػ����-> 2���ĭŭ  ǥ������

	//float num4; //�Ǽ��� 4����Ʈ ũ��
	double num5; //�Ǽ��� 8����Ʈ ũ��
	printf("�������Է�:");
	scanf("%lf", &num5);
	num5 = num5 * num5 * 3.14;
	printf("����:%f", num5);

	return 0;
}