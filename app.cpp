#include <iostream>

class MyClass {
 public:
  MyClass(int x) : myVar(x) { std::cout << "Constructor" << std::endl; }
  MyClass() { std::cout << "Constructor" << std::endl; }
  ~MyClass() { std::cout << "Destructor" << std::endl; }
  void setVar(int value) { myVar = value; }
  int getVar() { return myVar; }

 private:
  int myVar;
};

int main() {
  std::cout << "Hi!" << std::endl;
  MyClass obj1;
  obj1.setVar(42);
  MyClass obj2(10);
  std::cout << "Value: " << obj1.getVar() << std::endl;
  std::cout << "Value: " << obj2.getVar() << std::endl;
  return 0;
}