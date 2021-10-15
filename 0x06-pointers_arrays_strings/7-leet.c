#include "main.h"

/**
   * leet - entry point
    * @s:char
     * Return:char
     */
char *leet(char *s)
{
	int i = 0, j = 0;
	char l_num[] = {'4', '3', '0', '7', '1'};
	char l_min[] = {'a', 'e', 'o', 't', 'l'};
	char l_maj[] = {'A', 'E', 'O', 'T', 'L'};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if ((*(s + i) == l_min[j]) || (*(s + i) == l_maj[j]))
				*(s + i) = l_num[j];
		}
		i++;
	}
	return (s);
}
