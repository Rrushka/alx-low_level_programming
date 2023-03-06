#include "main.h"

/* task 5 */

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to substring location or NULL
 */
char *_str(char *haystack, char *needle)
{
	int i;

	i = 0;

	while (*haystack != '\0')
	{
	while (haystack[i] == needle[i])
	{
	if (needle[i + 1] == '\0')
	{
		return (haystack);
	}
		i++;
	}
	haystack++;
	}
	if (*needle == 0)
	{
		return (haystack);
	}
	return ('\0');
}
