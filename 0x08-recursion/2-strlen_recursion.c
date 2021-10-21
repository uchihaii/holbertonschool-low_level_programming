#include "main.h"
/**
 * _strelen_recursion - length of string
 * @s: pointer of string
 * Return: int
 */

int _strelen_recursion(char *s)
{
	int a = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		a++;
		return (a +  _strlen_recursion(s + 1));
	}
}
