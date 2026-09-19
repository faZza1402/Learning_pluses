#include <iostream>
using namespace std;
int main()
{
  float pounds, shillings, pens;
 
  cout << "Введите количество фунтов: ";
    cin >> pounds;
  cout << "Введите количество шиллингов: ";
    cin >> shillings;
  cout << "Введите количество пенсов: ";
    cin >> pens;

  pens += shillings * 12;
  pens /= 240;

  cout << "Десятичных фунтов: " << "£" << pounds+pens << endl;
  return 0;
}
