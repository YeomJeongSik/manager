//---------------------------------------------------------------------------------------------------------
// line.cpp	
// 
// 2023.12.11 Jeong
//---------------------------------------------------------------------------------------------------------
#include <iostream>
#include "line.h"

Line::Line() 
	:p1(), p2() 
{
}

Line::Line(const Point& a, const Point& b)
	:p1(a), p2(b)
{
}

Line::Line(const Line& other) 
	: p1(other.p1), p2(other.p2)
{
}

Line::~Line()
{
}

void Line::draw() const
{
	std::cout << "�� - (" << p1.x << "," << p1.y << "), ("
		<< p2.x << "," << p2.y << ")" << '\n';
}