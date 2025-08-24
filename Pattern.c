#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int spc;
    int cnt = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            spc = 45;
        else
            spc = 35;
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < cnt; j++)
        {
            printf("%c", spc);
        }
        printf("\n");
        space--;
        cnt += 2;
    }

    cnt -= 4;
    space = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (spc == 45)
            spc = 35;
        else
            spc = 45;
        for (int i = 0; i < space; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < cnt; j++)
        {
            printf("%c", spc);
        }
        printf("\n");
        cnt -= 2;
        space++;
    }

    return 0;
}