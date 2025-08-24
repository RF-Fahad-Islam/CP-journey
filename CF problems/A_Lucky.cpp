
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int num;
        cin >> num;
        int arr[6]={0};
        int k =0;
        int digit;
        do{
            digit = num%10;
            arr[k] = digit;
            num = num/10;
            // cout << digit << " ";
            k++;
        }while(num);
        if(arr[0]+arr[1]+arr[2] == arr[3]+arr[4]+arr[5]) cout << "YES"<<endl;
        else cout << "NO"<<endl;
        
    }
    
    return 0;
}