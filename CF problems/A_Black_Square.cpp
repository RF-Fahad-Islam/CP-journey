#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string n;
    cin >> n;
    int tcalories = 0;
    for(char ch : n){
        if(ch == '1') tcalories+=a;
        else if (ch=='2') tcalories+=b;
        else if (ch=='3') tcalories+=c;
        else if (ch=='4') tcalories+=d;

    }
    cout << tcalories << endl;
    return 0;
}