//---------------------------------------------------------------------------------------------------------
// ����������.cpp	
// 
// ã�ƺ��� �˾ƺ� ��
// 
//			- ������(Ploymorphism)�̶� �����ΰ�?
//			- C++ ������ ��� �������� �����ϴ°�?
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
	std::cout << " - ���ϴ� ���� �߰�" << '\n';
	std::cout << '\t' << " - �ﰢ��(1)" << '\n';
	std::cout << '\t' << " - �簢��(2)" << '\n';
	std::cout << '\t' << " - ��(3)" << '\n';
	std::cout << '\t' << " - ��(4)" << '\n';
	std::cout << " - ��ü ������ �׸���(5)" << '\n';
	std::cout << " - ���α׷� ������(6)" << '\n';

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
	// 1. ���� Ŭ������ ����
	ShapeManager sm(100);				// �ִ� 100���� ������ ������
	// 2. �������� ���� Ŭ������ ������
	sm.insert(new Triangle());
	sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	for (int i = 0; i < 10; ++i)
		sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));
	sm.insert(new Line(Point(1, 1), Point(2, 2)));

	// 3. �����ϰ� �ִ� ��� ������ �׸�
	sm.draw();
	// �� ���α׷����� �߸��� ���� ã�� �� �ִ°�?	//�޸� ������ �Ͼ�� �ִ�.
	// �߸��� ���� ��� ã�� �� �ִ°�?	// Debug ���·� _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF); ġ�� f5�� ������ ����
	
} 