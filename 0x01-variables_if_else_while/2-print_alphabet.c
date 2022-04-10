#include <stdio.h>
/**
 * main - prints all the aplhabet in lowercases
 * Return: 0 always
 */
int main(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
