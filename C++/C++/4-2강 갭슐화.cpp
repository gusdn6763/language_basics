#include <iostream>

using namespace std;

class SinivelCap    // �๰ óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰ �����" << endl; }
};

class SneezeCap    // ��ä�� óġ�� ĸ��
{
public:
	void Take() const { cout << "��ä�� �����" << endl; }
};

class SnuffleCap   // �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�ڸ��� �����" << endl; }
};

class CAPSULE
{
private:
	SinivelCap a;
	SneezeCap b;
	SnuffleCap c;

public:
	void Take() const
	{
		a.Take();
		b.Take();
		c.Take();
	}
};

class Patient
{
public:
	void EatCapsule(const CAPSULE &cap) const { cap.Take(); }
};

/// <summary>
/// Ŭ�����ȿ��� Ŭ������ ���°��� ĸ��ȭ, ������ �ָ��ؼ� ��ƴ�.
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main242(void)
{
	CAPSULE capsule;
	Patient patient;

	patient.EatCapsule(capsule);
	return 0;
}