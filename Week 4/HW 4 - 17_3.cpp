#include <iostream>
using namespace std;

int gcd(int m, int n) {
  if (m % n == 0) {
    return n;
  } else {
    return gcd(n,m%n);
  }
}

int main() {
  int m, n;
  cout << "Please provide the first number: ";
  cin >> m;
  cout << "Please provide the second number: ";
  cin >> n;
  cout << "GCD for the first and second number is: " << gcd(m, n) << endl;
}
