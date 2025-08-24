#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    getline(cin, a);
    cin >> b;
    cin.ignore();
    stringstream ss(a);
    int wordcnt = 0;
    while(ss>>c){
        if(c == b) wordcnt++;
    }
    cout << wordcnt;
    return 0;
}