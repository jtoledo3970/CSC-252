/*
Set and get methods for all private data members
A constant method weeklyPay() that receives a parameter representing the number of hours the employee worked per week. This method calculates and returns the weekly pay for the employee. Hours worked over 40 are paid at 1.5 times the regular hourlyRate.
A constant method print() that displays the value of the private data members.
*/

#include <iostream>
using namespace std;

class Employee {
private:
  string name;
  double hourlyRate;
public:
  Employee() {
    name = "";
    hourlyRate = 0;
  }

  Employee(string n, double rate) {
    name = n;
    hourlyRate = rate;
  }

  void setName(string n) {
    name = n;
  }

  void setHourlyRate(double rate) {
    hourlyRate = rate;
  }

  string getName() {
    return name;
  }

  double getHourlyRate() {
    return hourlyRate;
  }

  void weeklyPay(const double hours) {
    if ( hours > 40) {
      double temp = hours - 40;
      double temp2 = temp * (hourlyRate * 1.5);
      double temp3 = hourlyRate * 40;
      cout << "The weekly pay is: "<< temp2 + temp3;
    } else {
      cout << "The weekly pay is: "<< hours * hourlyRate;
    }
  }

  void print() {
    cout << "The employee name is: " << name << endl;
    cout << "The hourly rate is: " << hourlyRate << endl;
  }
};

int main() {
  Employee A("Jose", 8.5);
  A.print();
  A.weeklyPay(40);
}
