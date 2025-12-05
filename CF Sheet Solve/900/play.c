#include<stdio.h>
int main(){
    char arr[1000008];
    int c = 0;
    fgets(arr, sizeof(arr),stdin);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        c++;
    }
    // printf("*%d*",c);
    
    int word = 0;
    int in_same = 0;
    for(int j=0;j<c-1;j++){
        printf("%c-",arr[j]);
        if(arr[j] ==  ' ') {
            printf("%d -- ",in_same);
            if(in_same == 0) word++;
            in_same = 0;
            continue;
        }
        if(arr[j] >= '0' && arr[j] <= '9') {
            in_same++;
            break;
        }
    }
    if(in_same == 0 && arr[c-2] != ' ') word++;
    printf("%d\n", word);
    return 0;
}