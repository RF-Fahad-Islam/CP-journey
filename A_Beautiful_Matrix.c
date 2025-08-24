#include <stdio.h>
int main()
{
    int n = 5;
    int arr[n][n];
    int index_of_1_i = 0, index_of_1_j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                index_of_1_i = i;
                index_of_1_j = j;
            }
        }
    }

    int diff_i = abs(index_of_1_i - 2);
    int diff_j = abs(index_of_1_j - 2);

    printf("%d", diff_i + diff_j);

    return 0;
}