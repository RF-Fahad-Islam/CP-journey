#include<stdio.h>
int main(){
int n,num;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    scanf("%d",&num);
    long long int fac=1;
    for (int j = 1; j <= num; j++)
    {
        fac*=j;
    }
    printf("%lld\n",fac);
    
}

return 0;
}