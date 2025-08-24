#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min_score = arr[k-1];
    int advancable_players = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= min_score && arr[i] != 0) advancable_players++;
    }
    cout << advancable_players;
    
    return 0;
}