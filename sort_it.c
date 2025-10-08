#include <stdio.h>

int main()
{
    int n;
    int arr[1000];
    // int gar = 0;
    scanf("%d", &n);
    // scanf("%d",&gar);
    for (int i = 0; i < n; i++)
    {
            scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int x = arr[i];
            int y = arr[j];
            int last_two_x = (x/10) % 10;
            int last_two_y = (y/10) % 10;
            if (last_two_x != last_two_y)
            {
                if (last_two_x > last_two_y)
                {
                    // swap
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            else
            {
                // binary representation of x
                int decx = x;
                int count_1_x = 0;
                while (decx != 0)
                {
                    if (decx % 2 == 1)
                        count_1_x++;
                    decx /= 2;
                }
                // binary representation of y
                int decy = y;
                int count_1_y = 0;
                while (decy != 0)
                {
                    if (decy % 2 == 1)
                        count_1_y++;
                    decy /= 2;
                }

                // check 1's count
                if (count_1_x != count_1_y)
                {
                    if (count_1_y > count_1_x)
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
                else
                {
                    if (y > x)
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if(i!=n-1) printf(" ");
    }
    printf("\n");
    return 0;
}