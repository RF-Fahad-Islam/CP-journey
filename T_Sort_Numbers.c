#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void asc(int arr[])
{
    int arr1[3];
    for (int i = 0; i < 3; i++)
    {
        arr1[i] = arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr1[i] > arr1[j])
                swap(arr1, i, j);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr1[i]);
    }
}

int main()
{
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    asc(arr);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}