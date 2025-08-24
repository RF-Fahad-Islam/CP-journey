#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int not_same_cnt = 0;
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            not_same_cnt++;
            break;
        }
    }
    if(not_same_cnt >0) cout << "NO";
    else cout << "YES";

    return 0;
}