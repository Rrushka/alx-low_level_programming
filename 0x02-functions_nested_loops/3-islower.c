#include "main.h"
 /*task 3 */

/**
 * _islower - start
 * c - variable that the if statement is used to see if its upper of lower case
 * check for lower case character
 * Return: 1 if true
 * Return: 0 if not
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
