int test31()
{
	//����1
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
	};
	int temp[4][4];
	int i = 0, j = 0, k = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%d ", arr[j][k]);
			}
			printf("\n");
		}

		printf("\n\n");
		for (k = 0; k < 4; k++)
		{
			for (j = 0; j < 4; j++)
			{
				temp[j][3 - k] = arr[k][j];
			}
		}
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 4; k++)
				arr[j][k] = temp[j][k];
		}

	}
	return 0;
}
int test32()
{



	//��Ǭ���� ->  1.for�� ���ǹ��� i�ǰ��� ���ϴ� i�����θ� �迭�� ǥ�� �Ϸ��� �������� ����   2.����ũ�� ����ũ�� ���� �´µ� �߰��� �󸶸�ŭ ũ�⸦ ��ȭ�Ұ����� ��ȭ���� ���� ->������ ��ã��
	int arr[50][50];
	int len, idx = 0, i, j;
	int s = 0, w = -1, inc = 1, val = 0;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &len);
	idx = len;

	while (1)
	{
		for (i = 0; i < idx; i++) // ���� ���� �׸�
		{
			val++;
			w = w + inc;
			arr[s][w] = val;
		}
		idx = idx - 1;

		if (val == len * len)
			break;

		for (i = 0; i < idx; i++) // ���� ���� �׸�
		{
			val++;
			s = s + inc;
			arr[s][w] = val;
		}
		inc = inc * -1;
	}

	for (i = 0; i < len; i++)  // ������ �迭 ���.
	{
		for (j = 0; j < len; j++)
			printf("%5d", arr[i][j]);
		printf("\n");
	}

	return 0;

	
	

}

#include <stdlib.h>
#include <time.h>

int test34()
{
	int i;
	srand((int)time(NULL));   
	for (i = 0; i < 2; i++)
		printf("�ֻ���%d�� ��: %d \n",i+1, rand()%6+1);
	return 0;
}


int test35()
{
	srand((int)time(NULL));
	int num;
	int win=0, mu=0;

	for (;;)
	{
		printf("����:1 ����:2 ��:3\n�Է�:");
		scanf("%d", &num);
		int com = rand() % 3 + 1;
		if (num > com)
		{
			if (num == --com)
			{
				printf("�й�\n");
				break;
			}
			else 
			{
				printf("�¸�\n");
				win++;
			}
		}
		if (num < com)
		{
			if (++num == com)
			{
				printf("�¸�\n");
				win++;
			}
			else
			{
				printf("�й�\n");
				break;
			}
		}
		else if (num==com)
		{
			printf("���º�\n");
			mu++;
		}
	}
	printf("����%d�� %d��",win,mu);
	return 0;
}
