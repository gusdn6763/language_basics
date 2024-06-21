

typedef struct stpoint
{
	int xpos;
	int ypos;
}stpoint;


void swapstruct(stpoint * ptr)
{
	ptr->xpos *= -1;
	ptr->ypos *= -1;
}


int main233()
{
	stpoint pos = { 1,-1 };
	swapstruct(&pos);
	printf("%d  %d", pos.xpos, pos.ypos);

	return 0;
}