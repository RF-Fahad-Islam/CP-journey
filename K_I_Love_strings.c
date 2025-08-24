#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s1[51], s2[51];
        scanf("%s %s", s1, s2);
        int len_s1 = strlen(s1);
        int len_s2 = strlen(s2);
        char new_s[len_s1 + len_s2 + 1];
        for (int j = 0, k = 0, l = 0; l <= len_s1 + len_s2; l++)
        {
            if (s1[j] == '\0')
            {
                new_s[l] = s2[k];
                k++;
            }
            else if (s2[k] == '\0')
            { 
                new_s[l] = s1[j];
                j++;
            }
            else
            {
                if (l % 2 == 0)
                {
                    new_s[l] = s1[j];
                    j++;
                }
                else
                {
                    new_s[l] = s2[k];
                    k++;
                }
            }
        }
        printf("%s\n", new_s);
    }

    return 0;
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         char s1[51], s2[51];
//         scanf("%s %s", s1, s2);
//         int len_s1 = strlen(s1);
//         int len_s2 = strlen(s2);
//         char new_s[len_s1 + len_s2 + 1]; // +1 for '\0'

//         int j = 0, k = 0, l = 0;
//         while (j < len_s1 || k < len_s2)
//         {
//             if (j < len_s1)
//             {
//                 new_s[l++] = s1[j++];
//             }
//             if (k < len_s2)
//             {
//                 new_s[l++] = s2[k++];
//             }
//         }
//         new_s[l] = '\0'; // null-terminate the string

//         printf("%s\n", new_s);
//     }

//     return 0;
// }
