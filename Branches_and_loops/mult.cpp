#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Введите число: ";
	cin >> n;

	for (int i = 1; i <= 200; i += 10)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << (i+j)*n;
			}
		cout << endl;
		}

	return 0;
}
