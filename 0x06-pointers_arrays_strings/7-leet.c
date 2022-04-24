#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int i, ii;
	char low_letters[] = "aeotl";
	char upp_letters[] = "AEOTL";
	char numbers[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (s[i] == low_letters[ii] || s[i] == upp_letters[ii])
			{
				s[i] = numbers[ii];
				break;
			}
		}
	}

	return (s);
}
