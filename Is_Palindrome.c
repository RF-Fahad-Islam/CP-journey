#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    for (int i = 0, j = (strlen(s) - 1); i < strlen(s) / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        else
        {
            continue;
        }
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", &s);
    int n = is_palindrome(s);
    if (n == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}