#include "main.h"

/**
 * print_numbers - void function to print numbers using _putchar function
 *  *
 *   * Return: Always 0.
 *    */
void print_numbers(void)
{
	int c;
	for (c = '0' ; c <= '9' ; c++)
	{
           _putchar(c);
	}
	   _putchar('\n');
}
