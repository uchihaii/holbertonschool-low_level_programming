#include "main.h"
/**
 *  * _isupper - Retorna 1 si la letra es mayúscula.
 *   *
 *    * @c: variable a estudiar en la función.
 *     *
 *      * Return: 1 o 0.
 *       */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
