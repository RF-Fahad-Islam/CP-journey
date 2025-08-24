#include <stdio.h>
int main()
{
    int n, stars = 1;
    scanf("%d", &n);
    int lines = 6 + (n / 2);
    int spaces = lines - 1;
    for (int i = 0; i < lines; i++)
    {
        for (int i = 0; i < spaces; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        spaces--;
        stars += 2;
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}