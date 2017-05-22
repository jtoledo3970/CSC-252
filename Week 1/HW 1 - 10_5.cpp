#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s);

int main() {
  string str;
  cout << "Please enter a string: ";
  getline(cin, str);
  bool palindrome = isPalindrome(str);
  if (palindrome) {
    cout << str << " is a palindrome" << endl;
  } else {
    cout << str << " is not a palindrome" << endl;
  }
}

bool isPalindrome(const string& s) {
  bool palindrome = true;
  for (int i = 0; i< s.length(); i++) {
    if (toupper(s[i]) != toupper(s[s.length()-1-i])) {
      palindrome = false;
    }
  }
  return palindrome;
}
