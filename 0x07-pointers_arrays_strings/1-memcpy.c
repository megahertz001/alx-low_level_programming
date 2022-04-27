#include "main.h"

/**
 * _memcpy - copy bytes from one memoray area to another
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
