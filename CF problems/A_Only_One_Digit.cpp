#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        int dig,small_dig=9;
        while (num){
            dig = num%10;
            if(dig<small_dig) small_dig=dig;
            num /=10;
        }
        cout << small_dig <<endl;
    }
    
    return 0;
}