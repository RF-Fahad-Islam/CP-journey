#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int a, b, c, d;
        long long int res;
        scanf("%lld %lld %lld %lld", &res, &a, &b, &c);
        long long int prod = a * b * c;

        if (res != 0 && prod != 0 && res % prod == 0)
        {
            d = res / prod;
        }
        else if (res == 0)
        {
            d = 0;
        }

        else
        {
            d = -1;
        }
        printf("%lld\n", d);
    }

    return 0;
}