// File: main.c
#include <stdio.h>
// To access the variable from module1, we would use 'extern', but
// because it is 'static', this line will not work!
// extern int fileCount;
void printFileCount(); // Function prototype from module1.c
int main() {
printFileCount();
// fileCount = 200;
printFileCount();
return 0;
}