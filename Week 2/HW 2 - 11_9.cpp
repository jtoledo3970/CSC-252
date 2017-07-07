#include <iostream>
using namespace std;

class Rectangle2D {
private:
  double x, y, width, height;
public:
  Rectangle2D(){
    x = 0;
    y = 0;
    width = 1;
    height = 1;
  }
  Rectangle2D(double x1, double y1, double w, double h) {
    x = x1;
    y = y1;
    width = w;
    height = h;
  }
  // get set
  void setX(double input) {
    x = input;
  }

  void setY(double input) {
    y = input;
  }

  void setWidth(double input) {
    width = input;
  }

  void setHeight(double input) {
    height = input;
  }

  double getX() {
    return x;
  }

  double getY() {
    return y;
  }

  double getWidth() {
    return width;
  }

  double getHeight() {
    return height;
  }

  double getArea() {
    return width * height;
  }

  double getPerimeter() {
    return 2*(width+height);
  }

  bool contains(double x, double y) {
    double pX = x;
    double pY = y;
    if (pX < (x + (.5 * width)) && (pX > (x - (.5 * height))) && (pY < (y + (.5 * height))) && (pY > (y - (.5 * height)))) {
      return true;
    } else {
      return false;
    }
  }
};
