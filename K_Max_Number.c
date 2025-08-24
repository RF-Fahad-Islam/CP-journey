#include <stdio.h>
int max_find(int arr[], int i, int n,int max)
{
    if (i == n)
    return max;
    if (max < arr[i])
        max = arr[i];
    i++;
    max_find(arr, i, n,max);
}

int main()
{
    int n;
    int max = -1000000000;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max2 = max_find(arr, 0, n,max);
    printf("%d", max2);

    return 0;
}