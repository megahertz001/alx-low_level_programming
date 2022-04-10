#include <stdio.h>
/**
 * main - print digits of base 10 using the putchar function
 * Return: zero always
 */
int main(void)
{
	int n;

	for (n = 48; n < 58 ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
