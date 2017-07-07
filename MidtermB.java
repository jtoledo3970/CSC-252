import java.util.Scanner;

public class EvenNumberTest {
  public static void main(String[] args) {
    EvenNumber test = new EvenNumber(16);
    test.
  }
}

class EvenNumber {
  private int objectValue;
  public EvenNumber () {
    this.objectValue = 0;
  }
  public EvenNumber(int value) {
    this.objectValue = value;
  }
  public int getValue() {
    return objectValue;
  }
  public int getNext() {
    int test = objectValue++;
    for (int i = 0; i <= 2; i++) {
      if (test % 2 != 0) {
        test++;
      } else if (test % 2 == 0) {
        return test;
      }
    }
  }
  public int getPrevious() {
    int test = objectValue--;
    for (int i = 0; i <= 2; i++) {
      if (test % 2 != 0) {
        test--;
      } else if (test % 2 == 0) {
        return test;
      }
    }
  }
}
