#pragma once
#include "Point.h"
#include <iostream>

class Polygon
{
private:
	int _size;
	Point* _arr;

public:
	Polygon() = default;
	Polygon(int size);
	Polygon(const Polygon& obj);
	Polygon(const std::initializer_list<Point>& list);

	void show();
	Point& operator[](int id);

	~Polygon();
};

