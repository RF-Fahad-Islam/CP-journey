#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, k;
        cin >> n >> k;
        // Three cases : 1.x=0 then divisble by y, 2.y=0 then divisible x, 
        //3. (x,y) then divisble by y and x,
        if(n%2 == 0 || n%k == 0 || (n-k)%2 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}