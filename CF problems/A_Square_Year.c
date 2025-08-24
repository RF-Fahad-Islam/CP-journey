#include<stdio.h>
#include<math.h>
int main(){
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    int year;
    int y1=0,y2=0;
    scanf("%d",&year);
    for (int j = 0; j <= 100; j++)
    {
        for (int k = 0; k <= 100; k++)
        {
            if(pow(j*k,2) == year){
                y1=j;
                y2=k;
                break;
            }
        }
    }
    
    if(y1==0&&y2==0) printf("-1");
    else printf("%d %d",y1,y2);
    printf("\n");
    
}

return 0;
}