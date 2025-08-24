#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string a,b,c="";
        cin >> a >> b;
        for (int i = 0; i < a.size(); i++)
        {
            int matchcnt = 0;
            for(int j=0; j<b.size();j++){
                if(a[i+j] == b[j]) matchcnt++;
            }
            if(matchcnt==b.size()){
                // a.replace(i,b.size(), "#");
                c+='#';
                i+=b.size()-1;
            } else {
                c+= a[i];
            }
        }
        cout << c << endl;
        
    }
    return 0;
}