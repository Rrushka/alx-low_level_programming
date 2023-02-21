#include "main.h"
 /*task 3 */

/**
 * _islower - start
 * check for lower case character
 * Return: 0
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
