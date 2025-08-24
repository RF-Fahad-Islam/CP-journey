#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int front_of = 0;
        for (int i = 1; i < 4; i++)
        {
            if(arr[0] < arr[i]) front_of++;
        }
        cout << front_of <<endl;
        
    }
    
    return 0;
}