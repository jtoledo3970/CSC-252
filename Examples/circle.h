// The definition of the class Circle. No implementation
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double r);
	double area();
	void setRadius(double r);
	double getRadius();
private:
	double radius;
};

#endif
