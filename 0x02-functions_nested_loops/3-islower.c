#include "main.h"

/**
 * _islower - check if a char is lower case
 * Return: 1 if lower
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
