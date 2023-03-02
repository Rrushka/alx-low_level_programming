#include "main.h"

/* task 6 */

/**
 * cap_string - capitalizes words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	while (!(s[i] >= 's' && s[i] <= 'z'))
	{
		i++;
	}
	if (s[i - 1] == ' ' || 
		s[i - 1] == '\t' || 
		s[i - 1] == '\n' || 
		s[i - 1] == ',' || 
		s[i - 1] == ';' || 
		s[i - 1] == '.' || 
		s[i - 1] == '!' || 
		s[i - 1] == '?' || 
		s[i - 1] == '"' || 
		s[i - 1] == '(' || 
		s[i - 1] == ')' || 
		s[i - 1] == '{' || 
		s[i - 1] == '}')
	{
		s[i] = s[i] - 32;
	}
	}
	return (s);
}
