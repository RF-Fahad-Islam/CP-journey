#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
for (size_t s = 0; s < count; s++)
{
    
}

    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = m - 1; j < m / 2; j++, k--)
        {
            // swap
            int temp = arr[i][k];
            arr[i][k] = arr[i][j];
            arr[i][j] = temp;
         }
    }
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}