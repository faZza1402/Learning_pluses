#include <iostream>
using namespace std;
int main()
{
  char ch;
  int pounds, shillings, pens;
  
  cout << "Введите количество десятичных фунтов: ";
  cin >> pounds >> ch >> pens;

  pens *= 240;
  shillings = pens * 0.01 /12;
  pens = (pens/12 % 100)/10;

  cout << "Эквивалентная сумма в старой форме: " << "£" << pounds
       << ch << shillings << ch << pens << endl;
  return 0;
}
