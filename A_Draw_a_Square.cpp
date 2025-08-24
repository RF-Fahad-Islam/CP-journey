#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int l,r,d,u;
        cin >> l >> r >> d >> u;
        if(l==r && r==d & d==u && l==d){
            cout << "Yes";
        } else cout << "No";
        cout << endl;
    }
    
    return 0;
}