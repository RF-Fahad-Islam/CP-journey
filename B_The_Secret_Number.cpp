#include<bits/stdc++.h>
using namespace std;
int main(){
    int tests;
    cin >> tests;
    while(tests--){
        long long int n;
        cin >> n;
        long long int x;
        long long int xs[100] = {0};
        int j = 0;
        long long int pow10 = 10;
        while ((pow10+1) <= n)
        {
            if(n % (pow10+1) == 0){
                x = n/(pow10+1);
                xs[j] = x;
                j++;
            }
            pow10 *= 10;
        }
        cout << j; 
        if(j!=0) cout << endl;
        for (int i = j-1; i >= 0; i--)
        {
          cout << xs[i] << " ";
        }
        cout << endl;

        
        
    }
    return 0;
}