#include<stdio.h>

int max_min_finder(int arr[],int n){
    int max=-1000000,min=1000000;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }
    printf("%d %d",min,max);
    
}

int main(){
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
max_min_finder(arr,n);

return 0;
}