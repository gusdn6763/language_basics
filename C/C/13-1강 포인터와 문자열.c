int main131()
{
	char str1[] = "My String";   //변수 형태의 문자배열 선언 및 저장
	const char * str2 = "Your String";
	printf("%s %s \n", str1, str2);

	str2 = "Our String";     // 가리키는 대상 변경  ->Our String라는 문자열의 주소값으로 변경
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	//str2[0] = 'X';      //주소안에 있는 데이터값 변경 불가능
	printf("%s %s \n", str1, str2);
	return 0;
}