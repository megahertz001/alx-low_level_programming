#include "main.h"

/**
 * _isalpha - checka for letter character
 * @c: is an ascii value
 * Return: 1 if letter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
