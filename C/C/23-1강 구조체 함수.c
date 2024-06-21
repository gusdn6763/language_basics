

typedef struct mouse
{
	int xpos;
	int ypos;
}mouse;

void point(mouse pos)
{
	printf("%d %d", pos.xpos, pos.ypos);
}

mouse returnstruct(void)
{
	mouse tpos = {3,5};
	return tpos;
}



int main231()
{
	mouse pos = returnstruct();
	returnstruct();
	point(pos);

	return 0;
}
