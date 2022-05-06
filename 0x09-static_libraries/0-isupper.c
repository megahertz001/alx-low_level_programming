#include "main.h"
/**
 * _isupper - function that verifies if a character is uppercase or not
 * @c: input character
 * Return: returns 1 if it is uppercase or 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
