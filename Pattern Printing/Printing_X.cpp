#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int spaces = n - 2;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << "\\";
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        spaces -= 2;
        cout << "/";
        cout << endl;
    }

    for (int i = 0; i < n / 2; i++)
    {
        cout << " ";
    }

    cout << "X" << endl;

    int spaces2 = 1;
    for (int i = n / 2; i > 0; i--)
    {
        for (int j = i - 1; j > 0; j--)
        {
            cout << " ";
        }
        cout << "/";

        for (int j = 0; j < spaces2; j++)
        {
            cout << " ";
        }
        spaces2 += 2;
        cout << "\\";
        cout << "\n";
    }

    return 0;
}