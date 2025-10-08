#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }

        sort(a,a+n,greater<long long int>());
        int min_sum = a[0];
        for (int i = 1; i < n-1; i++)
        {
            min_sum += abs(a[i]-a[i-1]);
        }
        cout << sum -min_sum << endl;
        
        
    }
    return 0;
}
