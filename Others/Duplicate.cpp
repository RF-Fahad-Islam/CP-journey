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

    int found = 0;
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid]==a[i]){
                found++;
                break;
            } else if(a[i]<a[mid]){
                r = mid-1;
            } else if (a[i]>a[mid]){
                l = mid+1;
            }
        }
    }
    if(found) cout << "YES";
    else cout << "NO";
    cout << endl;
    
    
    return 0;
}