#define ADD 1
#define MIN 0

int main261()
{
#if ADD         //ADD �� ���̸�
	printf("ADD�� ��");
#endif


#ifdef  ADD     //ADD ��ũ�ΰ� ���ǵǾ�����

#endif
	return 0;
}