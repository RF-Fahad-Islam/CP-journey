#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    if (m != n)
    {
        printf("NO");
    }
    else
    {
        int found = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &arr[i][j]);

                if (i == j || i + j == m - 1)
                {
                    cnt++;
                    if (arr[i][j] == 1)
                    {
                        found++;
                    }
                }
                else if (arr[i][j] != 0)
                {
                    found++;
                }
            }
        }
        if (found == cnt)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}