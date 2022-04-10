#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse
 * Return: zero always
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
