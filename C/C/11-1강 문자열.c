
int main111()
{
/*
	char str[14] = "Good morning!";  //G o o d    m o r n i n g ! (\n)널문자  ->14개
	printf("%d %d %c  %s", sizeof(str), str[13], str[13], str);    //14 0  x  Good morning!
	return 0;
*/

/*
	char str[50];

	printf("문자열입력:");
	scanf("%s", str);   //scanf함수가 데이터를 구분짓는 기준 =>공백 ->문자열을 받기 적합하지않음 ex) he is
	printf("%s", str);
*/

/*
	char str[] = "Good morning!";
	printf("%s\n", str);
	str[4] = '\0';
	printf("%s", str);   //G o o d [4] \0
*/

/*
	char str[50];
	int i=0;
	printf("문자열 입력:");
	scanf("%s", str);
	for (; str[i] != '\0';i++)
	{
	}
	printf("%d", i);

*/

	char str1[50];
	int i=0;
	printf("문자열 입력:");
	scanf("%s", str1);
	for (;str1[i] != '\0'; i++) 
	{
	}
	for (i-=1;i >= 0; i--)
	{
		printf("%c", str1[i]);
	}

	return 0;
}
