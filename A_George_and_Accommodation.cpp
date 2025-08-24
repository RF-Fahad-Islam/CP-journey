#include<bits/stdc++.h>
using namespace std;
int main(){
    int rooms;
    cin >> rooms;
    int free = 0;
    while(rooms--){
        int i,j;
        cin >> i >> j;
        if((j-i)>=2) free++;
    }
    cout << free;
    return 0;
}