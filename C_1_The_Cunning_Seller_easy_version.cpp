#include<bits/stdc++.h>
using namespace std;
int main(){
    int tests;
    cin >> tests;
    while(tests--){
        int n;
        cin >> n;
        int pow3s[50];
        int j = 0;
        for (int i = 0; pow(3,i)<=n; i++)
        {
            pow3s[i] = pow(3,i);
            j++;
        }
        int cost=0;
        for (int i = j-1; i >=0 && n>0; i--)
        {
            if(pow3s[i] == 0) break;
            if(n%pow3s[i] == 0) {
                cost += (pow(3,i+1)+i*pow(3,i-1))*(n/pow3s[i]);
                break;
            } else {
                n -= pow3s[i]*(n/pow3s[i]);
                cost += (pow(3,i+1)+i*pow(3,i-1))*(n/pow3s[i]);
            }
        }
        cout << cost << endl;
        
    }
    return 0;
}