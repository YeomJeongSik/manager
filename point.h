#pragma once
//---------------------------------------------------------------------------------------------------------
// Point.h		Point class declaration - ��� ������ ������ �����Ǿ�� �Ѵ�.
//				2���� ��ǥ (x, y)�� ��Ÿ����.
// 
// 2023.11.19	Wulong
//---------------------------------------------------------------------------------------------------------
#ifndef _Point						// �� ���� include �� �� �ֵ��� ��
#define _Point						// ���Ǻ� ������ - ���۸� �� ��

struct Point						// struct - default public
{
	double x, y;

	Point();						// default constructor - ����� �Լ�
	Point(double, double);
	Point(const Point&) = default;	// ��������� - ����ڰ� ���� �ʿ� ���ٴ� �ǹ� 
};
#endif