#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int diff = a[i] - b[i];
        // lowering case
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
        //Compare lexigraphically if not same
        if (abs(diff) != 32 && diff != 0)
        {
            if (a[i] > b[i])
                res = 1;
            else
                res = -1;
            break;
        }
    }
    cout << res;
    return 0;
}