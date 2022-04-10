#include <stdio.h>
/**
 * main - print combination of two digits
 * Return: zero always
 */
int main(void)
{
	int e, i;

	e = 48;
	while (e < 58)
	{
		i = 48;
		while (i <58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
					break;
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
