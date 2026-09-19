#include <ncursesw/ncurses.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "");
	initscr();
	cbreak();

	int dig = 0, number = 0;

	printw("Введите число: "); refresh();

	for (int i = 0; i < 6; i++)
	{
		dig = getch();
		number = number * 10 + (dig - '0');
		}
	
	printw("\nВы ввели число %d", number); refresh();

	getch();
	endwin();

	return 0;
}

