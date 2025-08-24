#include <stdio.h>
int main()
{
    int n, fdig, ldig;
    scanf("%d", &n);
    fdig = n / 10;
    ldig = n % 10;
    if (ldig == 0 || fdig == 0)
    {
        printf("YES");
        return 0;
    }
    if ((fdig % ldig == 0 || ldig % fdig == 0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}