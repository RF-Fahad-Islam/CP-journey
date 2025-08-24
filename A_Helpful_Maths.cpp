#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int arr[101] = {4};
    int j=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            arr[j] = int(s[i])-48;
            j++;
        }
    }
    sort(arr, arr + 101);
    for (int i = 0; i < 101; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i];
            if (i != 100)
                cout << "+";
        }
    }

    return 0;
}