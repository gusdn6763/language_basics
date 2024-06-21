#include <iostream>

using namespace std;

int exam013_1(int n1)
{
	return (n1);
}

int exam013_1(int n1, int n2)
{
	return (n1 * n2);
}

int exam013_1(int n1, int n2, int n3)
{
	return (n1 * n2 * n3);
}

void exam013()
{
	cout << "¹®Á¦1" << endl << endl;
	cout << exam013_1(2) << endl << exam013_1(2, 3) << endl << exam013_1(2, 3, 4) << endl;
}