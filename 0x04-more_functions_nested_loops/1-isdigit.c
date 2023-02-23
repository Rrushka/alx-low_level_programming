#include "main.h"

/* task 1 */

/**
 * _isdigit i checks if input is a digit or not
 * @c: variable
 * Return: 1 if digit between 0-9 and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
