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
	printf("%d %d", box.mem1, box.mem2);                  //공용체 == 메모리 공유
	return 0;
}