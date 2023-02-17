#include <stdio.h>
#include <stdlib.h>
/*task 2- print the alphabet in lower case*/

/**
 * main - start
 * print alphabet using putchar() not print and only twice
 * Return: 0
 */
int main(void)
{
	char aTOz = 'a';

	while (aTOz <= 'z')
	{
		putchar(aTOz);
		aTOz++;
	}
	putchar('\n');
	return (0);
}
