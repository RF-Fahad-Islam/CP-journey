#include <stdio.h>

char pos1 = '1', pos2 = '2', pos3 = '3';
char pos4 = '4', pos5 = '5', pos6 = '6';
char pos7 = '7', pos8 = '8', pos9 = '9';

void printBoard() {
    printf("\nCurrent Board:\n");
    printf(" %c | %c | %c\n", pos1, pos2, pos3);
    printf("-----------\n");
    printf(" %c | %c | %c\n", pos4, pos5, pos6);
    printf("-----------\n");
    printf(" %c | %c | %c\n", pos7, pos8, pos9);
}

int checkWin() {
    // All winning conditions
    if (pos1 == pos2 && pos2 == pos3) return 1;
    if (pos4 == pos5 && pos5 == pos6) return 1;
    if (pos7 == pos8 && pos8 == pos9) return 1;
    if (pos1 == pos4 && pos4 == pos7) return 1;
    if (pos2 == pos5 && pos5 == pos8) return 1;
    if (pos3 == pos6 && pos6 == pos9) return 1;
    if (pos1 == pos5 && pos5 == pos9) return 1;
    if (pos3 == pos5 && pos5 == pos7) return 1;
    return 0;
}

void botMove() {
    // Always choose the lowest-numbered available position
    if (pos1 == '1') pos1 = 'O';
    else if (pos2 == '2') pos2 = 'O';
    else if (pos3 == '3') pos3 = 'O';
    else if (pos4 == '4') pos4 = 'O';
    else if (pos5 == '5') pos5 = 'O';
    else if (pos6 == '6') pos6 = 'O';
    else if (pos7 == '7') pos7 = 'O';
    else if (pos8 == '8') pos8 = 'O';
    else if (pos9 == '9') pos9 = 'O';
}

int main() {
    int move, turn = 0; // turn even = player, odd = bot

    printBoard();

    while (1) {
        if (turn % 2 == 0) {
            printf("\nYour move (X): ");
            scanf("%d", &move);
            if (move == 1 && pos1 == '1') pos1 = 'X';
            else if (move == 2 && pos2 == '2') pos2 = 'X';
            else if (move == 3 && pos3 == '3') pos3 = 'X';
            else if (move == 4 && pos4 == '4') pos4 = 'X';
            else if (move == 5 && pos5 == '5') pos5 = 'X';
            else if (move == 6 && pos6 == '6') pos6 = 'X';
            else if (move == 7 && pos7 == '7') pos7 = 'X';
            else if (move == 8 && pos8 == '8') pos8 = 'X';
            else if (move == 9 && pos9 == '9') pos9 = 'X';
            else {
                printf("Invalid move. Try again.\n");
                continue;
            }
        } else {
            printf("\nBot's move (O):\n");
            botMove();
        }

        printBoard();

        if (checkWin()) {
            if (turn % 2 == 0) printf("\nYou win!\n");
            else printf("\nBot wins!\n");
            break;
        }

        if (turn == 8 ) {
            printf("\nIt's a draw!\n");
            break;
        }

        turn++;
    }

    return 0;
}