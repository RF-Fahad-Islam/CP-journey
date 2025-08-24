#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}

int sum_dia = 0,sum_sec_dia =0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i==j) sum_dia += arr[i][j];
        if(i+j==n-1) sum_sec_dia += arr[i][j];
    }
    
}

int diff = sum_dia-sum_sec_dia;
if(diff<0) diff*=(-1);
printf("%d",diff);


return 0;
}