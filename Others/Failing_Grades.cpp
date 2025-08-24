#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >>n;
        int arr[n];
        int failed = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int avg=0;
        // if(avg< 40) failed++;
        for (int j = 0; j < n; j++)
        {
            if(j==0) avg = arr[0];
            else avg = (avg+arr[j])/2;
            if(avg< 40) failed++;
        }
        if(failed ==0) cout << "Yes" <<endl;
        else cout << "No" << endl;
    }
    
    return 0;
}