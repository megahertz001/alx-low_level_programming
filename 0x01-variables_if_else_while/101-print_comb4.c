#include <stdio.h>
/**
 * main - prints a number of 3 different digits
 * Return: zero always
 */
int main(void)
{
	int a, b, c;

	a = 48;
	while (a < 58)
	{
		b = 49;
		while (b < 58)
		{
			c = 50;
			while (c < 58)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 56 && b == 57 c == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

