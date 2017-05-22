#include <iostream>
#include <ctime>
using namespace std;

class Time {
  public:
    Time() [

    ]
    double getHour() {
      return hour;
    }
    double getMinute() {
      return minute;
    }
    double getSecond() {
      return second;
    }
    void setTime(int elapsedTime){
      
    }
  private:
    double hour, minute, second;
};

int main() {
  Time time1 (time(0));

}
