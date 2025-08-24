#include<bits/stdc++.h>
using namespace std;
int main(){
    int first_banana_price,he_has,wants_to_buy;
    cin >> first_banana_price >> he_has >> wants_to_buy;
    int needed_dollar=0; 
    for (int i = 1; i <= wants_to_buy; i++)
    {
        needed_dollar+=i*first_banana_price;
    }
    int need_to_borrow = needed_dollar-he_has;
    if(need_to_borrow>0) cout << need_to_borrow;
    else cout << 0;
    
    return 0;
}