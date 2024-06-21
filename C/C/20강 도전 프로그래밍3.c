int test31()
{
	//도전1
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



	//못푼이유 ->  1.for문 조건문의 i의값이 변하니 i값으로만 배열을 표현 하려는 고정적인 생각   2.가로크기 세로크기 수는 셋는데 중간에 얼마만큼 크기를 변화할것인지 변화값을 못줌 ->연관성 못찾음
	int arr[50][50];
	int len, idx = 0, i, j;
	int s = 0, w = -1, inc = 1, val = 0;

	printf("숫자를 입력하시오: ");
	scanf("%d", &len);
	idx = len;

	while (1)
	{
		for (i = 0; i < idx; i++) // 가로 단위 그림
		{
			val++;
			w = w + inc;
			arr[s][w] = val;
		}
		idx = idx - 1;

		if (val == len * len)
			break;

		for (i = 0; i < idx; i++) // 세로 단위 그림
		{
			val++;
			s = s + inc;
			arr[s][w] = val;
		}
		inc = inc * -1;
	}

	for (i = 0; i < len; i++)  // 달팽이 배열 출력.
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
		printf("주사위%d의 값: %d \n",i+1, rand()%6+1);
	return 0;
}


int test35()
{
	srand((int)time(NULL));
	int num;
	int win=0, mu=0;

	for (;;)
	{
		printf("바위:1 가위:2 보:3\n입력:");
		scanf("%d", &num);
		int com = rand() % 3 + 1;
		if (num > com)
		{
			if (num == --com)
			{
				printf("패배\n");
				break;
			}
			else 
			{
				printf("승리\n");
				win++;
			}
		}
		if (num < com)
		{
			if (++num == com)
			{
				printf("승리\n");
				win++;
			}
			else
			{
				printf("패배\n");
				break;
			}
		}
		else if (num==com)
		{
			printf("무승부\n");
			mu++;
		}
	}
	printf("전적%d승 %d무",win,mu);
	return 0;
}
