#include "main.h"

/**
 * _strchr -locates characters in a string
 * @s: pointer to a string
 * @c: char to be located
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
