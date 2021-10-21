#include "main.h"
/**
 * _print_rev_recursion -funtion that prints a string
 * @s: pointer to string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
