#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    vector<int> v(28);
    for (int i = 0; i < a.size(); i++)
    {
        v[a[i]-'a']++;
    }
    for (int i = 0; i < 28; i++)
    {
        if(v[i] >0) cout << char('a'+i) << " : " << v[i] << endl;
    }
    
    
    return 0;
}