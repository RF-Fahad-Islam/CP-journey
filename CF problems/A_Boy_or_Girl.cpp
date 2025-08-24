#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq_arr[27] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq_arr[s[i] - 'a']++;
    }
    int distinct_chars = 0;
    for (int i = 0; i < 27; i++)
    {
        if(freq_arr[i]>0) distinct_chars++;
    }
    if(distinct_chars%2 != 0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
}