// File: module1.c
#include <stdio.h>
// 'fileCount' is a global static variable. It can only be accessed in this file.
static int fileCount = 100;
void printFileCount() {
printf("The count inside module1 is: %d\n", fileCount);
}