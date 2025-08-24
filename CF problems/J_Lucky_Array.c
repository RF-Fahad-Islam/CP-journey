#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = 1000000;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (min > arr[i])
            min = arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
            cnt++;
    }

    if (cnt % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}