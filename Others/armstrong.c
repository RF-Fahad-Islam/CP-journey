#include <stdio.h>
#include <math.h>
int main()
{
    int num, size=0, digit, armstrong_sum = 0;
    scanf("%d", &num);
    while (n>0)
    {
        
    }
    
    while (num > 0)
    {
        digit = num % 10;
        armstrong_sum += pow(digit, size); // means summing digit^size
        num = num / 10;
    }
    if (num == armstrong_sum)
        printf("Yes");
    else
        printf("No");

    return 0;
}