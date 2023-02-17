#include <stdlib.h>
#include <stdio.h>

/*Task 3- print alphabet in lower then upper case */

/**
 * main - start
 * do i use while again
 * Return: 0
 */
int main(void)
{
	char aTOz = 'a';
	char AtoZ = 'A';

	while (aTOz <= 'z')
	{
		putchar(aTOz);
		aTOz++;
	}
	while (AtoZ <= 'Z')
	{
		putchar(AtoZ);
		AtoZ++;
	}
	putchar('\n');
	return (0);
}
