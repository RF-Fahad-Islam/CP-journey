// Array Approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[4];
    int unique_digit_found = 0;

    while (!unique_digit_found)
    {
        // until the same digit found
        // bruteforce to next year
        int y = ++n;
        int i = 0;
        while (y)
        {
            //inserting digits to array
            int digit = y % 10;
            arr[i] = digit;
            y /= 10;
            i++;
        }
        int same_dig = 0;

        //Check if any digit comes twice
        for (int i = 0; i < 4; i++)
        {
            for (int j = i+1; j < 4; j++)
            {
                if (arr[i] == arr[j])
                {
                    same_dig = 1;
                    break;
                }
            }
            
        }
        if (!same_dig)
            unique_digit_found = 1;
    }
    cout << n << endl;

    return 0;
}