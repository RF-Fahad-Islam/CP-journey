#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
for (int k = 0; k < n; k++)
{
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);
    if(m2==0) {
        printf("%d\n",0);
        continue;
    }
    int need_time = (m1*d)/(m2+m1);
    int diff_time = d-need_time;
    if(diff_time<0) diff_time *=-1;
    printf("%d\n",diff_time);


}

return 0;
}