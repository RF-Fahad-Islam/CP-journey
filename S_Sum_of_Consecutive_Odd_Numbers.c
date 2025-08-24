#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int first, last, temp, sum = 0;
        scanf("%d %d", &first, &last);
        if (last < first)
        {
            temp = first;
            first = last;
            last = temp;
        }; // swap first and last on basis of value
        for (int j = first + 1; j < last; j++)
        {
            if (j % 2 != 0)
                sum += j;
        }
        printf("%d\n", sum);
    }

    return 0;
}