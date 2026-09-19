#include <iostream>
using namespace std;
int main()
{
  float temp;
  cout << "Введите значение температуры в градусах Цельсия: ";
  cin >> temp;
  temp = temp * 9/5 + 32;
  cout << "Температура в Фаренгейтах: " << temp << endl;
  return 0;
}

