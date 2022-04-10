#include <stdio.h>
/**
 * main - print all lowercase letter a-z
 * except q and e
 * Return: zero always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
