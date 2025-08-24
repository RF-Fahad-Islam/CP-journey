#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int diff_find = 0;
    for (int i = 0,j=s1.size()-1; i < s1.size(); i++,j--)
    {
        if(s1.size() != s2.size()) {diff_find++; break;}
        if(s1[i] != s2[j]) {diff_find++; break;}
    }
    if(!diff_find) cout << "YES";
    else cout << "NO";
    
    return 0;
}