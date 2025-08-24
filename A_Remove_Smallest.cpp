#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int found_great_diff = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for (int i = 1; i < n; i++)
        {
            if(arr[i]-arr[i-1]>1) found_great_diff++;
        }
        if(found_great_diff) cout << "NO";
        else cout << "YES";
        cout << endl;
        
    }
    
    return 0;
}