#include <iostream>
using namespace std;

class Account {
  public:
    Account() {
      id = 0;
      balance = 0;
      annualInterestRate = 0;
    }

    Account(int i, double bal, double rate) {
      id = i;
      balance = bal;
      annualInterestRate = rate;
    }
  // Set (mutator) and get (accessor) functions
    void setId(int i) {
      id = i;
    }
    void setBalance(double b) {
      balance = b;
    }
    void setAnnualInterestRate(double a) {
      annualInterestRate = a;
    }
    double getMonthlyInterestRate() {
      double monthlyInterestRate = annualInterestRate / 1200;
      return monthlyInterestRate;
    }
    double getBalance() {
      return balance;
    }
    int getId() {
      return id;
    }
    void withdraw(double amount) {
      if (amount > balance) {
        cout << "Sorry you have an insufficient balance\n";
      } else {
        balance = balance - amount;
      }
    }

    void deposit(double amount) {
      balance = balance + amount;
    }

  private:
    int id;
    double balance;
    double annualInterestRate;
};


int main() {
  int id = 1122;
  double balance = 20000;
  double annualInterestRate = 4.5;
  Account a(id, balance, annualInterestRate);
  cout << endl << "After your withdraw $2500. ";
  a.withdraw(2500);
  cout << "Balance is: $" << a.getBalance();
  a.deposit(3000);
  cout << endl;
  cout << "After your deposit of $3000. Your balance is: $" << a.getBalance();
  cout << endl;
  cout << "The monthly interest rate is: " << a.getMonthlyInterestRate() << endl;
}
