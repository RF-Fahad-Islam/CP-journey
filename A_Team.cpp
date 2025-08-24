#include<bits/stdc++.h>
using namespace std;
int main(){
    int solvable_prblm = 0;
    int total_prblm;
    cin >> total_prblm;
    for (int i = 0; i < total_prblm; i++)
    {
        int a,b,c;
        cin >>a >>b>>c;
        if(((a==1)+(b==1)+(c==1))>= 2) solvable_prblm++;
    }
    cout << solvable_prblm;
    return 0;
}