#include<stdio.h>

int count_before_one(int arr[],int n){
    int i = 0;
    while(arr[i]!=1 && i<n){
        i++;
    }
    return i;
    
}

int main(){
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
int cnt = count_before_one(arr,n);
printf("%d",cnt);
return 0;
}