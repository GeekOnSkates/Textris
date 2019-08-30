#include <ncurses.h>

#define TOTAL_LINES 19
#define LEFT_EDGE ((COLS / 2) - 12)

unsigned short rows[TOTAL_LINES];

void draw_borders() {
	attron(COLOR_PAIR(1));
	for (int i=0; i<TOTAL_LINES; i++) {
		mvaddstr(i, LEFT_EDGE, "  ");
		mvaddstr(i, LEFT_EDGE + 22, "  ");
	}
	mvaddstr(TOTAL_LINES, LEFT_EDGE, "                        ");
}

void draw_blocks() {
	for (int i=0; i<TOTAL_LINES; i++) {
		for (int j=0; j<10; j++) {
			unsigned short  x = 1 << j;
			if (rows[i] & x)
				attron(COLOR_PAIR(2));
			else attroff(COLOR_PAIR(2));
			mvaddstr(i, LEFT_EDGE + 2 + (j * 2), "  ");
		}
	}
}

int main() {
	for (int i=0; i<TOTAL_LINES; i++)
		rows[i] = 1 << i;
//	lines[12] = 6;
//	lines[13] = 12;

	initscr();
	start_color();
	curs_set(0);
	
	init_pair(1, COLOR_BLACK, COLOR_YELLOW);
	init_pair(2, COLOR_BLACK, COLOR_BLUE);
	
	draw_borders();
	draw_blocks();
	getch();
	curs_set(1);
	endwin();
	return 0;
}
