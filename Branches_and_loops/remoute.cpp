#include <ncursesw/ncurses.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();

	printw ("Начало координат (0;0). Для передвижения используйте w, a, s, d. Нажмите Enter, чтобы завершить передвижение.\n");
	refresh();

	int x = 0, y = 0;
	char ch = getch();

	while (ch != '\n')
	{
		switch(ch)
		{
			case 'w': ++y;
				  printw("Шаг прямо\n"); refresh();
				  break;

			case 's': --y;
				  printw("Шаг назад\n"); refresh();
				  break;

			case 'd': ++x;
				  printw("Шаг вправо\n"); refresh();
				  break;

			case 'a': --x;
				  printw("Шаг налево\n"); refresh();
				  break;

			case '\n': printw("...\n"); refresh();
				   break;

			default: printw("Попробуйте еще раз.\n"); refresh();
				 break;
		}
		ch = getch();
	}
	
	printw("Ваши координаты (%d;%d).\n", x, y);
	refresh();
	
	printw("Для выхода нажмите Enter.\n");
	refresh();

	ch = getch();
	if (ch == '\n') 
	{
		endwin();
		return 0;
	}
}

