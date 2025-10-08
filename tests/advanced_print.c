#include <stdio.h>
int main() {
int itemID = 101;
int quantity = 5;
float price = 9.99f;
printf("+---------------------------------------+\n");
printf("| %-10s | %10s | %10s |\n", "Item ID", "Quantity", "Price");
printf("+---------------------------------------+\n");
printf("| %-10d | %10d | $%9.2f |\n", itemID, quantity, price);
printf("+---------------------------------------+\n");
int month = 8;
int day = 14;
int year = 2025;
printf("Today's date is: %02d/%02d/%d\n", month, day, year);
return 0;
}