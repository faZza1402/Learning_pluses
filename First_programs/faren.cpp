#include <iostream>
using namespace std;
int main()
{
  int ftemp;
  cout << "Введите температуру по Фаренгейту\n";
  cin >> ftemp;
  int ctemp = (ftemp - 32) * 5 / 9;
  cout << "Температура по Цельсию равна ";
  cout << ctemp << endl;
  return 0;
}
