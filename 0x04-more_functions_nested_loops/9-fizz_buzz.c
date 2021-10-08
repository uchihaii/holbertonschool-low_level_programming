#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - main function
 *   * @i integer being indexed, against which to check conditions
 *    * Return: Returns value of i if conditions not met
 *     */

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			i++;
		}
		else
		{
			printf("%d", i);
			i++;
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
