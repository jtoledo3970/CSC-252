/*
Write a template function that receives a contact vector reference type as a parameter and prints the elements of the vector. The function must print two elements per line. Write a main function to test this function. In the main function create three different vectors of the types, int, double and char. In at least one case use the default constructor of the vector. Initialize the vectors with six elements then call the template function on each of the vectors
*/

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

template <typename T>
void print(const vector<T> & v) {
  int size = v.size();
  for (int i = 0; i < size; i++) {
    if ( i % 2 == 0) {
      cout << endl;
    }
    cout << v[i] << " ";
  }
}

int main() {
  vector<int> v1;
  v1.resize(6);
  for (int i = 0; i < 6; i++) {
    v1[i] = i;
  }
  print<int>(v1);
}
