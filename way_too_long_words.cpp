#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string s;
        cin >> s;
        if(s.size()>10) cout << s[0] << s.size()-2 << s.back() << endl;
        else cout << s << endl;
    }
    
}