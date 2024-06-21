#include <iostream>

using namespace std;

struct StructCar
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};

	char gamerID[ID_LEN];	// ������ID
	int fuelGauge;			// ���ᷮ
	int carSpeed;			// ����ӵ�

	//����ü�� Ŀ����츦 ����� �ܺη� �� ���ִ�.
	void ShowCarState();

	//����ü �ȿ� �Լ��� ���ǵǾ������� �ζ������� ���ǵȴ�.
	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;
		if (carSpeed + ACC_STEP >= MAX_SPD)
		{
			carSpeed = MAX_SPD;
			cout << "�ִ�ӵ�..." << endl << endl;
			return;
		}
		carSpeed += ACC_STEP;
		cout << "������...." << endl << endl;
	}

	void Break()
	{
		if (carSpeed < BRK_STEP)
		{
			carSpeed = 0;
			return;
		}
		carSpeed -= BRK_STEP;
	}
};
void StructCar::ShowCarState()
	{
		cout << "������ID: " << gamerID << endl;
		cout << "���ᷮ: " << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << carSpeed << "km/s" << endl << endl;
	}

int		main231()
{
	StructCar myCar = { "mouse", 100, 0 };
	myCar.ShowCarState();
	myCar.Accel();
	myCar.Accel();
	myCar.ShowCarState();

	return (0);
}