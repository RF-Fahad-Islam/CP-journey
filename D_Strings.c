#include<stdio.h>
#include<string.h>
int main(){
char s1[11],s2[11];
scanf("%s", &s1);
scanf("%s", &s2);

printf("%d %d\n%s%s\n",strlen(s1),strlen(s2),s1,s2);
char temp;
temp = s1[0];
s1[0] = s2[0];
s2[0] = temp;
printf("%s %s",s1,s2);

return 0;
}