#include "connect4.h"
#include <stdio.h>

void createBoard(char board[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                board[i][j] = ' ';
            }
        }
    }
}

void displayHeader(int columns) {
    printf("\n");
    int i;
    for (i = 0; i < columns; ++i) {
        printf("|%d", i + 1);
        if (i + 1 >= columns) {
            printf("|");
        }
    }