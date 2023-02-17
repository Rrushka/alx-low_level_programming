#include <stdio.h>
#include <stdlib.h>
/*task 4 - print lower case alphabet without q and e */

/**
 * main - start
 * only use putchar twice
 * Return: 0
 */
int main(void)
{
	char aTOz = 'a';

	while (aTOz <= 'z' || aTOz != 'q' || aTOz != 'e')
	{
		putchar(aTOz);
		aTOz++;
	}
	putchar('\n');
	return (0);
}
