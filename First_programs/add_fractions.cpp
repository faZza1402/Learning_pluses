#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  char del;
  cout << "Введите первую дробь: ";
  cin >> a >> del >> b;
  
  cout << "Введите вторую дробь: ";
  cin >> c >> del >> d;

  int chis = a*d + b*c;
  int znam = b*d;

  cout << "Сумма равна: " << chis << del << znam << endl;
  return 0;
}
