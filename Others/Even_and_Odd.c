#include <stdio.h>

void odd_even(int arr[], int n)
{
    int odd_cnt = 0, even_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even_cnt++;
        else
            odd_cnt++;
    }
    printf("%d %d", even_cnt, odd_cnt);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    odd_even(arr, n);
    return 0;
}