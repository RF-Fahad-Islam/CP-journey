#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, n;
    cin >> test;
    for (int testi = 0; testi < test; testi++)
    {
        cin >> n;
        int small_sum = 10000000;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j] + j - i;
                small_sum = min(sum, small_sum);
            }
        }
        cout << small_sum << endl;
    }

    return 0;
}