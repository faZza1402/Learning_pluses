#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << setiosflags(ios::left) << setw(10) << "Surname"
       << setw(10) << "Name" << setw(14) << "Address"
       << setw(22) << "City" << endl
       << "---------------------------------------------------" << endl
       << setw(10) << "Petrov" << setw(10) << "Vasiliy" << setw(14)
       << "Klenovaya 16" << setw(22) << "St.Petersburg" << endl
       << setw(10) << "Ivanov" << setw(10) << "Sergey" << setw(14)
       << "Osinovaya 3" << setw(22) << "Nahodka" << endl
       << setw(10) << "Sidorov" << setw(10) << "Ivan" << setw(14)
       << "Berezovaya 21" << setw(22) << "Kaliningrad" << endl;
   return 0;
}
