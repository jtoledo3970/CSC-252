#include "circle.h"
#include <iostream>
using namespace std;
// implementation file
Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r)
{
	radius = r;
}


double Circle::area()
{
	return (3.14)*radius*radius;
}
void Circle::setRadius(double r)
{
	radius = r;
}
double Circle::getRadius()
{
	return radius;
}

int main()
{
	Circle myC1;
	Circle myC2(7.1);
	cout << myC2.area() << endl;
	return 0;
}
