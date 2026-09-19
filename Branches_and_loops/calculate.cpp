#include <ncursesw/ncurses.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	
	char ch = '0';

	while (ch != 'n')
	{
		float n1 = 0, n2 = 0, result = 0;

		printw("\nВведите выражение без пробелов: "); refresh();
		ch = getch();

		while (('0' <= ch ) && (ch <= '9'))
		{
			n1 = n1 * 10 + (ch - '0');
			ch = getch();
			}

		switch(ch)
		{
			case '+':
				ch = getch();
				while (('0' <= ch) && (ch <= '9'))
				{
					n2 = n2 * 10 + (ch - '0');
					ch = getch();
					}
				result = n1 + n2;
				break;

			case '-':
				ch = getch();
				while (('0' <= ch) && (ch <= '9'))
				{
					n2 = n2 * 10 + (ch - '0');
					ch = getch();
					}
				result = n1 - n2;
				break;
			
			case '*':
				ch = getch();
				while (('0' <= ch) && (ch <= '9'))
				{
					n2 = n2 * 10 + (ch - '0');
					ch = getch();
					}
				result = n1 * n2;
				break;
			
			case '/':
				ch = getch();
				while (('0' <= ch) && (ch <= '9'))
				{
					n2 = n2 * 10 + (ch - '0');
					ch = getch();
					}
				result = n1 / n2;
				break;

			case '\n': break;
			
			default:
				printw("\nНеизвестный оператор. Попробуйте еще раз.\n"); refresh();
				continue;
				}

		printw("Результат равен %f.\nВыполнить еще одну операцию? (y/n) " , result); refresh();
		ch = getch();

		while ((ch != 'y') && (ch != 'n'))
		{
			printw("\nНеизвестное значение. Попробуйте еще раз. ");
			ch = getch();
			}	
	
	}
	endwin();
	return 0;
}
