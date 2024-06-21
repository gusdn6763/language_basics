#include "0강 선택.h"
#include "4-5강 OOP프로젝트 2단계.h"
  
int main()
{
	int part, chapter, chapter_num;

	while (1)
	{
		cout << "1.c++로의 전환" << endl;
		cout << "2.객체지향의 도입" << endl;
		cout << "3.상속" << endl;
		cout << "5.OOP프로젝트" << endl;
		cout << endl << "파트 선택 : ";
		cin >> part;
		system("cls");
		if (part == 1)
		{
			cout << "1. 챕터1 : c 언어 기반의 c++" << endl;
			cout << "2. 챕터2 : c 언어 기반의 c++" << endl;
			cout << "3. 챕터1 : 문제" << endl;
			cout << "4. 챕터2 : 문제" << endl;
			cout << endl << "챕터 선택 : ";
			cin >> chapter;
			system("cls");
			if (chapter == 1)
			{
				system("cls");
				cout << "1. printf와 scanf를 대신하는 입출력 방식" << endl;
				cout << "2. 함수 오버로딩" << endl;
				cout << "3. 매개변수 디폴드 값" << endl;
				cout << "4. 인라인 함수" << endl;
				cout << "5. 이름공간과 using" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. bool자료형" << endl;
				cout << "2. 참조자의 이해" << endl;
				cout << "3. 참조자와 함수" << endl;
				cout << "4. new 와 delete" << endl;
				cout << "5. c++에서 c호출하기" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. 문제 01-1" << endl;
				cout << "2. 문제 01-2" << endl;
				cout << "3. 문제 01-3" << endl;
				cout << endl << "문제 선택 : ";
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
				cout << "1. 문제 02-1" << endl;
				cout << "2. 문제 02-3" << endl;
				cout << endl << "문제 선택 : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam021();
				if (chapter_num == 2)
					exam023();
			}

		}
		else if (part == 2)
		{
			cout << "1. 챕터3 : 클래스의 기본" << endl;
			cout << "2. 챕터4 : 클래스의 완성" << endl;
			cout << "3. 챕터5 : 복사 생성자" << endl;
			cout << "4. 챕터6 : friend와 static 그리고 const" << endl;
			cout << "5. 챕터3 : 문제" << endl;
			cout << "6. 챕터4 : 문제" << endl;
			cout << "7. 챕터5 : 문제" << endl;
			cout << "8. 챕터6 : 문제" << endl;
			cout << endl << "챕터 선택 : ";
			cin >> chapter;
			system("cls");
			if (chapter == 1)
			{
				system("cls");
				cout << "1. c++에서의 구조체" << endl;
				cout << "2. 클래스와 객체" << endl;
				cout << "3 .객체지향 프로그래밍의 이해" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. 정보은닉" << endl;
				cout << "2. 캡슐화" << endl;
				cout << "3 .생성자와 소멸자" << endl;
				cout << "4. 클래스와 배열 그리고 this 포인터" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. 복사 생성자" << endl;
				cout << "2. 깊은 복사 생성자와 얖은 복사 생성자" << endl;
				cout << "3 .복사 생성자의 호출시점" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. const의 추가설명" << endl;
				cout << "2. 클래스와 함수에 대한 friend 선언" << endl;
				cout << "3 .C++에서의 static" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. 문제 03-1" << endl;
				cout << "2. 문제 03-2" << endl;
				cout << endl << "문제 선택 : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam031();
				if (chapter_num == 2)
					exam032();
			}
			else if (chapter == 6)
			{
				system("cls");
				cout << "1. 문제 04-1" << endl;
				cout << "2. 문제 04-2" << endl;
				cout << "3. 문제 04-3" << endl;
				cout << endl << "문제 선택 : ";
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
				cout << "1. 문제 05-1" << endl;
				cout << endl << "문제 선택 : ";
				cin >> chapter_num;
				if (chapter_num == 1)
					exam051();
			}
		}
		else if (part == 3)
		{
			cout << "1. 챕터7 : 상속" << endl;
			cout << "2. 챕터8 : 상속과 다형성" << endl;
			cout << endl << "챕터 선택 : ";
			cin >> chapter;
			system("cls");
			if (chapter == 1)
			{
				system("cls");
				cout << "1. 상속" << endl;
				cout << "2. 상속의 문법적인 이해" << endl;
				cout << "3 .3가지 형태의 상속" << endl;
				cout << "4. 상속의 조건" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. 정보은닉" << endl;
				cout << "2. 캡슐화" << endl;
				cout << "3 .생성자와 소멸자" << endl;
				cout << "4. 클래스와 배열 그리고 this 포인터" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. 복사 생성자" << endl;
				cout << "2. 깊은 복사 생성자와 얖은 복사 생성자" << endl;
				cout << "3 .복사 생성자의 호출시점" << endl;
				cout << endl << "챕터 내용선택";
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
				cout << "1. const의 추가설명" << endl;
				cout << "2. 클래스와 함수에 대한 friend 선언" << endl;
				cout << "3 .C++에서의 static" << endl;
				cout << endl << "챕터 내용선택";
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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
