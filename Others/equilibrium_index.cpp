#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum_l=0,sum_r=0;
    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        sum_l += a[i];
        sum_r += a[j];
        if(sum_l==sum_r){
            cout << i+1;
            break;
        }
    }
    
    
    return 0;
}