int main12()
{
	int*pnum1;
	int num1 = 5, num2 = 6;
	pnum1 = &num1;   //pnum1에 num의 주소값을 넣음/-;/p; 
	printf("%p\n", pnum1);
	printf("%p\n", &num1);		////&  피연산자(num1)의 주소값을 반환(전달)
	printf("%d\n\n", num1);
	*pnum1 -= 1;	//메모리값 안에있는 값변경  *의 의미는 포인터 변수pnum1이 가리키는 메모리 공간안의 값(( 변수num1의 값))
	printf("%d\n", num1);
	printf("%p\n", pnum1);    //메모리 위치는 변하지않음
	pnum1 -= 1;		////int형이기 때문에 메모리가 4바이트 차이가 생김 ->메모리 공간 위치만 변경
	printf("%d\n", num1);
	printf("%p\n", pnum1);
	return 0;  //포인터 쓰는이유 -> 메모리값이 접근하기 위해서
}