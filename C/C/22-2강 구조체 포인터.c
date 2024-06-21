struct point1
{
	int xpos;
	int ypos;
};


/*
int main222()
{
	struct point1 arr1 = { 1,2 };
	struct point1 arr2 = { 100,200 };
	struct point1* parr = &arr1;

	(*parr).xpos += 4;    //arr1.xpos
	printf("%d  %d\n", parr->xpos,parr->ypos);    //parr.xpos   parr.ypos

	parr = &arr2;

	parr->xpos += 1;               //(*parr).xpos +=1 
	printf("%d  %d", parr->xpos, parr->ypos);     

	return 0;
}
*/
struct cen
{
	int a;
	int b;
};
struct pointer
{
	int a;
	int b;
	struct cen* parr;   //=xpos, ypos
};



int main222()
{
	struct cen cen1 = { 1,2 };
	struct pointer pointer1 = { 3,4,&cen1 };
	printf("%d  %d", cen1.a, cen1.b);
	printf("\n%d %d %d", pointer1.a, pointer1.b, pointer1.parr->a);
	return 0;
}