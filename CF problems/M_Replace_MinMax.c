#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    // Find MAX and MIN
    int min = 1000000, max = -1000000, mxid = 0, minid = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minid = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            mxid = i;
        }
    }

    // SWAP MAX-MIN
    arr[mxid] = min;
    arr[minid] = max;

    // Print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}