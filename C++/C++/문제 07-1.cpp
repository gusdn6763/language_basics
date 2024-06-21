#include <iostream>
#include <cstring>

using namespace std;

#pragma once



class Car1
{
private:
	int gasolineGauge;
public:
	Car1(int gasoline) : gasolineGauge(gasoline)
	{

	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car1
{
private:
	int electricGauge;
public:
	HybridCar(int electric, int gasoline) : Car1(gasoline), electricGauge(electric)
	{

	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gasoline, int electric, int water) : HybridCar(gasoline, electric), waterGauge(water)
	{

	}
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸° : " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·® : " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·® : " << waterGauge << endl;
	}
};

void	exam071()
{
	HybridWaterCar car(1,2,3);
	car.GetGasGauge();
}