#include <iostream>

class MyClass {
 public:
  MyClass() {}
  MyClass(int x) : myVar1(x) {}
  MyClass(int x, int y) : myVar1(x), myVar2(y) {}

  // конструктор копирования
  MyClass(const MyClass& other) : myVar1(other.myVar1), myVar2(other.myVar2) {}

  ~MyClass() {}

  void setVar(int value) { myVar1 = value; }
  void setVar(int value1, int value2) {
    myVar1 = value1;
    myVar2 = value2;
  }

  MyClass operator+(const MyClass& rhs) const {
    return MyClass(myVar1 + rhs.myVar1, myVar2 + rhs.myVar2);
  }

  int getVar() { return myVar1; }
  int getVar(int select) {
    int myVar;
    if (select == 1) {
      myVar = myVar1;
    } else if (select == 2) {
      myVar = myVar2;
    } else {
      myVar = myVar1;
    }
    return myVar;
  }

 private:
  int myVar1;
  int myVar2;
};

int main() {
  MyClass obj1(11, 12);

  MyClass obj2(obj1);

  std::cout << "Value: " << obj1.getVar(1) << ", " << obj1.getVar(2)
            << std::endl;

  std::cout << "Value: " << obj2.getVar(1) << ", " << obj2.getVar(2)
            << std::endl;

  return 0;
}