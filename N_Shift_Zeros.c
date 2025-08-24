#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int zerocnt = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
            zerocnt++;
    }
    for (int j = 0; j < zerocnt; j++)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 0)
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}