/**
 * @file J_Count_Letters.c
 * @brief This program counts the frequency of each letter in a given string.
 *
 * The program reads a string input from the user and calculates the frequency
 * of each lowercase English letter (a-z) using a frequency array. It then
 * prints the frequency of each letter that appears in the string.
 *
 * @details
 * - The input is expected to be a single string.
 * - A frequency array of size 26 is used to store the count of each letter.
 * - The ASCII value of 'a' (97) is used as a base to map letters to the array indices.
 * - Only lowercase letters are considered in this implementation.
 *
 * @note
 * - The program currently has a bug in the way it reads the input string and
 *   calculates the frequency. The `scanf` function and the loop logic need to
 *   be corrected for proper functionality.
 *
 * @return Returns 0 upon successful execution.
 */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);

    // Frequency Array
    int fre[26] = {0};
    for (int i = 0; i < (int)strlen(s); i++)
    {
            fre[s[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
            printf("%c : %d\n", 97 + i, fre[i]);
    }

    return 0;
}