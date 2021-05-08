#include "Point.h"
#include <iostream>

//void Add(rlm::Point& p1, rlm::Point& p2) {
//	p1.x += p2.x;
//	p1.y += p2.y;
//}

//void operator + (rlm::Point & p1, rlm::Point & p2) {
//
//	p1.x += p2.x;
//	p1.y += p2.y;
//}

int main() {
	rlm::Point point1(12, 8);
	rlm::Point point2(4, 5);

	//Add(point1, point2);
	rlm::Point point3 = (point1 - point2) * 5;
	//point3.Write(std::cout);
	(std::cout << point3) << "hi!";
}