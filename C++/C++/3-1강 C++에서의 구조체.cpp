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

	char gamerID[ID_LEN];	// 소유자ID
	int fuelGauge;			// 연료량
	int carSpeed;			// 현재속도

	//구조체가 커질경우를 대비해 외부로 뺄 수있다.
	void ShowCarState();

	//구조체 안에 함수가 정의되어있으면 인라인으로 정의된다.
	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;
		if (carSpeed + ACC_STEP >= MAX_SPD)
		{
			carSpeed = MAX_SPD;
			cout << "최대속도..." << endl << endl;
			return;
		}
		carSpeed += ACC_STEP;
		cout << "가속중...." << endl << endl;
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
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << carSpeed << "km/s" << endl << endl;
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