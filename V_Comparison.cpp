#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '>')
    {
        if (a > b)
            printf("Right");
        else
            printf("Wrong");
    }
    else if (s == '<')
    {
        if (a < b)
            printf("Right");
        else
            printf("Wrong");
    }
    else if (s == '=')
    {
        if (a == b)
            printf("Right");
        else
            printf("Wrong");
    }

    return 0;
}