#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin,s))
    {
        int freq[27] = {0};
        string new_s;
        for (int i = 0; i < s.length(); i++)
        {
            if ((int)s[i] - 97 >= 0 || (int)s[i] - 97 <= 27)
                freq[(int)s[i] - 97]++;
        }

        for (int i = 0; i < 27; i++)
        {
            if (freq[i] != 0)
            {
                for (int j = 0; j < freq[i]; j++)
                {
                    new_s += (char)(i + 97);
                }
            }
        }
        cout << new_s << endl;
    }

    return 0;
}