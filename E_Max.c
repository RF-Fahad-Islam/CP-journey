#include<stdio.h>
int main(){
int n,max=0;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    int temp;
    scanf("%d",&temp);
    if (temp>max)
    {
        max = temp;
    }
    
}

printf("%d", max);

return 0;
}