#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int a, b;
        cin >> a >> b;
        int min_c = INT_MAX;
        for (int i = a; i <= b; i++)
        {
            int c = (i - a) + (b - i);
            min_c = min(c, min_c);
        }
        cout << min_c << endl;
    }

    return 0;
}