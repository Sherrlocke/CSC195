#pragma once
#include <iostream>

namespace rlm {

	class Point{
	public:
		Point() : x{ 0 }, y{ 0 } {}
		Point(float x, float y) : x{ x }, y{ y } {}

		Point operator + (const Point& point);
		Point operator - (const Point& point);
		Point operator * (float s);

		void Write(std::ostream& ostream);

		friend std::ostream& operator << (std::ostream& ostream, const rlm::Point& point);
		//friend std::istream& operator >> (std::istream& istream, const rlm::Point& point);

	private:
		float x, y;
	};

}

