#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        int found = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        found++;
                        break;
                    }
                }
            }
        }
        if(found > 0 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}