#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    b= "Jessica";
    getline(cin,a);
    stringstream ss(a);
    string word;
    int found = 0;
    while(ss>>word){
        if(word==b) found++; 
    }
    if(found>0) cout << "YES";
    else cout << "NO";
    return 0;
}