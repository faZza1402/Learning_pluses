//Вывод чисел Фибоначчи до указанного значения
//Макс. граница: 4 294 967 295 (Диапазон unsigned long)

#include <iostream>
using namespace std;
int main()
{
	unsigned long lim;
	
	cout << "Введите число в диапазоне от 0 до 4 294 967 295: ";
	cin >> lim;

	switch(lim >= 4294967295U)
	{	
		case 1:
			cout << "Число слишком большое. Попробуйте еще раз." << endl;	//На случай, если появится число больше положеной границы
			exit (0);
		case 0:
			unsigned long first = 0;	//Основная часть программы
			unsigned long next = 1;
			while (next < lim)
			{
				cout << next << ' ';
				unsigned long sum = next + first;
				first = next;
				next = sum;
			}
			break;
	}

	cout << endl;
	return 0;
}				
