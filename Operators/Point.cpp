#include "Point.h"


namespace rlm {
	Point Point::operator+(const Point& point)
	{
		Point p;

		p.x = x + point.x;
		p.y = y + point.y;

		return p;
	}

	Point Point::operator-(const Point& point)
	{
		Point p;

		p.x = x - point.x;
		p.y = y - point.y;

		return p;
	}

	Point Point::operator*(float s)
	{
		Point p;

		p.x = x * s;
		p.y = y * s;

		return p;
	}

	void Point::Write(std::ostream& ostream) {
		ostream << x << " : " << y << std::endl;
	}

	std::ostream& operator << (std::ostream& ostream, const rlm::Point& point) {
		ostream << point.x << " : " << point.y << std::endl;
		return ostream;
	}

}
