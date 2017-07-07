#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
  string name, address, phoneNumber, email;

public:
  virtual string toString() const
  {
    return "Person";
  }
};

class Student1 : public Person
{
private:
  int status;

public:
  string toString() const
  {
    return "Student";
  }
};

class MyDate
{
public:
  int day, month, year;
};

class Employee : public Person
{
protected:
  string office;
  int salary;
  MyDate dateHired;

public:
  string toString() const
  {
    return "Employee";
  }
};

class Faculty : public Employee
{
private:
  string officeHours;
  int rank;

public:
  string toString() const
  {
    return "Faculty";
  }
};

int main()
{
  Faculty f;
  Person p;
  Employee e;

  cout << f.toString() << endl;
  cout << p.toString() << endl;
  cout << e.toString() << endl;

  return 0;
}
