#include <stdio.h>
/*Only one header*/

int main/*Main of the function*/(void)
{
	int numb = '0';

	while (numb <= '9')
	{
		printf("%c", numb);
		numb++;
	}
	printf("\n");
	/*Just prints numbers 0 to 9*/
	return (0);
	/*Return zero*/
}
