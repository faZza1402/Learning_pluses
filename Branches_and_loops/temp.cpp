#include <iostream>
using namespace std;

int main()
{
	cout << "Для перевода шкалы Цельсия в шкалу Фаренгейт нажмите 1." << endl
		<< "Для перевода из шкалы Фаренгейт в шкалу Цельсия нажмите 2." << endl;

	char choice;
	float temp;
	cin >> choice;

	switch (choice)
	{
		case '1':
			cout << "Введите температуру по шкале Цельсия: ";
			cin >> temp;
			temp = temp * 1.8 + 32;

			cout << "Значение по шкале Фаренгейта: " << temp << endl;
			break;

		case '2':
			cout << "Введите температуру по шкале Фаренгейта: ";
			cin >> temp;
			temp = (temp - 32)/1.8;

			cout << "Значение по шкале Цельсия: " << temp << endl;
			break;

		default:
			cout << "Неизвестное значение. Попробуйте еще раз." << endl;
	}

	return 0;
}
