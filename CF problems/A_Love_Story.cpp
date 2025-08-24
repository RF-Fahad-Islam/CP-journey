#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string s;
        cin >> s;
        string main_s = "codeforces";
        int matched_s = 0;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] != main_s[i]) matched_s++;
            
        }
        
        cout << matched_s << endl;
    }
    
    return 0;
}