int main131()
{
	char str1[] = "My String";   //���� ������ ���ڹ迭 ���� �� ����
	const char * str2 = "Your String";
	printf("%s %s \n", str1, str2);

	str2 = "Our String";     // ����Ű�� ��� ����  ->Our String��� ���ڿ��� �ּҰ����� ����
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	//str2[0] = 'X';      //�ּҾȿ� �ִ� �����Ͱ� ���� �Ұ���
	printf("%s %s \n", str1, str2);
	return 0;
}