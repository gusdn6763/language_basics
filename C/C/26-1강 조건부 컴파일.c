#define ADD 1
#define MIN 0

int main261()
{
#if ADD         //ADD 가 참이면
	printf("ADD는 참");
#endif


#ifdef  ADD     //ADD 매크로가 정의되었으면

#endif
	return 0;
}