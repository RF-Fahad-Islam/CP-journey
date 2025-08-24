#include<stdio.h>
#include<string.h>
int main(){
char s[10001];
scanf("%s", &s);

//Freq array
char freq[26] = {0};
for (int i = 0; i < strlen(s); i++)
{
    int val = s[i];
    if (val>='a' && val <='z')
    {
        freq[val-97]++;
    }
    
}

for (int i = 0; i < 26; i++)
{
    if(freq[i] != 0) printf("%c - %d\n",'a'+i,freq[i]);
}


return 0;
}