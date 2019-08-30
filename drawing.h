#ifndef _DRAWING_H
#define _DRAWING_H

#include <stdlib.h>
#include <ncurses.h>

#define LEFT_EDGE ((COLS / 2) - 12)

void draw_borders(unsigned short total_rows) {
	attron(COLOR_PAIR(1));
	for (int i=0; i<total_rows; i++) {
		mvaddstr(i, LEFT_EDGE, "  ");
		mvaddstr(i, LEFT_EDGE + 22, "  ");
	}
	mvaddstr(total_rows, LEFT_EDGE, "                        ");
}

void draw_blocks(unsigned int *rows, unsigned short total_rows) {
	for (int i=0; i<total_rows; i++) {
		for (int j=0; j<10; j++) {
			if (rows[i] & (1 << j))
				attron(COLOR_PAIR(2));
			else attroff(COLOR_PAIR(2));
			mvaddstr(i, LEFT_EDGE + 2 + (j * 2), "  ");
		}
	}
}

#endif
