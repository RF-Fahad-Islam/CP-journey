#include <stdio.h>
#include <math.h>
int log2my(int n, int i)
{
    if (pow(2, i) == n)
        return i;
    log2my(n, ++i);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", log2my(n, 0)); 
    return 0;
}