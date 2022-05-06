#include "main.h"
/**
 * _isdigit - function that checks if a character is a digit
 * @c:input character
 * Return: returns 1 if true
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
