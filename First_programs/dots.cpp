#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << "City" << setw(16) << "Population\n"
       << "Москва" << setfill('.') << setw(13) << 8425785 << endl
       << "Киров" << setw(14) << 47 << endl
       << "Угрюмовка" << setw(10) <<  9761 << endl;
  return 0;
}
