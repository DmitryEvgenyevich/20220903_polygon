#pragma once
#include <iostream>

class Point
{
private:
	double _x;
	double _y;

public:	
	Point(double x = 0, double y = 0);
	
	void setX(const double x);
	void setY(const double y);

	double getX() const;
	double getY() const;

	friend std::ostream& operator<< (std::ostream& out, const Point& point);

	~Point() = default;

};

