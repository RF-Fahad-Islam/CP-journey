#include<stdio.h>
#include<string.h>
int main(){
char s[100001];
scanf("%s", &s);
char vowels[6] = "aeiou";
int cnst = strlen(s);
for (int i = 0; i < strlen(s); i++)
{
    for (int j = 0; j < 5; j++)
    {
        if(s[i] == vowels[j]) cnst--;
    }
    
}

printf("%d",cnst);


return 0;
}