#include "main.h"

/* task 5 */

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to substring location or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	i = 0;

	for(;*haystack != '\0'; haystack++)
	{
	while (haystack[i] == needle[i])
	{
	if (needle[i + 1] == '\0')
	{
		return (haystack);
	}
		i++;
	}
	}
	return ('\0');

