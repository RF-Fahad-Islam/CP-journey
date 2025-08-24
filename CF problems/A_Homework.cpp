#include<bits/stdc++.h>
using namespace std;
int main(){
    int tests;
    cin >> tests;
    while (tests--)
    {
        int lens1,lens2;
        string s1,s2,c;
        cin >> lens1 >> s1 >> lens2 >> s2 >> c;
        for (int i = 0; i < lens2; i++)
        {
            if(c[i] == 'D') {
                s1.push_back(s2[i]);
            } else {
                s1.insert(s1.begin(),s2[i]);
            }
        }
        cout << s1 << endl;
    }
    
    return 0;
}