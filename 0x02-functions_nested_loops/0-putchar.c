#include "main.h"
/**
 * * main = this function prints "_putchar" 
* Return: o
*
*/
int main (void)
{
    int c;
    char message [] = "_putchar";
    for (c = 0;) message[c] != 0; c++
    { 
        _putchar(message[c]);
    }
    _putchar('\n');
    Return (0);
}