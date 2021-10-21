#include "main.h"
#include <stdio.h>
/**
 * factorial - return factorial n
 * @n:n factorial
 * Return: factorial n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * (factorial(n - 1)));
}
