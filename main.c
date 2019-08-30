#include "drawing.h"
#include "pieces.h"

int main() {
    // Init ncurses and change a few ncurses settings
    initscr();
	start_color();
	curs_set(0);
	raw();
	noecho();
	init_pair(1, COLOR_BLACK, COLOR_YELLOW);
	init_pair(2, COLOR_BLACK, COLOR_BLUE);
	init_pair(3, COLOR_BLUE, COLOR_BLACK);

    // Define a couple more game-related variables
    unsigned short score = 0;
    unsigned short piece[4];
    set_piece(piece);

	// Figure out how many rows the game should have
	char total_rows = LINES - 2;
    unsigned short *rows = malloc(sizeof(short) * total_rows);
    if (rows == NULL) return 1;
	for (int i=0; i<total_rows; i++) rows[i] = 0;

    // Draw the border (no need to repeat this)
    draw_borders(total_rows);

    // Main game loop
    while (1) {
        for (int i=0; i<4; i++)
            rows[i] = piece[i];

        draw_blocks(rows, total_rows);
        draw_score(score, total_rows);

        char input = getch();
        if (input == 27) break;
        score = input;
        rotate_counter(piece);
    }

	// Cleanup
	endwin();
	free(rows);
	return 0;
}
