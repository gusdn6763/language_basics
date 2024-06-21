#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main124()
{
	char str[7] = "abcdef";
	char *pstr = new char[7];

	strcpy_s(pstr,sizeof(str) ,str);
	cout << str << endl;
	cout << pstr << endl << endl;

	delete[]pstr;

	int* ptr = new int;
	int& ref = *ptr;
	ref = 20;
	cout << *ptr << endl;
	return 0;
}