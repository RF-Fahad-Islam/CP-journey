#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int start=0,end=0;
if (n<0) start=n,end=0;
else if (n>0) start=1,end=n;

    for (int i = start; i <= end; i++)
    {
        printf("%d ",i);
    }
    

return 0;
}