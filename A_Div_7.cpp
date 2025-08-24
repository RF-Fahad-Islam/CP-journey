#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        if(num%7 == 0 ){
            cout << num << endl;
            continue;
        }
        for (int i = 1; i <= 9; i++)
        {
            num = num - num%10;
            if((num+i)%7 == 0){
                cout << num+i << endl;
                break;
            }
        }
        

    }
    return 0;
}