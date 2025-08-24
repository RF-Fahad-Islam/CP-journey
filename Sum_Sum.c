#include<stdio.h>
int main(){
int n,sumpos=0,sumneg=0;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    int num;
    scanf("%d",&num);
    if(num<0) sumneg+=num;
    else if(num>0) sumpos+=num;
}

printf("%d %d",sumpos,sumneg);

return 0;
}