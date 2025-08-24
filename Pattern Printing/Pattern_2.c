#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int space = n-1;
for (int i = n; i > 0; i--)
{
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }

    for (int j= (n-i)+1; j>0; j--)
    {
        printf("%d",j);
    }
    printf("\n");
    space--;
    
}

return 0;
}