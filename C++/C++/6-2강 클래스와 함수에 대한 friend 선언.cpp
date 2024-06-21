#include <iostream>
using namespace std;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;						//friend�� �������� ������
public:
	Boy(int len) : height(len)
	{ }
};

class Girl
{
public:
	void ShowBoy(Boy boy)
	{
		cout << boy.height << endl;					//boy.height�� ���� �� �� ����.
	}
};

class Point;

class PointOP
{
public:
	Point PointAdd(const Point&, const Point&);
	PointOP(){}
	~PointOP()
	{
		cout << "���� ������ ������(OP)" << endl;
	}
};

class Point
{
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos)
	{
		cout << "��ü ������ �߰��� : " << this << endl;
	}

	Point(const Point& pos) : x(pos.x), y(pos.y)
	{
		cout << "���� ������ �߰��� : " << this << endl;
	}
	~Point()
	{
		cout << "���� ������ ������ : " << this << endl;
	}
	friend Point PointOP::PointAdd(const Point&, const Point&);	//PoineOPŬ������ PointAdd�Լ����� private ������ ����Ѵ�(�Ʒ��� ������)
	friend void ShowPointPos(const Point&);			//Point�� private�������(point.x, point.y)�� ������ ������
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)  //frined �������� ��������� ���� ����
{
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);		
}

void ShowPointPos(const Point& pos)						//���� ������ �߰���
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}

void MakeCon(Point pos)						//���� ������ �߰���
{
	cout << "���� ������ ���Դ� : " << &pos << endl;
}											//���� ������ ������

int main262()
{
	Boy boy(170);
	Girl girl;
	girl.ShowBoy(boy);

	cout << endl;

	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	MakeCon(pos1);
	cout << endl;
	ShowPointPos(op.PointAdd(pos1, pos2));

	cout << endl;
	return 0;
}

/*
��ü ������ �߰��� : 000000E2F27EF9D8
��ü ������ �߰��� : 000000E2F27EF9F8
���� ������ �߰��� : 000000E2F27EFB78
���� ������ ���Դ� : 000000E2F27EFB78
���� ������ ������ : 000000E2F27EFB78

��ü ������ �߰��� : 000000E2F27EFBB4
x: 3, y: 6
���� ������ ������ : 000000E2F27EFBB4

���� ������ ������(OP)
���� ������ ������ : 000000E2F27EF9F8
���� ������ ������ : 000000E2F27EF9D8
*/