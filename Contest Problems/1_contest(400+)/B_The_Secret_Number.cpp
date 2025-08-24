#include<bits/stdc++.h>
using namespace std;
/**
 * @brief Processes multiple test cases to find special numbers and their factors
 * 
 * For each test case, this function:
 * 1. Takes a number n as input
 * 2. Finds all numbers x where n is divisible by (10^k + 1) for increasing powers k
 * 3. Stores these x values in an array
 * 4. Outputs:
 *    - Count of such numbers found
 *    - The numbers themselves in descending order
 * 
 * Time Complexity: O(log n) per test case
 * Space Complexity: O(1) using fixed size array
 * 
 * @note Input format:
 *       First line: Number of test cases
 *       Each test case: Single integer n
 * 
 * @note Output format:
 *       For each test case:
 *       - First line: Count of numbers found
 *       - Second line: Numbers in descending order (if count > 0)
 */
int main(){
    int tests;
    cin >> tests;
    while(tests--){
        long long int n;
        cin >> n;
        long long int x;
        long long int xs[100] = {0};
        int j = 0;
        long long int pow10 = 10;
        while ((pow10+1) <= n)
        {
            if(n % (pow10+1) == 0){
                x = n/(pow10+1);
                xs[j] = x;
                j++;
            }
            pow10 *= 10;
        }
        cout << j; 
        if(j!=0) cout << endl;
        for (int i = j-1; i >= 0; i--)
        {
          cout << xs[i] << " ";
        }
        cout << endl;

        
        
    }
    return 0;
}