//---------------------------------------------------------------------------------------------------------
// ShapeManager.cpp		여러 개의 도형을 관리하는 클래스
// 
// 2023.11.19	Wulong
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include "ShapeManager.h"
using namespace std;

//-----------------------------------------------------
ShapeManager::ShapeManager(int n)
//-----------------------------------------------------
{
	nshape = 0;
	capacity = n;						// 처음 만들어질 때는 관리하는 도형 갯수가 0임
	shapes = new Shape * [capacity];	// 최대 n개의 도형을 담을 수 있음
}

//-----------------------------------------------------
ShapeManager::~ShapeManager()
//-----------------------------------------------------
{
	for (int i = 0; i < nshape; ++i)
		delete shapes[i];
	// 모든 객체가 정확하게 삭제되는지 반드시 확인하여야 한다.
	delete[] shapes;					// 도형관리자가 관리하는 도형의 소멸자를 호출함
}

//-----------------------------------------------------
void ShapeManager::insert(Shape* a)
//-----------------------------------------------------
{
	shapes[nshape] = a;
	nshape++;
}

//-----------------------------------------------------
void ShapeManager::draw() const
//-----------------------------------------------------
{
	cout << "----------------------------------------------------" << '\n';
	cout << "관리하는 모든 도형을 그립니다" << '\n';
	cout << "최대 " << capacity << "개의 도형을 담을 수 있습니다" << '\n';
	cout << "모두 " << nshape << "개의 도형이 있습니다" << '\n';
	cout << "----------------------------------------------------" << '\n' << '\n';

	for (int i = 0; i < nshape; ++i) {
		cout << "[" << i << "] ";
		shapes[i]->draw();				// 다형성이 구현된다
	}
	cout << '\n';

	cout << "----------------------------------------------------" << '\n';
	cout << "그리기를 마칩니다" << '\n';
	cout << "----------------------------------------------------" << '\n';
}