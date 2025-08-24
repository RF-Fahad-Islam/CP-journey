#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
char Key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
char Original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char s[1000000];
scanf("%s",&s);
for (int i = 0; s[i] != '\0'; i++)
{
    char ch = s[i];
    int ch_index;
    if(n==1){
    for (int j = 0; Original[j] != '\0'; j++)
    {
        if(Original[j] == ch) {
            ch_index = j;
            break;
        }
    }
    s[i] = Key[ch_index];
} else {
    for (int j = 0; Key[j] != '\0'; j++)
    {
        if(Key[j] == ch) {
            ch_index = j;
            break;
        }
    }
    
    s[i] = Original[ch_index];
}
    
}
printf("%s",s);
return 0;
}