#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while(q--){
        int b;
        cin >> b;
        int l= 0;
        int r=n-1;
        int found = 0;
        while(l<=r){
           int mid = (l+r)/2;
           if(b==a[mid]){
            found = 1;
            break;
           } else if (b<a[mid]) r=mid-1;
           else if(b>a[mid]) l = mid+1;
        }
        if(found>0) cout << "found";
        else cout << "not found";
        cout << endl;
    }
    
    return 0;
}