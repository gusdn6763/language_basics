#include "0�� ����.h"
#include "4-5�� OOP������Ʈ 2�ܰ�.h"
  
int main()
{
	int part, chapter, chapter_num;

	while (1)
	{
		cout << "1.c++���� ��ȯ" << endl;
		cout << "2.��ü������ ����" << endl;
		cout << "3.���" << endl;
		cout << "5.OOP������Ʈ" << endl;
		cout << endl << "��Ʈ ���� : ";
		cin >> part;
		system("cls");
		if (part == 1)
		{
			cout << "1. é��1 : c ��� ����� c++" << endl;
			cout << "2. é��2 : c ��� ����� c++" << endl;
			cout << "3. é��1 : ����" << endl;
			cout << "4. é��2 : ����" << endl;
			cout << endl << "é�� ���� : ";
			cin >> chapter;
			system("cls");
			if (chapter == 1)
			{
				system("cls");
				cout << "1. printf�� scanf�� ����ϴ� ����� ���" << endl;
				cout << "2. �Լ� �����ε�" << endl;
				cout << "3. �Ű����� ������ ��" << endl;
				cout << "4. �ζ��� �Լ�" << endl;
				cout << "5. �̸������� using" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main111();
				else if (chapter_num == 2)
					main112();
				else if (chapter_num == 3)
					main113();
				else if (chapter_num == 4)
					main114();
				else if (chapter_num == 5)
					main115();
			}
			else if (chapter == 2)
			{
				system("cls");
				cout << "1. bool�ڷ���" << endl;
				cout << "2. �������� ����" << endl;
				cout << "3. �����ڿ� �Լ�" << endl;
				cout << "4. new �� delete" << endl;
				cout << "5. c++���� cȣ���ϱ�" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main121();
				else if (chapter_num == 2)
					main122();
				else if (chapter_num == 3)
					main123();
				else if (chapter_num == 4)
					main124();
				else if (chapter_num == 5)
					main125();
			}
			else if (chapter == 3)
			{
				system("cls");
				cout << "1. ���� 01-1" << endl;
				cout << "2. ���� 01-2" << endl;
				cout << "3. ���� 01-3" << endl;
				cout << endl << "���� ���� : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam011();
				if (chapter_num == 2)
					exam012();
				if (chapter_num == 3)
					exam013();
			}
			else if (chapter == 4)
			{
				system("cls");
				cout << "1. ���� 02-1" << endl;
				cout << "2. ���� 02-3" << endl;
				cout << endl << "���� ���� : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam021();
				if (chapter_num == 2)
					exam023();
			}

		}
		else if (part == 2)
		{
			cout << "1. é��3 : Ŭ������ �⺻" << endl;
			cout << "2. é��4 : Ŭ������ �ϼ�" << endl;
			cout << "3. é��5 : ���� ������" << endl;
			cout << "4. é��6 : friend�� static �׸��� const" << endl;
			cout << "5. é��3 : ����" << endl;
			cout << "6. é��4 : ����" << endl;
			cout << "7. é��5 : ����" << endl;
			cout << "8. é��6 : ����" << endl;
			cout << endl << "é�� ���� : ";
			cin >> chapter;
			system("cls");
			if (chapter == 1)
			{
				system("cls");
				cout << "1. c++������ ����ü" << endl;
				cout << "2. Ŭ������ ��ü" << endl;
				cout << "3 .��ü���� ���α׷����� ����" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main231();
				else if (chapter_num == 2)
					main232();
				else if (chapter_num == 3)
					main233();
			}
			else if (chapter == 2)
			{
				system("cls");
				cout << "1. ��������" << endl;
				cout << "2. ĸ��ȭ" << endl;
				cout << "3 .�����ڿ� �Ҹ���" << endl;
				cout << "4. Ŭ������ �迭 �׸��� this ������" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main241();
				if (chapter_num == 2)
					main242();
				if (chapter_num == 3)
					main243();
				if (chapter_num == 4)
					main244();
			}
			else if (chapter == 3)
			{
				system("cls");
				cout << "1. ���� ������" << endl;
				cout << "2. ���� ���� �����ڿ� �A�� ���� ������" << endl;
				cout << "3 .���� �������� ȣ�����" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main251();
				if (chapter_num == 2)
					main252();
				if (chapter_num == 3)
					main253();
			}
			else if (chapter == 4)
			{
				system("cls");
				cout << "1. const�� �߰�����" << endl;
				cout << "2. Ŭ������ �Լ��� ���� friend ����" << endl;
				cout << "3 .C++������ static" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main261();
				if (chapter_num == 2)
					main262();
				if (chapter_num == 3)
					main263();
			}
			else if (chapter == 5)
			{
				system("cls");
				cout << "1. ���� 03-1" << endl;
				cout << "2. ���� 03-2" << endl;
				cout << endl << "���� ���� : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam031();
				if (chapter_num == 2)
					exam032();
			}
			else if (chapter == 6)
			{
				system("cls");
				cout << "1. ���� 04-1" << endl;
				cout << "2. ���� 04-2" << endl;
				cout << "3. ���� 04-3" << endl;
				cout << endl << "���� ���� : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam041();
				if (chapter_num == 2)
					exam042();
				if (chapter_num == 3)
					exam043();
			}
			else if (chapter == 7)
			{
				system("cls");
				cout << "1. ���� 05-1" << endl;
				cout << endl << "���� ���� : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam051();
			}
		}
		else if (part == 3)
		{
			cout << "1. é��7 : ���" << endl;
			cout << "2. é��8 : ��Ӱ� ������" << endl;
			cout << endl << "é�� ���� : ";
			cin >> chapter;
			system("cls");
			if (chapter == 1)
			{
				system("cls");
				cout << "1. ���" << endl;
				cout << "2. ����� �������� ����" << endl;
				cout << "3 .3���� ������ ���" << endl;
				cout << "4. ����� ����" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main371();
				else if (chapter_num == 2)
					main372();
				else if (chapter_num == 3)
					main373();
				else if (chapter_num == 4)
					main374();
			}
			else if (chapter == 2)
			{
				system("cls");
				cout << "1. ��������" << endl;
				cout << "2. ĸ��ȭ" << endl;
				cout << "3 .�����ڿ� �Ҹ���" << endl;
				cout << "4. Ŭ������ �迭 �׸��� this ������" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main241();
				if (chapter_num == 2)
					main242();
				if (chapter_num == 3)
					main243();
				if (chapter_num == 4)
					main244();
			}
			else if (chapter == 5)
			{
				system("cls");
				cout << "1. ���� ������" << endl;
				cout << "2. ���� ���� �����ڿ� �A�� ���� ������" << endl;
				cout << "3 .���� �������� ȣ�����" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main251();
				if (chapter_num == 2)
					main252();
				if (chapter_num == 3)
					main253();
			}
			else if (chapter == 6)
			{
				system("cls");
				cout << "1. const�� �߰�����" << endl;
				cout << "2. Ŭ������ �Լ��� ���� friend ����" << endl;
				cout << "3 .C++������ static" << endl;
				cout << endl << "é�� ���뼱��";
				cin >> chapter_num;
				if (chapter_num == 1)
					main261();
				if (chapter_num == 2)
					main262();
				if (chapter_num == 3)
					main263();
			}
		}
		else if (part == 5)
		{
			Simulate::main245();
		}
		cout << endl;
	}
}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
