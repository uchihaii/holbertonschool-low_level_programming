#include "main.h"
/**
* print alphabet  -- prints a low a lowercase alphabet
*
* Return: 0 
*/
void print_alphabet(void)
{
    int c;
    for (c =97; c<= 122; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}