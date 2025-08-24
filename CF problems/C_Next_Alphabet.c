#include <stdio.h>
int main()
{
    char alpha;
    scanf("%c", &alpha);
    if (alpha == 122)
    {
        printf("%c",97);
    }
    else
    {
        printf("%c", alpha + 1);
    }

    return 0;
}