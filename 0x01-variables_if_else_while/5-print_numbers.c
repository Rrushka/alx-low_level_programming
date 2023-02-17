#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* task 5 - print numbers */

/**
 * main - start
 * print single digit numbers of base 10 starting at 0 followed by new line
 * Return: 0
 */
int main(void)
{
	char num;

	while (num = '0' && num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
