#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int num;
        cin >> num;
        int a[num];
        for (int i = 0; i < num; i++)
        {
            cin >> a[i];
        }
        int freq[100] = {0};
        for (int i = 0; i < num; i++)
        {
            freq[a[i]]++;            
        }
        int dis_count = 0;
        
        for (int i = 0; i < 100; i++)
        {
            if(freq[i]!= 0){
                dis_count++;
            }
        }
        
    }
    
    return 0;
}