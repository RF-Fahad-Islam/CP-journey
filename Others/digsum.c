#include <stdio.h>
int main()
{
    int n = 143;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}