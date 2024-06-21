#include <iostream>

using namespace std;

class SinivelCap    // 콧물 처치용 캡슐
{
public:
	void Take() const { cout << "콧물 전용약" << endl; }
};

class SneezeCap    // 재채기 처치용 캡슐
{
public:
	void Take() const { cout << "재채기 전용약" << endl; }
};

class SnuffleCap   // 코막힘 처치용 캡슐
{
public:
	void Take() const { cout << "코막힘 전용약" << endl; }
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
/// 클래스안에서 클래스를 묶는것이 캡슐화, 범위가 애매해서 어렵다.
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