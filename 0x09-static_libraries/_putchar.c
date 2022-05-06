#include <unistd.h>

/**
 * _putchar - writes the char to stdout
 * @c: the input char to print
 * Return: 1 if success or -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
