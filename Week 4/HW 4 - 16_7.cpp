#include <iostream>
using namespace std;

class IllegalSubscriptException : public runtime_error {
public:
  IllegalSubscriptException(int i) : runtime_error("Subscript out of range") {
    this -> i = i;
  }

  char getChar() {
    return i;
  }

private:
  int i;
};

class Rational {
public:
  int &operator[](int index) {
    if (index == 0) {
      return numerator;
    } else if (index == 1) {
      return denominator;
    } else {
      throw IllegalSubscriptException(index);
    }
  }
private:
  int numerator, denominator;
};

int main() {
  Rational R;
  try {
    for (int i = 0; i < 3; i++) {
      R[i] = i;
      cout << "R[" << i << "] is " << R[i] << endl;
    }
  } catch (runtime_error e) {
    cout << e.what();
  }
  return 0;
}
