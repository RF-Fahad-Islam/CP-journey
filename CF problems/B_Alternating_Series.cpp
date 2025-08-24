#include<bits/stdc++.h>
using namespace std;
int main(){
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            if(i%2==0) {
                arr[i] = -1;
            } else if(i%2 != 0){
               if(n>2) arr[i] = 3;
               else if (n-1==i && n>2) arr[i] = 1;
               else arr[i] = 2;

            } 
        }
        
        
    }
    
    return 0;
}