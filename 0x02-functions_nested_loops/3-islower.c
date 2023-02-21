#include "main.h"
 /*task 3 */

/**
 * _islower - start
 * c: variable
 * check for lower case character
 * Return: 1 if true and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
