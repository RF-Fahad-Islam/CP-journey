#include<stdio.h>
int main(){
int n;int even=0,odd=0,pos=0,neg=0;
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    int temp;
    scanf("%d ", &temp);
    if(temp%2==0) even++;
    else odd++;
    if(temp<0) neg++;
    else if(temp>0) pos++;

}

printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);

return 0;
}