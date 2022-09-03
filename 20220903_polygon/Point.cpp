#include "Point.h"

Point::Point(double x, double y) :
	_x{ x },
	_y{ y }
{}

void Point::setX(const double x)
{
	this->_x = x;
}

void Point::setY(const double y)
{
	this->_y = y;
}

double Point::getX() const
{
	return this->_x;
}

double Point::getY() const
{
	return this->_y;
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "X: " << point._x << "  Y: " << point._y << '\n';
	return out;
}
