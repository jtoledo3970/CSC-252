#include <iostream>
using namespace std;

const int RIGHTBOUNDARY=26;
const int LEFTBOUNDARY=0;
const int TOPBOUNDARY=26;
const int BOTTOMBOUNDARY=0;
char grid[26][26] = {
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}
};

class Robot {
public:
  Robot();
  Robot(int x, int y, char pay);
  void setX(int x);
  void setY(int y);
  void setPayload(char pay);
  int getX() const;
  int getY() const;
  char getPayload() const;
  void print() const;
  bool pickUp(int lx, int ly);
  bool dropOff(int lx, int ly);
  void moveRight();
  void moveLeft();
  void moveUp();
  void moveDown();
  bool moveTo(int lx, int ly);
private:
  int x, y;
  char payload;
};

Robot::Robot() {
  x = 0;
  y = 0;
  payload = ' ';
}

Robot::Robot(int x, int y, char pay) : x(x), y(y), payload(pay) {}

void Robot::setX(int x) {
  x = x;
}

void Robot::setY(int y) {
  y = y;
}

void Robot::setPayload(char pay) {
  payload = pay;
}

int Robot::getX() const {
  return x;
}

int Robot::getY() const {
  return y;
}

char Robot::getPayload() const {
  return payload;
}

void Robot::print() const {
  cout << "Your robot is located at (" << getX() << ", " << getY() << ") with a payload of " << getPayload() << endl;
}

bool Robot::pickUp(int lx, int ly) {
  int tempX, tempY;
  tempX = getX();
  tempY = getY();
  if (tempX != lx && tempY != ly) {
    cout << "Robot not at (lx, ly)" << endl;
    return false;
  }
  if (grid[lx][ly] == ' ') {
    cout << "There is no load at this location\n";
    return false;
  }
  if (getPayload() == ' ') {
    payload = grid[lx][ly];
    grid[lx][ly] = ' ';
    return true;
  }
}

bool Robot::dropOff(int lx, int ly) {
  int tempX, tempY;
  tempX = getX();
  tempY = getY();
  if (tempX != lx && tempY != ly) {
    cout << "Robot not at (lx, ly)" << endl;
    return false;
  }
  if (getPayload() != ' ') {
    grid[lx][ly] = getPayload();
    payload = ' ';
    return true;
  }
}

void Robot::moveRight() {
  int temp = getX();
  temp++;
  if (temp > RIGHTBOUNDARY) {
    cout << "Right boundary reached" << endl;
  } else {
    x = temp;
  }
}

void Robot::moveLeft() {
  int temp = getX();
  temp--;
  if (temp < LEFTBOUNDARY) {
    cout << "Left boundary reached" << endl;
  } else {
    x = temp;
  }
}

void Robot::moveUp() {
  int temp = getY();
  temp++;
  if (temp > TOPBOUNDARY) {
    cout << "Top boundary reached" << endl;
  } else {
    y = temp;
  }
}

void Robot::moveDown() {
  int temp = getY();
  temp--;
  if (temp < BOTTOMBOUNDARY) {
    cout << "Bottom boundary reached" << endl;
  } else {
    y = temp;
  }
}

bool Robot::moveTo(int lx, int ly) {
  if (lx > LEFTBOUNDARY && lx < RIGHTBOUNDARY && ly > BOTTOMBOUNDARY && ly < TOPBOUNDARY) {
    int tempX, tempY;
    tempX = getX();
    tempY = getY();
    int tempXMove, tempYMove;

    if (lx < tempX) {
      tempXMove = tempX - lx;
      for (int i = 0; i < tempXMove; i++) {
        moveLeft();
      }
    } else if (lx > tempX) {
      tempXMove = lx - tempX;
      for (int i = 0; i < tempXMove; i++) {
        moveRight();
      }
    }

    if (ly < tempY) {
      tempYMove = tempY - ly;
      for (int i = 0; i < tempYMove; i++) {
        moveDown();
      }
    } else if (ly > tempY) {
      tempYMove = ly - tempY;
      for (int i = 0; i < tempYMove; i++) {
        moveUp();
      }
    }
    return true;
  } else {
    return false;
  }
}

void print2D(char a[26][26]) {
    cout << "------------------------------------------------------" << endl;

    for(int i = 0;  i < 26; ++i)
    {
        cout << "|";
        for(int j = 0; j < 26; ++j)
        {
            cout << a[i][j] << "|";
        }
        cout << endl;
        cout << "------------------------------------------------------" << endl;
    }
}

int main() {
  grid[10][8] = 'B';
  print2D(grid);
  Robot R1;
  Robot R2(0, 0, ' ');
  R1.print();
  R2.print();
  R1.moveTo(25, 26);
  R2.moveTo(15, 32);
  R1.print();
  R2.print();
  R1.pickUp(10,8);
  R1.moveTo(20,20);
  R1.print();
  R2.print();
  R2.pickUp(22,45);
  R2.moveTo(0,0);
  R1.print();
  R2.print();
  print2D(grid);
}
