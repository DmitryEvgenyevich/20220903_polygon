#include "Polygon.h"

Polygon::Polygon(int size) :
	_size{ size },
	_arr{ new Point[_size] }
{}

Polygon::Polygon(const Polygon& obj):
	_size{obj._size},
	_arr{new Point(_size)}
{
	for (int i{}; i < this->_size; ++i)
		this->_arr[i] = obj._arr[i];

}

Polygon::Polygon(const std::initializer_list<Point>& list) :
	Polygon(list.size())
{
	int index{};
	for (const Point& point : list)
	{
		this->_arr[index++] = point;
	}
}

void Polygon::show()
{
	for (int i{}; i < this->_size; ++i)
		std::cout << this->_arr[i];
}

Point& Polygon::operator[](int id)
{
	return this->_arr[id];
}

Polygon::~Polygon()
{
	if (this->_arr != nullptr)
		delete[] this->_arr;
}
