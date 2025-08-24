#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,n2;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin>>n2;
    vector<int> b(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    cin >> x;
    a.insert(a.begin()+x,b.begin(),b.end());
    for(int num : a){
        cout << num << " ";
    }
    return 0;
}