#include<stdio.h>
void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}

int main212()
{
	fflush(stdin);   //�Է¹��� ����� �Ұ�  ->���� ��¹��۸� ��������� ���� �Լ����� �̷��� ���Ұ�
	fflush(stdout);  //��¹��� �����
	char arr[7];
	ClearLineFromReadBuffer();    //0������ 21,2 ���� �Է� �� \n�� �Է� ���ۿ� �ֳ���,  �Է¹��ۿ� �ִ� \n�� ã�������� �����
	fgets(arr, sizeof(arr), stdin);
	printf("Read: %s \n", arr);

	return 0;
}