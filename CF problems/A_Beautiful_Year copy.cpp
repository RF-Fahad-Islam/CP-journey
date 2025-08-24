//Freq Array Approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int unique_digit_found = 0;
    
    while (!unique_digit_found)
    {
        int freq_arr[10]={0};
        // until the same digit found
        // bruteforce to next year
        int y = ++n;
        while (y)
        {
            int digit = y % 10;
            freq_arr[digit]++; //Add counts
            y /= 10;
        }
        int same_dig=0;
        for (int i = 0; i < 10; i++)
        {
            if(freq_arr[i] >1){
                same_dig=1;
                break;
            }
        }
        if(!same_dig) unique_digit_found=1;
    }
    cout << n << endl;

    return 0;
}