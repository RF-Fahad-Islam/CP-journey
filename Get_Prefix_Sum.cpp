#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int sum = 0;
    long long int pre[n];
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        pre[i] = sum;
    }

    for (int i = n-1; i >= 0; i--)
    {
        cout << pre[i] << " ";
    }
    
    
    
    return 0;
}