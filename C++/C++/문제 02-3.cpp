#include <iostream>

using namespace std;

typedef struct	__Point
{
	int xpos;
	int ypos;
}				__Point;

__Point& pntAdder(const __Point& p1, __Point& p2)
{
	__Point*tmp = new __Point;

	tmp->xpos = p1.xpos + p2.xpos;
	tmp->ypos = p1.ypos + p2.ypos;
	return *tmp;
}

void exam023()
{
	cout << "¹®Á¦1" << endl << endl;
	__Point* pos1 = new __Point;
	__Point* pos2 = new __Point;
	pos1->xpos = 1;
	pos1->ypos = 2;
	pos2->xpos = 3;
	pos2->ypos = 4;
	cout << pntAdder(*pos1, *pos2).xpos << endl << pntAdder(*pos1, *pos2).ypos;
}