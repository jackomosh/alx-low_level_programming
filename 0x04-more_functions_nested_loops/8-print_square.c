#include "main.h"

/**
 * print_square - prints a square
 * @size: function parameter
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('#');
	else
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			for (size = 0; size <= 10; size++)
			{
				_putchar('#');
			}
			_putchar('\n');
		if (i == 10)
		{
			break;
		}
	{
	_putchar('\n');
	}
	}
	}
}	
