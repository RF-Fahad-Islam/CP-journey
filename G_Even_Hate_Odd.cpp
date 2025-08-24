#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
            cout << -1;
        else
        {
            int evencnt = 0,oddcnt=0;
            for (int i = 0; i < n; i++)
            {
                    if (arr[i] % 2 != 0) oddcnt++;
                    else evencnt++;
            }
          cout << abs(evencnt-oddcnt)/2;
        }
        cout << endl;
    }
    return 0;
}