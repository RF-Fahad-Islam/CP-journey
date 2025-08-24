#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
int minstep = 1000000000;
for (int i = 0; i < n; i++)
{
    if (arr[i]==0)
    {
        minstep=0;
        break;
    } else {
        int temp=arr[i];
        if(arr[i]<0) temp=-(arr[i]);
        if(temp<minstep) minstep=temp;
    }
    
}

printf("%d", minstep);

return 0;
}