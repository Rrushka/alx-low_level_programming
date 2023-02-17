#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Task 1 of 0x01-variables_if_else_while -print last digit of n */

/**
 * main - start
 * what statement do i use here
 * Return: 0
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	printf("Last digit of %d is %d", n, y);
	if (y > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (y == 0)
	{
		printf("and is 0\n");
	}
	else if (y < 6 && y != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

