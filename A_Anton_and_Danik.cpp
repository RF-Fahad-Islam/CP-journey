#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char s[n+1];
    cin >> s;
    int count_A = 0;
    int count_D = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'A') count_A++;
        else count_D++;
    }
    if(count_A>count_D) cout << "Anton";
    else if (count_A==count_D) cout<<"Friendship";
    else cout << "Danik";
    
    return 0;
}