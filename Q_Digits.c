#include<stdio.h>
int main(){
int n,lastdig;
scanf("%d", &n);
for (int i = -1; i < n-1; i++)
{
    int num;
    scanf("%d",&num);
    do
    {
        lastdig = num%10;
        printf("%d ",lastdig);
        num /= 10;
    } while (num);
    
    printf("\n");

}

return 0;
}