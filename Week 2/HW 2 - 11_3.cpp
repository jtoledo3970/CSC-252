#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size) {
  int *ptr = new int[size];
  for (int i = 0; i < size; i++) {
    ptr[i] = list[i];
  }
  return ptr;
}

int main() {
  int size, *list, *newlist, doubleSize, value;
  cout << "Enter the size of your array: ";
  cin >> size;
  list = new int[size];
  cout << "Enter " << size <<" integer values: ";
  for (int i = 0; i < size; i++) {
    cin >> value;
    *(list + i) = value;
  }
  doubleSize = size * 2;
  newlist = doubleCapacity(list, doubleSize);
  cout << "The array has now doubled, enter more integers:  ";
  for (int i = size; i < doubleSize; i++) {
    cin >> value;
    *(newlist + i) = value;
  }
  cout << "Array Elements after double in size: " << doubleSize << endl;
}
