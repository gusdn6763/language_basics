int test18(int(*p1)[2])    //int (*p1)[2] == int p1[][2]
{
	return 0;
}



int main18()
{
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr[2][2] = { { 1,2 }, { 3,4 } };

	int (*ptra)[2] = arr;
	int * ptrb[4] = { &num1, &num2, &num3, &num4 };
	printf("%d %d", *ptra, arr);
	test18(ptra);   //ptra=arr
	return 0;
}

