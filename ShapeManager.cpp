//---------------------------------------------------------------------------------------------------------
// ShapeManager.cpp		���� ���� ������ �����ϴ� Ŭ����
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
	capacity = n;						// ó�� ������� ���� �����ϴ� ���� ������ 0��
	shapes = new Shape * [capacity];	// �ִ� n���� ������ ���� �� ����
}

//-----------------------------------------------------
ShapeManager::~ShapeManager()
//-----------------------------------------------------
{
	// ��� ��ü�� ��Ȯ�ϰ� �����Ǵ��� �ݵ�� Ȯ���Ͽ��� �Ѵ�.
	delete[] shapes;					// ���������ڰ� �����ϴ� ������ �Ҹ��ڸ� ȣ����
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
	cout << "�����ϴ� ��� ������ �׸��ϴ�" << '\n';
	cout << "�ִ� " << capacity << "���� ������ ���� �� �ֽ��ϴ�" << '\n';
	cout << "��� " << nshape << "���� ������ �ֽ��ϴ�" << '\n';
	cout << "----------------------------------------------------" << '\n' << '\n';

	for (int i = 0; i < nshape; ++i) {
		cout << "[" << i << "] ";
		shapes[i]->draw();				// �������� �����ȴ�
	}
	cout << '\n';

	cout << "----------------------------------------------------" << '\n';
	cout << "�׸��⸦ ��Ĩ�ϴ�" << '\n';
	cout << "----------------------------------------------------" << '\n';
}