
/*
int putchar(int c);					 // ����� ���޵� ���������� (stdout�� �Ҹ��� ��Ʈ������ ����) ����ͷ� ���
int fputc(int c,file *stream);		 // ������ ������� ��Ʈ���� ���� �Ҽ� ����. ���Ͽ� ���
*/


/*
int getchar(void);			 // (stdin�̶� �Ҹ��� ǥ�� ��Ʈ�����κ��� ���ڿ�)Ű���� ���� ����
int fgetc(file* stream);	 // �Է¹��� ��Ʈ���� ���� �� ������. ������ ���ڰ� �Է¹���
*/

#include<stdio.h>
/*
int main21()
{
	int ch1, ch2;
	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);


	return 0;
}
*/


int main21()
{
	int ch1;
	while (1)
	{
		
		ch1 = getchar();
		putchar(ch1);
		if (ch1 == EOF)
		{
			break;
		}
	}

	return 0;
}