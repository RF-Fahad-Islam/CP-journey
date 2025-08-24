#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5,1);
    v.resize(2);
    v.resize(5);
    cout << v[4];
    return 0;
}