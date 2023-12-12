//---------------------------------------------------------------------------------------------------------
// 다형성구현.cpp	
// 
// 찾아보고 알아볼 것
// 
//			- 다형성(Ploymorphism)이란 무엇인가?
//			- C++ 언어에서는 어떻게 다형성을 구현하는가?
// 
// 2023.11.19	Wulong
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include "point.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "shapeManager.h"
#include "line.h"
//----------
int main()
//----------
{
	int cnt{};
	int num{};
	std::cout << '\t' << "Menu" << '\n';
	std::cout << " - 원하는 도형 추가" << '\n';
	std::cout << '\t' << " - 삼각형(1)" << '\n';
	std::cout << '\t' << " - 사각형(2)" << '\n';
	std::cout << '\t' << " - 원(3)" << '\n';
	std::cout << '\t' << " - 선(4)" << '\n';
	std::cout << " - 전체 도형을 그리기(5)" << '\n';
	std::cout << " - 프로그램 끝내기(6)" << '\n';

	std::cin >> num;

	if (num == 1) {
		
	}
	else if (num == 2) {

	}
	else if (num == 3) {

	}
	else if (num == 4) {

	}
	else if (num == 5) {

	}
	else if (num == 6) {

	}
	// 1. 관리 클래스를 만듦
	ShapeManager sm(100);				// 최대 100개의 도형을 관리함
	// 2. 도형들을 관리 클래스에 삽입함
	sm.insert(new Triangle());
	sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	for (int i = 0; i < 10; ++i)
		sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
	sm.insert(new Line(Point(1, 1), Point(2, 2)));

	// 3. 관리하고 있는 모든 도형을 그림
	sm.draw();
	// 이 프로그램에서 잘못된 점을 찾을 수 있는가?	//메모리 누수가 일어나고 있다.
	// 잘못된 점을 어떻게 찾을 수 있는가?	// Debug 상태로 _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); 치고 f5를 누르면 가능
	
} 