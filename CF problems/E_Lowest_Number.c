#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
int min=1000000, pos=-1;
for (int j = 0; j < n; j++)
{
    if (arr[j]<min)
    {
        min = arr[j];
        pos = j;
    }

}

printf("%d %d",min,pos+1);
return 0;
}