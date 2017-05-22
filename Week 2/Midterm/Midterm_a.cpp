#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class Employee {
  int employeeNumber, hrs;
  char employeeName[50];
  public:
      Employee() { //Default Constructor
        cout << "Enter the Employee Number: ";
        cin >> employeeNumber;
        cout << "Enter the Employee Name: ";
        cin >> employeeName;
        cout << "Enter the Hours worked: ";
        cin >> hrs;
      }

      Employee(int number, char name[50], int hours) {
        employeeNumber = number;
        strcpy(employeeName, name);
        hrs = hours;
      }

      void weeklyPay(int rate1 = 8) {
        cout << "\nWeekly pay is " << (hrs * 30) * rate1;
      }

      void print() {
        cout << "\nEmployee Number: " << employeeNumber;
        cout << "\nEmployee Name: " << employeeName;
        cout << "\nHours Worked: " << hrs;
      }
};

int main() {
  Employee A;
  Employee B(1, "Toledo", 45);
  A.print();
  A.weeklyPay();
  B.print();
  B.weeklyPay();
  return 0;
}
