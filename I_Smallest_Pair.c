/**
 * @file I_Smallest_Pair.c
 * @brief This program calculates the smallest sum of the expression 
 *        a[i] + a[j] + (j - i) for all valid pairs (i, j) in an array.
 *
 * @details
 * The program takes multiple test cases as input. For each test case:
 * - It reads the size of the array and the array elements.
 * - It computes the smallest sum of the expression a[i] + a[j] + (j - i),
 *   where 1 <= i < j <= n.
 * - The result for each test case is printed on the console.
 *
 * @input
 * - The first input is an integer `test` representing the number of test cases.
 * - For each test case:
 *   - An integer `n` representing the size of the array.
 *   - `n` integers representing the elements of the array.
 *
 * @output
 * - For each test case, the program outputs the smallest sum of the expression
 *   a[i] + a[j] + (j - i).
 *
 * @constraints
 * - 1 <= test <= 100
 * - 2 <= n <= 1000
 * - -10^6 <= arr[i] <= 10^6
 *
 * @note
 * - The program uses a brute-force approach with nested loops to calculate the
 *   smallest sum, which may not be efficient for large values of `n`.
 * - The variable `min` is initialized to a large value (10^7) to ensure that
 *   any valid sum will replace it during computation.
 */
#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    // Testcases
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        // Array
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int min = 10000000, sum = 0;
        // Finding smallest sum of a[i]+a[j]+j-i
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                sum = (int)arr[i-1] + (int)arr[j-1] + j - i;
                if (sum < min)
                    min = sum;
            }
        }
        printf("%d", min);
    }

    return 0;
}