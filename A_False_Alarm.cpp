#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int door_cnt;
        int time;
        cin >> door_cnt >> time;
        int doors[door_cnt];
        int i_pos[door_cnt];
        int l=0;
        for (int j = 0; j < door_cnt; j++)
        {
            cin >> doors[j];
            if(doors[j] == 1){ 
                i_pos[l]=j;
                l++;
            }
        }
        int last_pos=0;
        for (int i = i_pos[0]; i <= i_pos[l-1]; i++) //last pos of i
        {
            if(time==1){
                last_pos = i;
                // cout << i_pos[l-1] << " " << last_pos<<endl;
                break;
            }    
            time--;
        }
        if(last_pos==i_pos[l-1]) cout << "YES"<<endl;
        else cout << "NO"<<endl;
        
        
    }
    
    return 0;
}