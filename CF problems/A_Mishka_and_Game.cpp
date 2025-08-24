#include<bits/stdc++.h>
using namespace std;
int main(){
    int round;
    cin >> round;
    int mishika_p = 0;
    int chris_p = 0;
    while(round--){
        int i,j;
        cin >> i >> j;
        if(i>j) mishika_p++;
        else if (i<j) chris_p++;
    }
    if(mishika_p> chris_p) cout << "Mishka";
    else if (chris_p>mishika_p) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}