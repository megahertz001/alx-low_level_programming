#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: substring to look from
 * @accept: substring of accepted char
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;
	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
