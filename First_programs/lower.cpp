#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
  char ch;
  cout << "Введите символ: ";
  cin >> ch;
  cout << "Ваше значение: " << islower(ch) << endl;
  return 0;
}
