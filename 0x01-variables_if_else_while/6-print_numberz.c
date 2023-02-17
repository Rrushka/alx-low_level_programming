#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* task 6 -numbers */

/**
 * main - start
 * putchar to print single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int numz;

	for (numz = 0; numz < 10; numz++)
	{
		putchar(numz);
	}
	putchar('\n');
	return (0);
}

