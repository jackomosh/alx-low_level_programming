#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
	}
}
