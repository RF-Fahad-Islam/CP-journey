#include <stdio.h>
char c1 = '1', c2 = '2', c3 = '3', c4 = '4', c5 = '5', c6 = '6', c7 = '7', c8 = '8', c9 = '9';

int checkWinCases()
{
    if (
        (c1 == c2 && c2 == c3) || (c4 == c5 && c5 == c6) || (c7 == c8 && c8 == c9) ||
        (c1 == c4 && c4 == c7) || (c2 == c5 && c5 == c8) || (c3 == c6 && c6 == c9) ||
        (c1 == c5 && c5 == c9) || (c3 == c5 && c5 == c7))
        return 1;
    else
        return 0;
}

void printBoard()
{
    printf("--BOARD---\n");
    printf("\n| %c | %c | %c |\n---------------\n", c1, c2, c3);
    printf("| %c | %c | %c |\n---------------\n", c4, c5, c6);
    printf("| %c | %c | %c |\n", c7, c8, c9);
}

int markBoard(char player, int cno)
{
    if (cno == 1 && c1 == '1')
        c1 = player;
    else if (cno == 2 && c2 == '2')
        c2 = player;
    else if (cno == 3 && c3 == '3')
        c3 = player;
    else if (cno == 4 && c4 == '4')
        c4 = player;
    else if (cno == 5 && c5 == '5')
        c5 = player;
    else if (cno == 6 && c6 == '6')
        c6 = player;
    else if (cno == 7 && c7 == '7')
        c7 = player;
    else if (cno == 8 && c8 == '8')
        c8 = player;
    else if (cno == 9 && c9 == '9')
        c9 = player;
    else
        return 0; // invalid
    return 1;
}

int playerMove(int cno)
{
    return markBoard('X', cno);
}

int findWinChances()
{
    // find the chances to win or tackle
    if ((c1 == c2 || c6 == c9 || c5 == c7) && c3 == '3')
        return 3;
    else if ((c2 == c3 || c5 == c9 || c4 == c7) && c1 == '1')
        return 1;
    else if ((c3 == c1 || c5 == c8) && c2 == '2')
        return 2;
    else if ((c5 == c6 || c1 == c7) && c4 == '4')
        return 4;
    else if ((c4 == c6 || c2 == c8) && c5 == '5')
        return 5;
    else if ((c4 == c5 || c3 == c9) && c6 == '6')
        return 6;
    else if ((c8 == c9 || c1 == c4 || c5 == c3) && c7 == '7')
        return 7;
    else if ((c7 == c9 || c2 == c5) && c8 == '8')
        return 8;
    else if ((c7 == c8 || c3 == c6 || c5 == c1) && c9 == '9')
        return 9;
    else
        return 0;
}

void computerMove()
{
    // defence and win system
    int findWinPoint = findWinChances();
    if (findWinPoint)
        markBoard('O', findWinPoint);
    else
    {
        // Normal moves
        if (c1 == '1')
            c1 = 'O';
        else if (c2 == '2')
            c2 = 'O';
        else if (c3 == '3')
            c3 = 'O';
        else if (c4 == '4')
            c4 = 'O';
        else if (c5 == '5')
            c5 = 'O';
        else if (c6 == '6')
            c6 = 'O';
        else if (c7 == '7')
            c7 = 'O';
        else if (c8 == '8')
            c8 = 'O';
        else if (c9 == '9')
            c9 = 'O';
    }
}

int main()
{
    int turn = 1; // if even - bot , odd - player
    printBoard();
    while (1)
    {
        int cno, isvalid = 1;

        if (turn % 2 != 0)
        {
            printf("Player Move (X) : ");
            scanf("%d", &cno);
            isvalid = playerMove(cno); // moves and checks validity of move
            if (!isvalid)
            {
                printf("Invalid Move\n");
                continue;
            }
            printBoard();
        }
        else
        {
            computerMove();
            printf("Bot Move (O)\n");
            printBoard();
        }

        if (checkWinCases() == 1)
        {
            if (turn % 2 == 0)
                printf("Computer Wins !"); // even turn
            else
                printf("Player Wins !");
            printf("\n");
            printBoard();
            break;
        }
        
        if (checkWinCases() == 0 && turn > 9)
        {
            printf("Draw!");
            break;
        }
        turn++;
    }
    return 0;
}