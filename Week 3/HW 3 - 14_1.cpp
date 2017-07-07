#include <iostream>
using namespace std;

int counter = 1;

class Rational {
private:
  int n, d;
public:
  Rational(int = 0, int = 1);
  void printFraction();
  double retFloating();
};

Rational::Rational(int n, int d) {
  this -> n = n;
  this -> d = d;
}

void Rational::printFraction() {
  counter++;
  if (counter > 0 && counter < 100) {
    cout << n << "/" << d << " + ";
  } else {
    cout << n << "/" << d << " ";
  }
}

double Rational::retFloating() {
  return(float)n/d;
}

int main() {
  double sum = 0;
  for (int i = 1; i < 100; i++) {
    Rational x(i, i+1);
    x.printFraction();
    sum = sum+x.retFloating();
  }

  cout << "\nThe sum of all of is: " << sum << endl;
  return 0;
}
