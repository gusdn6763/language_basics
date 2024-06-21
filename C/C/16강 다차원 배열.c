/*

int main16()
{
	int arr[3][3];   //[세로길이] [가로길이]
	int arr1[3][3] = {
		{1,0},
		{1,1,1},
		{3}
	};
	return 0;
}

*/

/*
int main16()          //문제1

{
	int arr[3][9], i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr[i][j] = (i+2)*(j+1);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
int main16()
{
	int arr1[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int arr2[4][2], i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr2[i][j] = arr1[j][i];
			printf("%d ", arr2[i][j]);
		}
	}
	return 0;

}


