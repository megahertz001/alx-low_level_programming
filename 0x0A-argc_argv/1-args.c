#include <stdio.h>
/**
 * main - prints the number of argument
 * @argc: number of argument
 * @argv: array of arguments
 * Return: return 0 always
 */
int main (int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
