#include <iostream>
using namespace std; // что бы отключить приставку std::
int main() { 

int a = 1;
int b = 0;
  for (int i = 1; i <= 5; i++) // задаю кол-во проходов
    {
   cout << b << ""; // вывожу числа
     int c = a + b;
      a = b;
      b = c;
    }
}