#include <iostream>
#include <math.h>
using namespace std;

class Point2D {
public:
    Point2D() { xComp = 0; yComp = 0; }
    Point2D(double x, double y) { xComp = x; yComp = y; setX(xComp); setY(yComp); }
    void setX(double x) { xComp = x; }
    void setY(double y) { yComp = y; }
    double getX() const { return xComp; }
    double getY() const { return yComp; }
    double distanceFromOrigin() const {
         // a.        Provide code for the method distanceFromOrigin() that returns the distance of the point from the origin in the rectangular coordinate system. The distance of ( x,y) from the origin is given by the formula:square root of x squared plus y squared end root
    double x = getX();
    double y = getY();
    double distance;
    distance = sqrt((pow(x,2)+pow(y,2)));
    return distance;
  }
  void print() const { cout << "x= " << xComp << ": y= " << yComp; }
private:
  double xComp;
  double yComp;
};

int main() {
    // b.     Write a main function to test the Point2D class by creating a Point2D object then calling the print() and the distanceFromOrigin() functions in the object.

    Point2D test(2,2);
    double temp = test.distanceFromOrigin();
    cout << temp;
}
