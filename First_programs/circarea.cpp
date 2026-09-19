#include <iostream>
using namespace std;
int main()
{
  const float PI = 3.14159F;
  float rad;
  cout << "Введите радиус окружности: ";
  cin >> rad;
  float sq = PI * rad * rad;
  cout << "Площадь окружности равна: ";
  cout << sq << endl;
  return 0;
}
