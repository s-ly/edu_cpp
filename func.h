#include <iostream>

class Arr {
 private:
  const int SIZE_DEFAULT = 1;
  int *data;
  int size;

 public:
  Arr();
  Arr(int size);
  ~Arr();
  
  // Конструктор копирования
  Arr(const Arr& other);

  void arrPrint();
  
  // Увеличивает размер массива
  void arrAdd(int cell);
};