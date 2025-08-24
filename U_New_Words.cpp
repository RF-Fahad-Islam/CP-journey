#include<bits/stdc++.h>
using namespace std;
int main(){
    string word = "EGYPT";
    string word2 = "egypt";
    int freq[5]={0};
    string s;
    cin >> s;
    for(char ch:s){
        for(int i = 0;i<5;i++){
            if(ch == word[i] || ch==word2[i]) freq[i]++;
        }
    }
    // finding minimum of the freq array
    int min_cnt = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        min_cnt = min(min_cnt,freq[i]);
    }
    
    cout << min_cnt;
    return 0;
}