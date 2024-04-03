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
    for (int i = 0; i < columns; ++i) {
        printf("|%i", i + 1);
        if (i + 1 >= columns) {
            printf("|");
        }
    }
}
void displayBoard(char board[ROWS][COLUMNS]) {
    displayHeader(COLUMNS);
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("|");
        for (int j = 0; j < COLUMNS; j++) {
            printf("%c|", board[i][j]);
        }
        printf("\n");
    }
}

void clearBoard(char board[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            board[i][j] = ' ';
        }
    }
}


int main() {
    char board[ROWS][COLUMNS];
    createBoard(board);
    displayBoard(board);
    return 0;
}