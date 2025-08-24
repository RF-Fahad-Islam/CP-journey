#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int h,m;
        cin >> h>> m;
        int total_min = (h*60)+m;
        int rmn_min = (24*60)-total_min;
        cout << rmn_min << endl; 
    }
    
    return 0;
}