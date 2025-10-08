#include <stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(long long int *)a - *(long long int *)b);
}
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    long long int arr[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // sort asc
    qsort(arr, n, sizeof(long long int), cmpfunc);

    while (m--)
    {
        long long int s;
        scanf("%lld", &s);
        int found = 0;
        int l = 0, r = n - 1;
        int mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (arr[mid] > s)
            {
                r = mid - 1;
            }
            else if (arr[mid] < s)
            {
                l = mid + 1;
            }
            else
            {
                found++;
                break;
            }
        }
        if (found)
            printf("Found\n");
        else
            printf("Not Found\n");
    }

    return 0;
}