//Вводится число, от этого числа до единицы 
//выводятся эти числа и их кубы

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int numb;
  cout << "Введите число: ";
  cin >> numb;
  
  for (int i = numb; i >= 0; i--)
    {
      cout << setw(5) << i << setw(8) 
           << i * i * i << endl;
    }

  return 0;
}
