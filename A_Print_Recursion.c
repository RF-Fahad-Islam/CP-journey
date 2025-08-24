#include<stdio.h>

void hello(int i){
printf("I love Recursion\n");
if(i==3) return;
hello(i+1);
}

int main(){
int n;
scanf("%d", &n);
hello(1);
return 0;
}