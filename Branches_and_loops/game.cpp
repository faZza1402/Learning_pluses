#include <ncursesw/ncurses.h>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "");
	initscr();
	cbreak();
	noecho();

	printw("Добро пожаловать в игру! Ваша цель - найти клад.\nБудьте осторожны с драконами. Собирайте грибы, чтобы становиться сильнее.\n");
	printw("-------------------------------------------------------------------------\n");
	printw("Для перемещения используйте W, A, S, D. Чтобы выйти нажмите Enter.\nВаши координаты (0;0)\n");

	char ch = getch();
	int x = 0, y = 0, mush = 0;
	bool m1 = 1, m2 = 1, m3 = 1,
	     d1 = 1, d2 = 1, d3 = 1;

	while (ch != '\n')
	{
		clear();

		switch(ch)	//Перемещение
		{
			case 'w': ++y;
				  printw("Шаг прямо. Ваши координаты (%d;%d). Собрано грибов: %d. \n", x, y, mush);
				  break;

			case 's': --y;
				  printw("Шаг назад. Ваши координаты (%d;%d). Собрано грибов: %d. \n", x, y, mush);
				  break;

			case 'd': ++x;
				  printw("Шаг направо. Ваши координаты (%d;%d). Собрано грибов: %d. \n", x, y, mush);
				  break;

			case 'a': --x;
				  printw("Шаг налево. Ваши координаты (%d;%d). Собрано грибов: %d. \n", x, y, mush);
				  break;

			case '\n': printw("Выход...\n");
			 	   break;

			default: break;	   
			}

		if ((x == 9) && (y == 18))	//Клад
		{
			clear();
			printw("Поздравляем! Вы нашли клад!\n");
			ch = '\n';
			continue;
			}
		
		if ((x == 12) && (y == 13) && (m1 == 1))	//Грибы
		{
			clear();
			++mush;
			printw("Вы нашли гриб.\nВаши координаты (%d;%d). Собрано грибов: %d.\n", x, y, mush);
			m1 = 0;
			}

		if ((x == 16) && (y == 16) && (m2 == 1))	
		{
			clear();
			++mush;
			printw("Вы нашли гриб.\nВаши координаты (%d;%d). Собрано грибов: %d.\n", x, y, mush);
			m2 = 0;
			}
			
		if ((x == -7) && (y == -13) && (m3 == 1))	
		{
			clear();
			++mush;
			printw("Вы нашли гриб.\nВаши координаты (%d;%d). Собрано грибов: %d.\n", x, y, mush);
			m3 = 0;
			}

		if ((x == 17) && (y == 15) && (d1 == 1))	//Драконы
		{
			clear();
		       if (mush > 0)
		       {
				--mush;
				printw("Дракон убит.\nВаши координаты (%d;%d). Собрано грибов: %d.\n", x, y, mush);
				d1 = 0;
				}
		       else
		       {
			       printw("Вы убиты драконом.\n");
			       ch = '\n';
			       continue;
			       }

		}

		if ((x == 18) && (y == -17) && (d2 == 1))	
		{
			clear();
		       if (mush > 0)
		       {
				--mush;
				printw("Дракон убит.\nВаши координаты (%d;%d). Собрано грибов: %d.\n", x, y, mush);
				d2 = 0;
				}
			else
		       {
			       printw("Вы убиты драконом.\n");
			       ch = '\n';
			       continue;
       				}
		}	

		if ((x == -15) && (y == -18) && (d3 == 1))	
		{
			clear();
		       if (mush > 0)
		       {
				--mush;
				printw("Дракон убит.\nВаши координаты (%d;%d). Собрано грибов: %d.\n", x, y, mush);
				d3 = 0;
				}
		       else
		       {
			       printw("Вы убиты драконом.\n");
			       ch = '\n';
			       continue;
				}

		}
			
		ch = getch();
	}

	printw("\nИгра окончена. Ваши координаты (%d;%d).\n", x, y);
        printw("Для выхода нажмите любую клавишу.\n");

	getch();

	endwin();
	return 0;
}

