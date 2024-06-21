#include <iostream>

using namespace std;

class ConstClass
{
private:
	int num;
public:
	ConstClass(int n) : num(n)
	{ }
	void AddNum(int n)
	{
		num += n;
		cout << "num : " << num << endl;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc: " << num << endl;
	}
	void SimpleFunc() const				//�Լ� �����ε��� �����ϴ�.
	{
		cout << "const SimpleFunc: " << num << endl;
	}
};

void YourFunc(const ConstClass& obj)
{
	obj.SimpleFunc();
}

int main261(void)
{
	ConstClass obj1(2);					
	const ConstClass obj2(7);		//��������� ȣ���� �����ϴ�.

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	obj1.AddNum(1);
	//obj2.AddNum(1);				��������� ���� ������ �� ����.
	return 0;
}
