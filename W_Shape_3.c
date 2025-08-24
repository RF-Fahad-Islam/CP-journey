#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * (i + 1) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    int stars = 2*n-1;
    int spaces = 0;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");
        spaces++;
        stars -= 2;
    }

    return 0;
}