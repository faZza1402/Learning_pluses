#include <iostream>
using namespace std;
int main()
{
  cout << "Введите число галлонов: ";
  float gal;
  cin >>  gal;

  float cub_f = gal/7.481;
  cout << "Эквивалентный объем в кубических футах равен: "
       << cub_f << endl;
  return 0;
}
