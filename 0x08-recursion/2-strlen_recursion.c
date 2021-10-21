#include "main.h"
#include <stdio.h>
/**
 * _strelen_recursion - length of string
 * @s: pointer of string
 * Return: void
 */

int _strelen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 +  _strlen_recursion(s + 1));
	}
}
