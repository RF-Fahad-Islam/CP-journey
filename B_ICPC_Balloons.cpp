#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int len;
        string s;
        cin >> len >> s;
        int points=0;
        int freq[26] ={0};
        for (int i = 0; i < len; i++)
        {
            freq[((int)s[i])-65]++;
        }
        for (int j = 0; j < 26; j++)
        {
            if(freq[j]>0) points =points+ 1+freq[j];
            // if(freq[j]>0 ) cout << j << "-> "<< freq[j] <<endl;
        }
        cout << points << endl;
        
    }
    
    return 0;
}