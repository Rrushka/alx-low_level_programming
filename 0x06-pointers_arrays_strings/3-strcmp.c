#include "main.h"

/* task 3 */

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: depends on outcome of comparison
 */
int _strcmp(char *s1, char *s2)
{
	do {
		s1++;
		s2++;
	} while (*s1 && *s2 && *s1 == *s2);

	return (*s1 - *s2);
}
