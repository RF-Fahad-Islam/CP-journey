#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++)
{
    char s[10001];
    scanf("%s", &s);
    int smallcnt=0,bigcnt=0,digcnt = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='a' && s[i]<='z') smallcnt++;
        else if(s[i]>='A' && s[i]<='Z') bigcnt++;
        else if(s[i]>='0' && s[i]<='10') digcnt++;
        
    }

    printf("%d %d %d\n",bigcnt,smallcnt,digcnt);
    
}

return 0;
}