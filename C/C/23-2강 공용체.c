int main232()
{
	union box
	{
		int mem1;
		int mem2;
		double mem3;
	};

	union box box;
	box.mem1 = 1;
	printf("%d %d", box.mem1, box.mem2);                  //����ü == �޸� ����
	return 0;
}