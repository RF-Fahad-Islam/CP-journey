#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        b = a;
        sort(b.begin(),b.end());
        int asc_sorted = 1;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != b[i]) {
                asc_sorted = 0;
                break;
            }

        }

        int dsc_sorted = 1;
        for (int i = n-1,j=0; i >=0; i--,j++)
        {
            if(a[j] !=b[i]) {
            dsc_sorted = 0;
            break;
            }
        }
        
        if(asc_sorted) cout << "YES";
        else cout << "NO";
        cout << endl;
        
        
    }
    return 0;
}