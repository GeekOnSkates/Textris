#include <stdio.h>
#include "drawing.h"

int main() {
    initscr();
	start_color();
	curs_set(0);
	init_pair(1, COLOR_BLACK, COLOR_YELLOW);
	init_pair(2, COLOR_BLACK, COLOR_BLUE);

	char total_rows = LINES - 2;

    unsigned int *rows = malloc(sizeof(short) * total_rows);
    if (rows == NULL) return 1;

	for (int i=0; i<total_rows; i++)
		rows[i] = 1 << i;


	draw_borders(total_rows);
	draw_blocks(rows, total_rows);

	getch();
	curs_set(1);
	endwin();
	free(rows);
	return 0;
}
