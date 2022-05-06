#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @n: n is a whole number
 * Return: integer
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
