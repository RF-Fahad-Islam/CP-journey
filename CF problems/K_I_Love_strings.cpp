#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string a, b;
        cin >> a >> b;
        int l = 0, j = 0;
        int s1_size = a.size();
        int s2_size = b.size();
        string new_s;
        while (l < s1_size || j < s2_size)
        {
            if (l < s1_size)
                new_s += a[l++];
            if (j < s2_size)
                new_s += b[j++];
        }
        cout << new_s << endl;
    }

    return 0;
}