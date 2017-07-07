#include <iostream>
using namespace std;

template <typename T>
class Stack {
public:
  bool empty() const {
    return elements.empty();
  }
  T peek() const {
    return elements.back();
  }
  void push(T value) {
    elements.push_back(value);
  }
  void pop() {
    elements.pop_back();
  }
  T getSize() const {
    return elements.size();
  }
  T getData(int value) {
    return elements.at(value);
  }
private:
  vector elements;
};

int main() {

}
