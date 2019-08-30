#ifndef _PIECES_H
#define _PIECES_H

/*
1.    [][]
    [][]

2.    []
    [][][]

3.  [][][][]

4.  [][]
      [][]

5.  [][]
    [][]

6.  [][]
    []
    []

7.  [][]
      []
      []
*/
void rotate_clockwise(unsigned short *piece) {
    unsigned short temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;
    for (int i=0; i<4; i++) {
        if (piece[0] & 8) temp1 |= 8;
        if (piece[1] & 8) temp1 |= 4;
        if (piece[2] & 8) temp1 |= 2;
        if (piece[3] & 8) temp1 |= 1;
        if (piece[0] & 4) temp2 |= 8;
        if (piece[1] & 4) temp2 |= 4;
        if (piece[2] & 4) temp2 |= 2;
        if (piece[3] & 4) temp2 |= 1;
        if (piece[0] & 2) temp3 |= 8;
        if (piece[1] & 2) temp3 |= 4;
        if (piece[2] & 2) temp3 |= 2;
        if (piece[3] & 2) temp3 |= 1;
        if (piece[0] & 1) temp4 |= 8;
        if (piece[1] & 1) temp4 |= 4;
        if (piece[2] & 1) temp4 |= 2;
        if (piece[3] & 1) temp4 |= 1;
    }
    piece[0] = temp4;
    piece[1] = temp3;
    piece[2] = temp2;
    piece[3] = temp1;
}

void rotate_counter(unsigned short *piece) {
    unsigned short temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;
    for (int i=0; i<4; i++) {
        if (piece[0] & 8) temp1 |= 1;
        if (piece[1] & 8) temp1 |= 2;
        if (piece[2] & 8) temp1 |= 4;
        if (piece[3] & 8) temp1 |= 8;
        if (piece[0] & 4) temp2 |= 1;
        if (piece[1] & 4) temp2 |= 2;
        if (piece[2] & 4) temp2 |= 4;
        if (piece[3] & 4) temp2 |= 8;
        if (piece[0] & 2) temp3 |= 1;
        if (piece[1] & 2) temp3 |= 2;
        if (piece[2] & 2) temp3 |= 4;
        if (piece[3] & 2) temp3 |= 8;
        if (piece[0] & 1) temp4 |= 1;
        if (piece[1] & 1) temp4 |= 2;
        if (piece[2] & 1) temp4 |= 4;
        if (piece[3] & 1) temp4 |= 8;
    }
    piece[0] = temp1;
    piece[1] = temp2;
    piece[2] = temp3;
    piece[3] = temp4;
}

void set_piece(unsigned short *piece, char pieceID) {
    if (pieceID == 1) {
        piece[0] = 0; piece[1] = 6;
        piece[2] = 12; piece[3] = 0;
    }
    else if (pieceID == 2) {
        piece[0] = 0; piece[1] = 2;
        piece[2] = 7; piece[3] = 0;
    }
    else if (pieceID == 3) {
        piece[0] = 0; piece[1] = 0;
        piece[2] = 15; piece[3] = 0;
    }
    else if (pieceID == 4) {
        piece[0] = 0; piece[1] = 6;
        piece[2] = 3; piece[3] = 0;
    }
    else if (pieceID == 5) {
        piece[0] = 0; piece[1] = 6;
        piece[2] = 6; piece[3] = 0;
    }
    else if (pieceID == 6) {
        piece[0] = 0; piece[1] = 6;
        piece[2] = 4; piece[3] = 4;
    }
    else {
        piece[0] = 0; piece[1] = 6;
        piece[2] = 2; piece[3] = 2;
    }
}

#endif
