#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // testcase
        int size;
        scanf("%d", &size);
        int arr[size];
        int arr2[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
            arr2[i] = arr[i];
        }

        int temp;
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr2[i] > arr2[j])
                {
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            int res = arr2[i] - arr[i];
            printf("%d ", abs(res));
        }
        printf("\n");
    }

    return 0;
}