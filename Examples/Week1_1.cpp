#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Circle {
  public: // Operation actions that we apply to the object
  // constructor
  Circle() { // Default constructor
    radius = 1;
    color = "blue";
  }

  Circle(double r, string c) { // constructor with a parameter
    radius = r;
    color = c;
  }

  double area() {
    return 3.14 * pow(radius, 2);
  }
  // Set (mutator) and get(accessor)
  // get
  double getRadius() {
    return radius;
  }
  // Set
  void setRadius(double r) {
    // This is going to validate r
    if (r >= 0) {
      radius = r;
    } else {
      cout << "Invalid input\n";
    }
  }

  void setColor(string c){
    color = c;
  }

  string getColor() {
    return color;
  }


  private: // Attribute, state and data members
    double radius;
    string color;
};

int main() {
  int x = 10;
  double y = 22.3;
  bool b = true;
  string s = "hello";
  char c = 'M';
  Circle myC1; // myC1 is an object of the type Circle
               // Here the default constructor is executed
  Circle myC2(5.6, "Red");
  cout << "The area of myC1 is " << myC1.area() << endl;
  cout << "The area of myC2 is " << myC2.area() << endl;

  myC1.setRadius(-100);
  Circle myC3(3.1, "green");
  cout << myC3.area() << " " << myC3.getRadius() << " " << myC3.getColor() << endl;

  // This will change the color and the radius of myC3
  myC3.setColor("Yellow");
  myC3.setRadius(10);
  cout << myC3.area() << " " << myC3.getRadius() << " " << myC3.getColor() << endl;
  myC1 = myC3;
  cout << myC1.area() << " " << myC1.getRadius() << " " << myC1.getColor() << endl;

  return 0;
}
