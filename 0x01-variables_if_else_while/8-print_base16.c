#include <stdio.h>
/**
 * main - print numbers og base 16
 * Return: zero always
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n  < 58; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
