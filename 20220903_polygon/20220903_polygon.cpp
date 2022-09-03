#include <iostream>
#include "Polygon.h"
#include "Point.h"

int main()
{
    Polygon p{ Point(1,1),Point(2,2), Point(1,2), Point(2,1) };
    p.show();
}
