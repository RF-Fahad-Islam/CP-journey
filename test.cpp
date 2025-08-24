#include <iostream>
using namespace std;

int main()
{
    char x = 'c';

    for (;;)
    {
        cout <<"ACS "<< x << char(x + 1) << char(x + 6) << " ";
    }

    return 0;
} 
// The code is an infinite loop that prints the characters 'c', 'd', and 'i' repeatedly.
// The output will be: 
// ACS cdi ACS cdi ACS cdi ...
// The loop will never terminate, so the program will run indefinitely until manually stopped.
