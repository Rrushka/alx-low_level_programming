#include "main.h"

/* task 4 */

/**
 * _isalpha - function0
 * int c - check
 * Return: 1 if true
 * Return: 0 if not true
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{

		return (1);

	}
	else
	{
		return (0);
	}
}
