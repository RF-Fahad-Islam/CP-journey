#include<bits/stdc++.h>
using namespace std;
void printntimes(int cnt,char ch){
    while(cnt--){
        cout << ch << " ";
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        int n;
        char ch;
        cin >> n >> ch;
        printntimes(n,ch);
        cout << endl;
    }
    return 0;
}
