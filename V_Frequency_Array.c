#include<stdio.h>
int main(){
int n, m;
scanf("%d %d", &n,&m);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}

//Frequency array
int fre[7] = {0};
for (int i = 0; i < n; i++)
{
    int val = arr[i];
    fre[val]++ ;
}

//Print
for (int i = 1; i <= m; i++)
{
    printf("%d\n", fre[i]);
}




return 0;
}