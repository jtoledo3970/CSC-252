#include <iostream>
using namespace std;

class Circle {
private:
  double r;
public:
  Circle() {
    r = 1;
  }

  Circle(double newR) {
    r = newR;
  }

  double getArea() {
    return r * r * 3.14159;
  }

  double getR() {
    return r;
  }

  Circle subtract(Circle &secondC) {
    double r = r - secondC.getR();
    return Circle(r);
  }

  int compareTo(Circle &secondC) {
    Circle temp = subtract(secondC);
    if (temp.getR() < 0) {
      return -1;
    } else if (temp.getR() == 0) {
      return 0;
    } else {
      return 1;
    }
  }

  friend bool operator < (Circle circle1, Circle circle2) {
    return (circle1.compareTo(circle2) < 0);
  }

  friend bool operator <= (Circle circle1, Circle circle2) {
    return (circle1.compareTo(circle2) <= 0);
  }

  friend bool operator > (Circle circle1, Circle circle2) {
    return (circle1.compareTo(circle2) > 0);
  }

  friend bool operator >= (Circle circle1, Circle circle2) {
    return (circle1.compareTo(circle2) >= 0);
  }

  friend bool operator == (Circle circle1, Circle circle2) {
    return (circle1.compareTo(circle2) == 0);
  }

  friend bool operator != (Circle circle1, Circle circle2) {
    return (circle1.compareTo(circle2) != 0);
  }
};

int main() {
  Circle circle1(5.0);
  Circle circle2(7.0);
  cout << "The area of the circle with radius of:  " << circle1.getR() << " is " << circle1.getArea() << endl;
  cout << "The area of the circle with radius of:  " << circle2.getR() << " is " << circle2.getArea() << endl;
  cout << "circle1 " << "> " << "circle2 is: " << ((circle1 > circle2) ? "true" : "false") << endl;
  cout << "circle1 " << ">= " << "circle2 is: " << ((circle1 >= circle2) ? "true" : "false") << endl;
  cout << "circle1 " << "<= " << "circle2 is: " << ((circle1 <= circle2) ? "true" : "false") << endl;
  cout << "circle1 " << "< " << "circle2 is: " << ((circle1 < circle2) ? "true" : "false") << endl;
  cout << "circle1 " << "== " << "circle2 is: " << ((circle1 == circle2) ? "true" : "false") << endl;
  cout << "circle1 " << "!= " << "circle2 is: " << ((circle1 != circle2) ? "true" : "false") << endl;
  return 0;
}
