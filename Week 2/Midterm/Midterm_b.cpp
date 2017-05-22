#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
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

/*
Create an Employee object using the constructor with parameter.
Declare an Employee pointer and make it point to the Employee object created in part (i).
Use the pointer to call the print() method of the object.
Dynamically create an Employee object and make the pointer point to this newly created dynamic object.
Use the pointer to call the print() method of this new object.
Delete the pointer and set it to point to NULL. Explain what does this step do?
*/

int main() {
  Employee* a = new Employee(1, "Jose", 39);
  a -> print();
  delete a;
  a = NULL;
  return 0;
}
